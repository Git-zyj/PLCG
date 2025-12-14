/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220653
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
    var_16 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)37361)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (21U))), (((/* implicit */unsigned int) ((var_11) + (var_2))))))), (min((min((var_8), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((22U) | (4294967262U))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (arr_3 [i_0] [i_2]) : (arr_3 [i_0] [i_0])));
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 7; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */_Bool) arr_5 [i_3 + 2] [i_0] [i_3 + 3]);
                        /* LoopSeq 4 */
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((unsigned char) var_4)))));
                            var_20 = ((/* implicit */unsigned short) arr_6 [i_0]);
                            var_21 = ((/* implicit */short) ((signed char) arr_11 [i_0] [i_3 + 3] [i_2] [i_0] [i_2]));
                            arr_12 [i_0] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) arr_1 [i_4]);
                        }
                        for (int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            arr_15 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */int) 21U);
                            var_22 = ((/* implicit */unsigned int) ((signed char) arr_13 [i_3] [i_3] [i_3 + 1] [i_3] [i_3 + 3] [i_3] [i_3]));
                        }
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_1] [i_0] [i_0] = (-(arr_0 [i_3 + 3]));
                            var_23 ^= (-(arr_13 [i_2] [i_3] [i_3] [i_2] [i_3] [i_3 + 3] [i_3 + 4]));
                            arr_20 [i_0] [i_1] [i_2] [(short)4] [i_6] [i_6] |= ((/* implicit */unsigned int) arr_7 [(signed char)6] [i_1] [i_2] [i_2] [i_3] [i_2]);
                            arr_21 [i_0] = ((/* implicit */unsigned short) arr_4 [i_0] [i_2] [i_3 + 2]);
                        }
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */_Bool) ((short) arr_10 [i_0] [i_0] [i_3 - 1] [i_7] [i_7] [i_0]));
                            var_25 = ((/* implicit */short) ((((arr_10 [i_0] [i_0] [i_2] [i_3] [i_2] [i_2]) <= (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3 + 3] [i_7] [i_0] [i_7] [i_7]))) : (4294967260U)));
                            arr_25 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) 26U))) ? (4294967275U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_12))))));
                        }
                        arr_26 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967275U)) ? (var_10) : (((/* implicit */unsigned int) arr_3 [i_0] [i_2])))))));
                    }
                    for (long long int i_8 = 1; i_8 < 8; i_8 += 3) 
                    {
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_2] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967270U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_30 [i_0] [i_8 - 1] [i_8 - 1] [i_0]))));
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((unsigned int) 34U)))));
                    }
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((unsigned long long int) arr_1 [i_1])))));
                    /* LoopSeq 3 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            var_28 ^= var_6;
                            arr_38 [i_0] [i_0] [i_0] [i_0] [i_10] = ((/* implicit */unsigned short) ((unsigned long long int) 33U));
                            var_29 += ((/* implicit */int) var_10);
                            var_30 = ((/* implicit */long long int) 33U);
                        }
                        for (unsigned char i_11 = 2; i_11 < 9; i_11 += 2) 
                        {
                            var_31 ^= ((/* implicit */unsigned char) 32U);
                            var_32 *= ((/* implicit */short) (~(((/* implicit */int) arr_7 [i_11] [i_1] [i_11 - 2] [i_9 - 1] [i_11 + 1] [i_11]))));
                        }
                        var_33 = ((/* implicit */int) ((long long int) 4294967262U));
                        var_34 = ((/* implicit */_Bool) ((((_Bool) arr_33 [i_0] [i_1] [i_0] [i_0])) ? (21U) : (4294967285U)));
                        var_35 = ((/* implicit */_Bool) var_4);
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            var_36 = ((/* implicit */unsigned short) var_10);
                            var_37 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) 33U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_2] [i_1] [i_13] [i_1]))) : (arr_29 [i_12] [i_1] [i_2] [i_0]))));
                            arr_46 [i_0] [i_0] [i_0] [i_12] [i_13] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 26U)))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                        {
                            arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] [i_12] [i_0] = ((/* implicit */int) arr_30 [i_0] [i_2] [i_1] [i_0]);
                            arr_51 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_14] [i_0] [i_0] [i_12] [i_14] [i_12])) ? (((/* implicit */unsigned int) var_14)) : (var_10)));
                            var_38 = ((/* implicit */unsigned int) ((signed char) ((int) arr_24 [i_0] [i_1] [i_0] [i_12] [i_14])));
                            var_39 *= ((/* implicit */short) ((unsigned short) (unsigned char)200));
                            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_8))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_39 [i_14])) : (((/* implicit */int) (short)26953)))) : (((/* implicit */int) (unsigned short)0))));
                        }
                        arr_52 [i_0] [i_0] [i_2] [i_2] [i_0] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 54U)) ? (-422127398) : (((/* implicit */int) (unsigned char)157))));
                        var_41 = ((/* implicit */short) ((unsigned long long int) ((unsigned short) arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_2] [i_12])));
                        var_42 = ((/* implicit */short) arr_3 [i_0] [i_1]);
                    }
                    for (long long int i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        var_43 = arr_6 [i_0];
                        arr_56 [i_0] [i_1] [i_0] [i_1] [i_1] [i_15] = ((/* implicit */_Bool) ((unsigned long long int) ((arr_33 [i_0] [i_1] [i_2] [i_0]) + (((/* implicit */unsigned long long int) arr_3 [i_2] [i_2])))));
                        arr_57 [i_0] [i_1] [i_1] [i_15] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)105))));
                        var_44 = ((/* implicit */signed char) 20U);
                    }
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_16 = 3; i_16 < 9; i_16 += 2) 
        {
            arr_61 [i_0] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_12))));
            /* LoopNest 2 */
            for (short i_17 = 0; i_17 < 11; i_17 += 1) 
            {
                for (unsigned char i_18 = 0; i_18 < 11; i_18 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            arr_70 [i_0] [i_0] [i_17] [i_0] [i_0] [i_17] [i_0] = ((/* implicit */long long int) ((unsigned char) arr_39 [i_16 + 1]));
                            var_45 -= ((/* implicit */short) 4294967285U);
                            arr_71 [i_0] [i_19] [i_18] [i_0] [i_17] [i_16] [i_0] = ((/* implicit */unsigned short) 4294967269U);
                            var_46 -= ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
                        }
                        for (unsigned int i_20 = 0; i_20 < 11; i_20 += 2) 
                        {
                            var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) arr_69 [i_20] [i_20] [i_16] [i_18] [i_20]))));
                            var_48 = ((/* implicit */unsigned short) 4294967275U);
                            arr_74 [i_20] [i_20] [i_18] [i_17] [i_20] [i_20] &= ((/* implicit */int) ((arr_69 [i_20] [i_20] [i_17] [i_18] [i_20]) == (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                            var_49 &= ((/* implicit */unsigned long long int) arr_45 [i_20] [i_20] [i_17] [i_0] [i_20] [i_17]);
                            arr_75 [i_0] [i_20] [i_0] [i_18] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_16] [i_16] [i_16] [i_16 - 2] [i_16 - 2] [i_16 - 2])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_16] [i_16] [i_16] [i_16 + 1] [i_16 + 1] [i_18])))));
                        }
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                        {
                            arr_79 [i_0] [i_0] [i_17] [i_18] [i_21] = ((/* implicit */int) 4294967263U);
                            var_50 = ((/* implicit */unsigned char) arr_9 [i_0] [i_16] [i_16] [i_0] [i_0] [i_21]);
                        }
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                        {
                            arr_82 [i_0] [i_0] [i_16] [i_17] [i_17] [i_18] [i_22] = ((/* implicit */unsigned long long int) (unsigned short)9042);
                            arr_83 [i_0] [i_0] [i_16] [i_0] [i_18] [i_18] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_55 [i_16 - 3] [i_16 + 1])) ? (((/* implicit */unsigned long long int) ((int) arr_7 [i_0] [i_0] [i_17] [i_0] [i_22] [i_22]))) : (var_4)));
                            arr_84 [i_0] [i_0] [i_17] [i_17] [i_0] = ((/* implicit */unsigned short) 50U);
                            var_51 = ((/* implicit */short) ((((_Bool) var_8)) ? (4294967275U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_16] [i_16] [i_18] [i_22])))));
                            var_52 -= ((/* implicit */unsigned short) (+(1475025630)));
                        }
                        var_53 = ((/* implicit */short) ((int) (((_Bool)1) || ((_Bool)1))));
                        /* LoopSeq 1 */
                        for (long long int i_23 = 0; i_23 < 11; i_23 += 2) 
                        {
                            arr_88 [i_0] [i_0] [i_17] [i_17] [i_23] = ((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_17] [i_16 + 2] [i_0] [i_23]);
                            arr_89 [i_0] [i_0] [i_23] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 32U)) ? (((/* implicit */int) arr_55 [i_16] [i_16])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_17] [i_18] [i_23]))))) ^ (48U)));
                            var_54 = ((/* implicit */int) var_8);
                        }
                    }
                } 
            } 
        }
        for (unsigned int i_24 = 0; i_24 < 11; i_24 += 1) 
        {
            arr_93 [i_0] [i_24] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((int) var_11))) : (((long long int) var_4))));
            var_55 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0])) ? ((-(var_15))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_90 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)9042))))));
            /* LoopNest 3 */
            for (unsigned int i_25 = 1; i_25 < 9; i_25 += 2) 
            {
                for (short i_26 = 0; i_26 < 11; i_26 += 3) 
                {
                    for (unsigned char i_27 = 0; i_27 < 11; i_27 += 2) 
                    {
                        {
                            arr_103 [i_0] [i_24] [i_25 + 2] [i_26] [i_24] = ((/* implicit */signed char) arr_47 [i_0] [i_0] [i_25] [i_26] [i_25]);
                            var_56 -= ((((_Bool) arr_36 [i_0] [i_0] [i_24] [i_0] [i_26] [i_26] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) arr_59 [i_0] [i_0] [i_27])) ? (((/* implicit */unsigned long long int) var_15)) : (var_8))));
                        }
                    } 
                } 
            } 
            var_57 = ((/* implicit */long long int) arr_101 [i_0]);
        }
        for (signed char i_28 = 1; i_28 < 10; i_28 += 3) 
        {
            var_58 = ((/* implicit */short) -422127398);
            var_59 = ((/* implicit */unsigned char) var_10);
        }
    }
    for (int i_29 = 0; i_29 < 14; i_29 += 3) 
    {
        arr_108 [i_29] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1951878779)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)56485)), (50U)))) : (((((/* implicit */unsigned long long int) 30U)) - (arr_107 [i_29])))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_106 [i_29]))))) : (max((((/* implicit */unsigned int) (_Bool)1)), (min((((/* implicit */unsigned int) 701790974)), (4U)))))));
        /* LoopNest 2 */
        for (short i_30 = 0; i_30 < 14; i_30 += 3) 
        {
            for (unsigned char i_31 = 0; i_31 < 14; i_31 += 2) 
            {
                {
                    arr_115 [i_29] [i_31] |= (~(min((((/* implicit */unsigned long long int) ((unsigned char) var_3))), ((~(arr_107 [i_30]))))));
                    arr_116 [i_29] [i_29] [i_29] [i_31] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((20U), (((/* implicit */unsigned int) -422127398))))), (min((((/* implicit */unsigned long long int) -422127398)), (var_4)))));
                    var_60 = ((/* implicit */short) min((var_60), (((/* implicit */short) ((unsigned short) (_Bool)1)))));
                    var_61 += ((/* implicit */_Bool) 21U);
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_32 = 0; i_32 < 14; i_32 += 1) 
        {
            for (unsigned short i_33 = 0; i_33 < 14; i_33 += 2) 
            {
                {
                    var_62 = ((/* implicit */unsigned short) max((var_62), (((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) min((-4554295088740858533LL), (((/* implicit */long long int) 836018167U))))), (min((var_8), (((/* implicit */unsigned long long int) arr_124 [i_29] [i_32] [i_33] [i_33])))))), (max((((unsigned long long int) arr_121 [i_33] [i_33])), (min((9175620768102994233ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))))))));
                    var_63 = ((/* implicit */short) max((var_63), (var_12)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_34 = 2; i_34 < 11; i_34 += 2) /* same iter space */
    {
        var_64 = ((/* implicit */_Bool) max((var_64), ((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_126 [i_34] [i_34]))) : (var_4))))))));
        /* LoopNest 2 */
        for (signed char i_35 = 0; i_35 < 15; i_35 += 1) 
        {
            for (unsigned short i_36 = 0; i_36 < 15; i_36 += 3) 
            {
                {
                    arr_133 [i_35] = ((/* implicit */signed char) var_13);
                    var_65 *= ((/* implicit */unsigned long long int) ((long long int) arr_127 [i_34 - 1]));
                    arr_134 [i_35] [i_35] = ((/* implicit */int) (unsigned short)9070);
                    var_66 = ((/* implicit */short) min((var_66), (((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_37 = 1; i_37 < 1; i_37 += 1) 
        {
            for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
            {
                for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
                {
                    {
                        arr_143 [i_34] [i_34] &= ((/* implicit */long long int) (((+(((/* implicit */int) arr_132 [i_38] [i_38])))) / (((/* implicit */int) (unsigned char)105))));
                        arr_144 [i_37] [i_38] = ((/* implicit */unsigned short) ((int) arr_127 [i_38]));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_40 = 2; i_40 < 11; i_40 += 2) /* same iter space */
    {
        var_67 = ((/* implicit */signed char) ((unsigned char) arr_129 [i_40 - 1] [i_40 + 2] [i_40 - 1]));
        var_68 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)181))) ? (((/* implicit */int) arr_127 [i_40 + 1])) : (((/* implicit */int) (_Bool)1))));
    }
}
