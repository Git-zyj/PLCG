/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45480
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (short)-21783))));
    var_11 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */int) max(((unsigned short)60760), (((/* implicit */unsigned short) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */int) var_1)) < ((-(((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) arr_0 [5])) : (((/* implicit */int) arr_0 [i_0]))))))));
        var_13 = ((/* implicit */int) (_Bool)1);
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_14 ^= ((((/* implicit */_Bool) arr_6 [i_0 + 2])) && (((/* implicit */_Bool) arr_6 [i_0 + 2])));
            arr_7 [i_0] [i_0 - 1] = ((/* implicit */short) (-(2147483648U)));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
        {
            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (-((+(arr_1 [i_0] [i_0])))));
            var_15 &= ((/* implicit */unsigned short) ((int) ((short) arr_9 [i_0])));
        }
        for (short i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
        {
            arr_16 [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -10)) ? (4294967287U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_3])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (short)32754))))) : (min((((/* implicit */unsigned int) (short)29244)), (2147483648U)))))));
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (2147483638U))))));
        }
    }
    for (int i_4 = 3; i_4 < 16; i_4 += 4) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_4 [i_4 + 2])) ? (((/* implicit */int) arr_8 [(unsigned short)4] [i_4 + 1])) : (var_6))) : (((/* implicit */int) max(((short)-24972), (((/* implicit */short) (signed char)31)))))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_30 [i_7] [i_7] = ((/* implicit */short) ((_Bool) (short)-21783));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) == (((/* implicit */int) arr_12 [i_4 - 3] [i_8])))) ? (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned short) (signed char)-1)), (arr_26 [i_6] [i_5] [i_7] [i_6]))))) : (((/* implicit */int) (short)32766)))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) > (((((/* implicit */_Bool) max(((short)-1), (var_7)))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) ((signed char) arr_5 [i_5] [i_5])))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_10 = 0; i_10 < 18; i_10 += 1) 
            {
                for (signed char i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    for (unsigned short i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        {
                            var_19 = ((((((unsigned int) (short)-27311)) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-27333))))) * (((/* implicit */unsigned int) (+(((((/* implicit */int) (short)27311)) / (((/* implicit */int) (short)-3551))))))));
                            var_20 *= ((/* implicit */unsigned int) arr_29 [i_4 + 1] [i_4] [i_4] [i_4] [i_4]);
                            arr_43 [i_4] [i_4] [i_9] [i_10] [i_11] [i_12] = ((/* implicit */short) -666040811);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_13 = 0; i_13 < 18; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        arr_48 [7U] [i_9] [i_13] [i_14] = ((/* implicit */unsigned int) (((-(arr_46 [i_4] [i_4] [i_14] [i_14] [i_13]))) >= (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)26311)))))));
                        var_21 = arr_22 [i_4] [i_9] [i_14];
                        var_22 = ((/* implicit */signed char) max((((/* implicit */int) arr_15 [i_4])), (min((((/* implicit */int) arr_23 [i_13] [i_14] [i_14] [i_4 + 2])), (arr_10 [i_4 + 1] [i_4 - 1] [i_4 - 1])))));
                        /* LoopSeq 1 */
                        for (int i_15 = 0; i_15 < 18; i_15 += 4) 
                        {
                            arr_51 [i_4] [i_4] [i_13] [i_13] [i_15] [i_4] = ((/* implicit */int) ((unsigned int) arr_32 [i_4 - 1] [i_4 - 1]));
                            arr_52 [i_4 + 1] [i_4] [i_13] = arr_0 [(unsigned short)7];
                        }
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) ((int) var_4)))))))));
                    }
                } 
            } 
            arr_53 [i_9] [i_9] = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_37 [i_4 - 1] [i_9] [i_9] [i_9]))))), (((((/* implicit */_Bool) (short)-3551)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4 + 1]))) : (10160766166253325227ULL)))))));
            /* LoopSeq 4 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_24 -= ((/* implicit */unsigned short) max((arr_50 [0] [i_4] [0] [i_16] [i_16]), (((/* implicit */unsigned int) (_Bool)0))));
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                {
                    for (int i_18 = 0; i_18 < 18; i_18 += 1) 
                    {
                        {
                            var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */int) arr_20 [i_4 - 3] [i_4 - 3] [i_4 - 3])) < (((/* implicit */int) arr_20 [i_4 + 1] [i_4] [i_4 + 2]))))) : (((/* implicit */int) arr_12 [i_4 - 2] [i_4 - 1]))));
                            arr_61 [i_17] [i_16] [i_17] = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_42 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))));
                        }
                    } 
                } 
            }
            for (short i_19 = 0; i_19 < 18; i_19 += 1) 
            {
                arr_65 [i_4] [12U] &= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)7))));
                arr_66 [i_19] [i_9] [i_9] = ((/* implicit */signed char) var_6);
            }
            for (short i_20 = 3; i_20 < 15; i_20 += 1) 
            {
                arr_69 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((arr_50 [i_4 - 3] [i_4] [16ULL] [16ULL] [i_4 + 2]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4 + 2]))))) ? (arr_62 [i_20 + 2] [i_20] [i_4 + 1] [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_2))))) <= (((/* implicit */int) arr_31 [i_4 + 2]))))))));
                /* LoopSeq 1 */
                for (short i_21 = 0; i_21 < 18; i_21 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_22 = 0; i_22 < 18; i_22 += 2) 
                    {
                        var_26 = ((/* implicit */_Bool) arr_5 [i_20 - 1] [i_20 - 1]);
                        arr_77 [i_22] [i_4] = ((/* implicit */unsigned char) var_9);
                        arr_78 [(unsigned char)14] [i_21] [i_21] [i_21] [i_22] [i_4] [i_21] = ((/* implicit */short) ((int) var_8));
                    }
                    var_27 = ((/* implicit */_Bool) ((int) max((arr_76 [(signed char)17] [i_9] [(_Bool)1] [i_9] [i_9] [i_9] [i_9]), (((/* implicit */long long int) var_6)))));
                    arr_79 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_33 [i_20 - 1] [i_20 - 2] [i_4 + 1]))))) ? (((((/* implicit */int) var_7)) / (((/* implicit */int) arr_33 [i_20 - 1] [(short)10] [i_4 + 1])))) : ((-(((/* implicit */int) arr_33 [i_20 - 1] [i_9] [i_4 + 1]))))));
                    arr_80 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) arr_54 [i_4 + 2]);
                    /* LoopSeq 2 */
                    for (int i_23 = 0; i_23 < 18; i_23 += 1) /* same iter space */
                    {
                        arr_84 [i_4] [i_9] [i_20] [i_21] [i_9] [i_9] [i_23] = ((/* implicit */short) arr_63 [i_4] [i_21] [(unsigned char)0]);
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_72 [i_20 + 2] [i_9] [i_4 - 1] [i_20 + 3]))))) || ((!(arr_72 [i_20] [i_23] [i_4 - 2] [i_20 + 1])))));
                        arr_85 [i_23] [i_21] [(_Bool)1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-24))) : (arr_59 [i_4 + 1] [i_21]))))) : (((unsigned int) max((((/* implicit */int) var_3)), (arr_10 [i_23] [i_9] [i_4]))))));
                    }
                    /* vectorizable */
                    for (int i_24 = 0; i_24 < 18; i_24 += 1) /* same iter space */
                    {
                        var_29 ^= (~(((/* implicit */int) (signed char)26)));
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_54 [i_4 - 3]))));
                    }
                }
            }
            for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
            {
                arr_90 [i_25 + 1] [i_25 + 1] [i_25] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)15872))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)15872)) ^ (((/* implicit */int) (short)384))))) : (((4294967287U) & (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                /* LoopSeq 3 */
                for (unsigned short i_26 = 2; i_26 < 15; i_26 += 1) 
                {
                    arr_93 [i_26] [i_25] [i_4] = ((/* implicit */unsigned short) var_5);
                    arr_94 [i_25] [i_9] [i_25] [i_26] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (short)-32754)) : (754645430)));
                    var_31 &= ((((((/* implicit */int) (short)12075)) * (((/* implicit */int) (short)21783)))) < (((/* implicit */int) ((signed char) arr_14 [i_4 + 1]))));
                    /* LoopSeq 4 */
                    for (long long int i_27 = 1; i_27 < 15; i_27 += 4) 
                    {
                        var_32 = ((/* implicit */short) (+(((/* implicit */int) (short)-21783))));
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_33 [i_26 + 2] [i_26 - 2] [i_26 + 3])), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) var_3))))))) ? (((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (unsigned short)34959)))) : (((/* implicit */int) (unsigned short)34228))));
                    }
                    for (unsigned int i_28 = 3; i_28 < 14; i_28 += 2) /* same iter space */
                    {
                        arr_103 [i_25] [i_9] [i_25] [(short)5] [i_28] = ((/* implicit */_Bool) arr_55 [i_9] [i_9]);
                        var_34 = ((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned short)31308)) << (((var_2) - (1174494594U)))))));
                        arr_104 [i_25] [(_Bool)1] [i_25] [i_9] [i_25] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((+(arr_70 [i_26] [(short)6] [i_9] [i_4 - 1]))), (((/* implicit */int) ((_Bool) var_4))))))));
                    }
                    for (unsigned int i_29 = 3; i_29 < 14; i_29 += 2) /* same iter space */
                    {
                        arr_107 [i_4] [i_25] [i_25] [(short)15] = ((/* implicit */unsigned long long int) 2);
                        arr_108 [i_4] [i_9] [i_25] = ((/* implicit */unsigned int) arr_4 [i_4 + 2]);
                    }
                    /* vectorizable */
                    for (unsigned int i_30 = 0; i_30 < 18; i_30 += 1) 
                    {
                        arr_111 [i_9] [i_9] [i_30] [i_25] [i_25] [i_4] = ((/* implicit */short) (~(((/* implicit */int) arr_13 [i_4 + 2]))));
                        arr_112 [i_25] [i_25] [i_25 + 1] [i_25] [i_25 + 1] [i_25] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_24 [i_4] [i_25] [i_25] [i_4])) : (((/* implicit */int) var_3))));
                        arr_113 [0U] [i_9] [i_9] [i_25] [0U] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967287U)) ? (arr_54 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)26)))));
                        arr_114 [i_30] [i_25] [i_25] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_88 [i_4 + 1] [i_25 + 1] [i_4] [i_26 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-21783)) && (((/* implicit */_Bool) (short)-3565)))))) : (arr_27 [i_4 - 3] [i_9])));
                    }
                }
                for (int i_31 = 0; i_31 < 18; i_31 += 4) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned long long int) ((unsigned short) min((((unsigned int) -1261839717)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                    var_36 = ((/* implicit */signed char) arr_109 [i_25] [i_31] [i_25]);
                    arr_119 [(unsigned char)8] [i_31] [i_9] [i_31] [i_4 - 3] &= 1849363883U;
                    /* LoopSeq 2 */
                    for (unsigned short i_32 = 0; i_32 < 18; i_32 += 1) 
                    {
                        arr_122 [i_31] &= ((/* implicit */_Bool) max(((~(((((/* implicit */int) var_4)) << (((((/* implicit */int) var_9)) - (55))))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                        var_37 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-27321)) ? (((/* implicit */int) arr_31 [i_25 + 1])) : (((/* implicit */int) (short)-3551)))) >> (((/* implicit */int) min((var_4), (((/* implicit */short) arr_31 [i_25 + 1])))))));
                        arr_123 [i_4] [i_4] [i_4] [i_25] [i_4] [(signed char)3] = ((((/* implicit */int) ((arr_6 [i_4 + 1]) <= (((/* implicit */int) (unsigned short)31285))))) < (((/* implicit */int) ((var_0) > (((/* implicit */unsigned long long int) arr_97 [i_4] [i_4 + 1] [i_4] [i_4 + 2] [(signed char)12]))))));
                        arr_124 [i_25] [(_Bool)1] [i_25] [i_9] [i_4] = ((/* implicit */_Bool) arr_12 [i_32] [i_9]);
                    }
                    /* vectorizable */
                    for (int i_33 = 1; i_33 < 17; i_33 += 1) 
                    {
                        arr_127 [i_4] [i_9] [i_31] [i_31] [i_33] &= ((/* implicit */short) ((arr_42 [i_4 - 2] [i_31] [i_4 - 2] [i_33 + 1] [i_33] [i_33]) ? (((((/* implicit */int) (short)-3538)) + (((/* implicit */int) (short)-3583)))) : (((/* implicit */int) ((signed char) arr_5 [i_4] [i_4])))));
                        var_38 = ((/* implicit */_Bool) max((var_38), ((((~(((/* implicit */int) (short)-27311)))) != (((/* implicit */int) ((((/* implicit */int) arr_81 [5U] [i_9] [i_25] [5U] [i_33])) <= (arr_97 [i_4] [i_9] [i_31] [i_4] [i_33 + 1]))))))));
                    }
                }
                /* vectorizable */
                for (int i_34 = 0; i_34 < 18; i_34 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_35 = 2; i_35 < 16; i_35 += 4) 
                    {
                        arr_134 [i_25] [i_9] [i_25] [i_34] [i_35] = ((((/* implicit */int) ((arr_63 [i_25] [i_25] [i_25]) || (((/* implicit */_Bool) var_4))))) | (((/* implicit */int) arr_121 [i_25] [i_25 + 1] [(signed char)4] [i_34] [i_34])));
                        var_39 = ((/* implicit */_Bool) var_6);
                        var_40 ^= ((/* implicit */short) ((int) arr_31 [i_25 + 1]));
                        var_41 = ((/* implicit */_Bool) (+(((int) var_1))));
                    }
                    for (short i_36 = 3; i_36 < 17; i_36 += 1) 
                    {
                        var_42 = ((/* implicit */unsigned int) ((long long int) ((_Bool) var_7)));
                        var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) arr_133 [i_4] [i_4] [i_4 + 2] [i_4] [i_4]))));
                        arr_138 [(_Bool)1] [i_9] [i_25] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_87 [i_4] [i_9] [i_25] [i_34] [i_36]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((unsigned int) var_8))));
                    }
                    var_44 = (short)3551;
                    var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) (signed char)52))));
                    arr_139 [i_4] [i_4] [i_25] [i_4] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-53))));
                }
            }
        }
    }
    var_46 = ((/* implicit */_Bool) max((var_46), (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) <= (((unsigned int) (short)-3583))))));
}
