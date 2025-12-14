/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45028
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) var_6);
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        for (unsigned int i_2 = 3; i_2 < 13; i_2 += 2) 
        {
            {
                var_19 = ((/* implicit */short) ((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned char)20))));
                var_20 ^= ((/* implicit */unsigned long long int) var_13);
                arr_10 [i_2] = ((/* implicit */signed char) min((((/* implicit */int) arr_3 [i_2 - 2] [i_1])), (arr_9 [i_1] [i_2 + 1])));
            }
        } 
    } 
    var_21 ^= ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 331769038)) > (1103273670U)))), (var_15))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) & (((((/* implicit */int) var_5)) << (((((/* implicit */int) var_7)) - (102))))))))));
    var_22 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-47)) ? (arr_9 [i_3 + 2] [i_3 + 2]) : (((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 2] [(signed char)10]))));
        var_24 = ((/* implicit */short) var_11);
    }
    /* vectorizable */
    for (signed char i_4 = 4; i_4 < 19; i_4 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_5 = 4; i_5 < 19; i_5 += 3) 
        {
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_4 - 4])) ? (((/* implicit */int) arr_16 [i_5 - 2])) : (((/* implicit */int) arr_15 [i_4 - 4]))));
            var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [i_4 - 4]))));
            arr_18 [i_5 - 1] &= arr_13 [i_4 - 2];
            var_27 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_17 [(short)2] [i_5 - 3])));
            var_28 = ((/* implicit */unsigned short) 2676194442U);
        }
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_29 += ((/* implicit */unsigned int) (((+(((/* implicit */int) var_3)))) >= (((/* implicit */int) var_13))));
                arr_23 [8U] = ((/* implicit */int) var_2);
                var_30 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_4 + 2]))));
                /* LoopSeq 2 */
                for (int i_8 = 1; i_8 < 18; i_8 += 3) 
                {
                    var_31 = ((/* implicit */long long int) arr_15 [i_4]);
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [(signed char)6] [i_6] [i_8 + 1] [i_4 - 2])) ? (((/* implicit */int) arr_25 [i_4] [i_6] [i_8 + 1] [i_4 + 2])) : (((/* implicit */int) arr_25 [i_8] [i_6] [i_8 + 3] [i_4 - 2]))));
                    var_33 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_4])) ? (((((/* implicit */_Bool) arr_20 [i_4] [i_7])) ? (var_9) : (((/* implicit */unsigned long long int) var_8)))) : (((unsigned long long int) 3191693634U))));
                }
                for (short i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) & (((((((/* implicit */int) arr_14 [i_4])) + (2147483647))) << (((((/* implicit */int) var_3)) - (1)))))));
                    var_35 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)233))));
                    arr_29 [i_4] [19LL] = ((/* implicit */signed char) var_2);
                }
            }
            arr_30 [i_6] [i_4 - 2] = ((unsigned short) arr_13 [i_6]);
            var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_16 [i_6]))));
        }
        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
        {
            arr_35 [i_4] &= ((/* implicit */unsigned long long int) arr_34 [i_4]);
            /* LoopSeq 1 */
            for (long long int i_11 = 1; i_11 < 18; i_11 += 3) 
            {
                arr_39 [i_11] [i_11] [(unsigned short)6] [i_4] = ((/* implicit */long long int) ((unsigned short) var_9));
                arr_40 [i_4 + 1] [i_4 + 1] [i_11] = (~(((/* implicit */int) arr_28 [i_4] [i_4] [i_4] [i_4] [i_4 - 1])));
                arr_41 [i_4] = ((/* implicit */unsigned char) -1193241933801904672LL);
            }
        }
        var_37 = ((/* implicit */signed char) var_9);
        arr_42 [i_4 - 1] = ((/* implicit */unsigned long long int) var_8);
        var_38 ^= ((/* implicit */short) (-(((var_10) ? (arr_34 [i_4 - 4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4])))))));
    }
    for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (short i_14 = 0; i_14 < 24; i_14 += 2) 
            {
                {
                    var_39 ^= ((/* implicit */unsigned int) (((+(var_15))) >> (((1103273643U) - (1103273590U)))));
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 0; i_15 < 24; i_15 += 4) 
                    {
                        for (signed char i_16 = 0; i_16 < 24; i_16 += 1) 
                        {
                            {
                                var_40 = min((((/* implicit */unsigned short) ((signed char) arr_48 [i_12]))), (((unsigned short) var_0)));
                                var_41 = ((/* implicit */unsigned char) (((-(var_6))) & (((/* implicit */long long int) (+(((int) var_15)))))));
                                var_42 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_47 [i_13] [i_15] [i_13]))));
                            }
                        } 
                    } 
                    arr_57 [i_13] = ((/* implicit */unsigned char) arr_46 [i_12]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_17 = 0; i_17 < 24; i_17 += 1) 
        {
            for (unsigned short i_18 = 0; i_18 < 24; i_18 += 2) 
            {
                {
                    var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_49 [i_12])) ? (((/* implicit */int) ((short) 3191693657U))) : (((/* implicit */int) ((unsigned char) -671108836)))));
                    /* LoopNest 2 */
                    for (unsigned short i_19 = 2; i_19 < 21; i_19 += 2) 
                    {
                        for (unsigned short i_20 = 0; i_20 < 24; i_20 += 3) 
                        {
                            {
                                arr_71 [i_12] [i_12] [i_12] [i_12] [i_17] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_54 [i_18] [i_17])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_70 [i_19 + 1] [i_17] [i_19 + 1])))) : (arr_65 [i_12])))) ? (arr_56 [(signed char)14] [i_17] [i_18] [(signed char)14] [(signed char)14] [i_17]) : (((var_1) & (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_12])))))));
                                var_44 = ((/* implicit */long long int) (~(var_15)));
                            }
                        } 
                    } 
                    arr_72 [i_12] [i_12] [i_18] |= ((/* implicit */signed char) max(((~(((/* implicit */int) arr_48 [i_18])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_49 [i_17])) : (((/* implicit */int) arr_49 [i_18]))))));
                }
            } 
        } 
        arr_73 [i_12] = ((/* implicit */short) var_11);
        arr_74 [14ULL] = ((/* implicit */long long int) arr_51 [i_12] [i_12] [i_12] [i_12]);
        var_45 = ((/* implicit */int) ((unsigned int) var_7));
    }
    /* vectorizable */
    for (unsigned char i_21 = 0; i_21 < 23; i_21 += 3) 
    {
        arr_78 [i_21] [i_21] = ((/* implicit */unsigned int) ((unsigned char) 544109119));
        /* LoopSeq 2 */
        for (unsigned long long int i_22 = 0; i_22 < 23; i_22 += 2) 
        {
            arr_81 [i_21] = ((/* implicit */short) (((-(((/* implicit */int) var_3)))) > (((/* implicit */int) var_10))));
            var_46 = ((/* implicit */signed char) arr_67 [i_21] [i_22]);
            /* LoopSeq 3 */
            for (unsigned int i_23 = 3; i_23 < 22; i_23 += 1) 
            {
                var_47 = ((/* implicit */unsigned short) arr_53 [i_23] [i_23] [i_23 - 1] [i_23] [i_23]);
                var_48 = ((/* implicit */unsigned long long int) ((signed char) arr_43 [i_22] [i_22]));
            }
            for (unsigned long long int i_24 = 0; i_24 < 23; i_24 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_25 = 0; i_25 < 23; i_25 += 2) 
                {
                    var_49 = ((unsigned long long int) var_17);
                    var_50 = ((/* implicit */int) ((long long int) arr_88 [i_21] [i_21] [i_21] [i_21]));
                }
                arr_90 [i_24] [i_21] [i_21] [i_21] = ((/* implicit */short) var_11);
                arr_91 [i_21] [i_21] [i_21] = ((unsigned char) (-(((/* implicit */int) arr_61 [i_21] [19ULL] [i_21]))));
                var_51 |= ((/* implicit */int) var_11);
            }
            for (unsigned int i_26 = 0; i_26 < 23; i_26 += 2) 
            {
                var_52 ^= var_1;
                arr_94 [i_26] [i_21] [i_26] [i_22] = ((/* implicit */int) arr_56 [i_21] [i_22] [21U] [i_22] [i_26] [i_26]);
                /* LoopSeq 1 */
                for (unsigned char i_27 = 0; i_27 < 23; i_27 += 2) 
                {
                    arr_98 [i_21] [i_22] [i_26] [i_27] = ((/* implicit */signed char) (-(arr_50 [i_22] [i_21])));
                    arr_99 [i_21] [i_22] [i_21] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_26] [i_27])) ? (arr_50 [i_21] [i_21]) : (arr_50 [i_21] [i_22])));
                    arr_100 [i_21] [i_21] [i_26] [i_27] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1193241933801904647LL)) - (arr_92 [i_27]))))));
                }
            }
            var_53 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_93 [i_21] [i_21] [i_21]))));
            arr_101 [i_21] = ((/* implicit */unsigned int) var_12);
        }
        for (unsigned short i_28 = 3; i_28 < 21; i_28 += 4) 
        {
            arr_104 [(unsigned short)0] [(unsigned short)0] [(short)4] |= ((/* implicit */unsigned char) (+(4877129415966456709LL)));
            /* LoopSeq 4 */
            for (unsigned int i_29 = 0; i_29 < 23; i_29 += 3) 
            {
                var_54 = ((/* implicit */int) ((unsigned char) var_1));
                var_55 += ((/* implicit */signed char) (~(647054986)));
            }
            for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_31 = 1; i_31 < 22; i_31 += 1) 
                {
                    arr_115 [i_21] [i_28] [i_28] [i_30] [i_30 - 1] [i_31] = ((/* implicit */short) ((1630458070) >> (((1618772844U) - (1618772814U)))));
                    arr_116 [i_21] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_51 [i_30] [i_21] [i_30] [i_28]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_32 = 0; i_32 < 23; i_32 += 3) 
                    {
                        arr_119 [i_21] [i_32] [7] [i_31 + 1] [i_30 - 1] [i_28] [i_21] = ((/* implicit */unsigned char) ((unsigned long long int) var_2));
                        arr_120 [i_21] [i_21] [i_21] [i_31] [i_32] = ((/* implicit */_Bool) arr_103 [i_21] [i_28] [i_30 - 1]);
                    }
                    var_56 = ((unsigned int) var_6);
                }
                for (long long int i_33 = 0; i_33 < 23; i_33 += 3) /* same iter space */
                {
                    arr_123 [i_21] [i_28] = ((/* implicit */unsigned char) var_3);
                    var_57 = (~(((/* implicit */int) arr_105 [i_21] [i_30 - 1] [i_28 - 1])));
                    var_58 = ((/* implicit */unsigned int) ((short) var_10));
                    arr_124 [i_21] = ((/* implicit */signed char) ((unsigned char) var_14));
                }
                for (long long int i_34 = 0; i_34 < 23; i_34 += 3) /* same iter space */
                {
                    var_59 = ((/* implicit */unsigned int) var_16);
                    arr_127 [i_21] [i_21] [i_21] [i_21] = ((/* implicit */long long int) ((int) var_8));
                    arr_128 [i_34] [i_30] [i_21] [i_21] [i_21] [i_21] = var_9;
                    arr_129 [i_21] [i_28] [(short)1] [i_30] [i_30] [i_21] = ((/* implicit */unsigned short) var_12);
                }
                for (long long int i_35 = 0; i_35 < 23; i_35 += 3) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                    {
                        var_60 = ((/* implicit */int) arr_111 [(short)13] [(unsigned char)4] [(short)13] [(short)13]);
                        arr_136 [i_21] [i_21] [10ULL] [i_21] [22] [i_21] = ((/* implicit */_Bool) (signed char)-110);
                    }
                    for (long long int i_37 = 0; i_37 < 23; i_37 += 3) 
                    {
                        arr_139 [i_21] [i_28] [i_30 - 1] [i_35] [i_21] [i_35] [i_30 - 1] = ((((((/* implicit */int) var_5)) * (arr_53 [i_21] [i_28] [i_30] [i_35] [i_37]))) | (((/* implicit */int) var_17)));
                        arr_140 [i_21] [i_35] [i_30] [i_28] [i_30] [i_28] [i_21] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) arr_138 [i_21] [i_21] [i_30] [i_35] [i_21])))));
                    }
                    for (int i_38 = 3; i_38 < 21; i_38 += 2) /* same iter space */
                    {
                        var_61 = ((/* implicit */unsigned char) (~(arr_55 [i_30] [i_28] [i_28 - 2] [11] [i_38] [i_28])));
                        var_62 *= ((/* implicit */int) var_3);
                        arr_143 [i_21] [i_35] [i_21] [i_38] [i_38 - 3] [i_21] [i_38] = ((/* implicit */signed char) arr_109 [i_35] [(short)7] [i_28] [i_21]);
                    }
                    for (int i_39 = 3; i_39 < 21; i_39 += 2) /* same iter space */
                    {
                        arr_147 [(unsigned short)8] [i_35] [i_30] [i_28 - 3] [(unsigned short)8] |= ((signed char) arr_126 [i_28 - 3] [i_28 - 3] [i_30 - 1] [(short)0]);
                        var_63 = ((int) (+(var_12)));
                        var_64 = ((/* implicit */unsigned long long int) var_6);
                        arr_148 [15U] [i_21] [i_30 - 1] = ((/* implicit */int) arr_88 [i_21] [i_28 - 2] [i_21] [i_30 - 1]);
                    }
                    arr_149 [18LL] [18LL] [i_21] = ((/* implicit */unsigned char) arr_146 [i_28 - 1] [i_28] [i_28] [i_28 - 2] [i_30] [i_30 - 1] [i_21]);
                }
                var_65 = ((/* implicit */unsigned int) (unsigned char)240);
                arr_150 [(unsigned short)10] [8ULL] &= (~(((/* implicit */int) var_10)));
            }
            for (signed char i_40 = 0; i_40 < 23; i_40 += 2) 
            {
                var_66 = ((/* implicit */unsigned int) arr_121 [(unsigned short)2] [(unsigned short)2] [i_21] [(short)15] [i_40] [i_40]);
                var_67 = ((/* implicit */int) arr_61 [i_21] [i_28] [i_21]);
            }
            for (_Bool i_41 = 0; i_41 < 1; i_41 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_42 = 1; i_42 < 21; i_42 += 2) 
                {
                    var_68 -= ((/* implicit */long long int) (~(((/* implicit */int) arr_135 [i_28 + 1] [i_28 - 3] [i_41] [i_42 + 1] [i_41]))));
                    arr_159 [i_21] [i_21] [i_21] [i_21] = var_16;
                }
                for (unsigned int i_43 = 0; i_43 < 23; i_43 += 4) 
                {
                    arr_162 [10U] [i_28 - 1] [i_28] [i_28] [i_28 + 2] [i_21] = ((/* implicit */long long int) ((unsigned int) arr_109 [i_41] [i_41] [i_41] [i_41]));
                    arr_163 [i_21] [i_28 - 2] [i_21] [i_28 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -996576760)) ? (arr_66 [i_21] [(signed char)2] [i_21] [i_28 - 3]) : (((/* implicit */int) (unsigned char)233))));
                }
                var_69 = (~(((/* implicit */int) arr_153 [14U] [(unsigned short)20] [i_28] [i_21])));
                var_70 = ((/* implicit */int) var_0);
                arr_164 [i_21] [i_21] [i_41] = ((/* implicit */signed char) (~(((/* implicit */int) var_13))));
            }
        }
    }
}
