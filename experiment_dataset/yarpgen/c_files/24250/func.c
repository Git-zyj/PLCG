/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24250
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((2731296846U) >> (((arr_4 [i_1 - 4]) - (1961073855)))));
                arr_6 [i_0] = ((((/* implicit */_Bool) 18ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)45221)) <= (((/* implicit */int) (unsigned short)0)))))) <= (262386402U))))) : (arr_0 [i_0] [i_0]));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) arr_4 [(unsigned char)1]);
                            arr_13 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */int) (unsigned short)65535);
                            var_21 = ((/* implicit */unsigned long long int) ((arr_10 [3U] [i_1] [i_2]) && (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65531)) ? (arr_4 [i_0]) : (((/* implicit */int) (unsigned char)64))))), (arr_11 [i_3] [i_2] [i_1 - 4] [1] [i_0] [i_0]))))));
                            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)64))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_4 = 3; i_4 < 8; i_4 += 2) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned int) (unsigned char)56);
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            arr_20 [i_5] [(unsigned short)6] [i_4] = ((/* implicit */unsigned char) ((arr_7 [i_5] [i_5] [i_5] [i_5]) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4 - 2] [i_4 - 2]))) : (((long long int) arr_1 [i_4 - 1]))));
            var_23 = ((/* implicit */int) ((min(((-(((/* implicit */int) (unsigned short)20313)))), (((/* implicit */int) (unsigned short)65531)))) <= (((int) 15974527632530427284ULL))));
            var_24 -= ((/* implicit */unsigned int) (_Bool)1);
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    {
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((unsigned short) arr_22 [i_6] [i_6] [i_6] [i_6])))));
                        arr_27 [i_4] [i_4] = ((/* implicit */short) (-(arr_19 [i_5] [i_7])));
                    }
                } 
            } 
        }
        arr_28 [i_4] [i_4] = (+(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_23 [i_4] [i_4] [i_4] [i_4 - 1] [i_4])) != (4754356105262245722ULL)))) : (((/* implicit */int) (unsigned char)66)))));
        arr_29 [i_4] = ((/* implicit */int) ((min((((/* implicit */unsigned int) ((((arr_22 [i_4] [i_4 + 1] [i_4 - 1] [i_4 + 2]) + (2147483647))) >> (((((/* implicit */int) (short)-30350)) + (30367)))))), (4032580893U))) > (((/* implicit */unsigned int) (-(((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)-20335)) + (20349))))))))));
        arr_30 [i_4] = ((/* implicit */unsigned short) arr_23 [i_4] [5] [i_4 - 2] [(unsigned short)1] [i_4]);
    }
    for (unsigned char i_8 = 3; i_8 < 23; i_8 += 2) /* same iter space */
    {
        var_26 = 1038764001;
        var_27 = arr_31 [i_8];
        arr_33 [i_8] [i_8] = (~(15U));
    }
    /* vectorizable */
    for (unsigned char i_9 = 3; i_9 < 23; i_9 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_10 = 4; i_10 < 24; i_10 += 2) 
        {
            arr_40 [21LL] [21LL] [13U] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_31 [i_9])))) ? (5679337616802731879ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_9] [(short)18])))));
            /* LoopSeq 4 */
            for (short i_11 = 2; i_11 < 23; i_11 += 3) 
            {
                arr_43 [i_9] [i_9] [(_Bool)1] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_37 [i_11] [i_11] [i_11]))) ? ((~(arr_37 [i_9] [i_9] [i_11]))) : (((657594925) + (((/* implicit */int) (unsigned short)14983))))));
                arr_44 [i_11] [i_10] = ((/* implicit */unsigned char) arr_37 [i_11 - 1] [(unsigned short)16] [i_11 + 1]);
            }
            for (long long int i_12 = 0; i_12 < 25; i_12 += 2) 
            {
                /* LoopSeq 4 */
                for (int i_13 = 3; i_13 < 23; i_13 += 2) 
                {
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) arr_48 [15] [i_10 - 4] [i_12] [i_13 + 2]))));
                    arr_49 [15] [i_10] [i_12] [i_10] [i_13 - 2] = ((/* implicit */unsigned long long int) (-(arr_37 [i_9 - 1] [i_12] [i_12])));
                    var_29 = ((/* implicit */unsigned char) ((4294967295U) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
                    arr_50 [i_9] [i_10] [i_12] [i_12] [i_10 + 1] [i_12] = ((/* implicit */unsigned short) 1743292045U);
                }
                for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 4; i_15 < 22; i_15 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_54 [i_15 + 1] [(unsigned short)1] [i_15 + 3] [i_15] [i_15 - 2])))))));
                        var_31 = ((/* implicit */short) (~(arr_37 [i_9 - 1] [i_10 - 2] [i_15 + 1])));
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */unsigned int) arr_51 [i_15 - 3] [i_15 - 3] [i_15 - 3] [i_15 - 3] [i_15 - 3])) : (arr_38 [i_12] [i_10 - 2] [5U])));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_16 = 1; i_16 < 24; i_16 += 3) 
                    {
                        var_33 = (~(((/* implicit */int) arr_39 [i_9] [i_12])));
                        var_34 = ((/* implicit */_Bool) ((unsigned long long int) (~(920868698))));
                        arr_59 [i_10] [i_12] [i_10] = ((/* implicit */unsigned long long int) ((unsigned short) (-2147483647 - 1)));
                    }
                    for (unsigned char i_17 = 2; i_17 < 23; i_17 += 1) 
                    {
                        var_35 += ((/* implicit */int) (unsigned short)3153);
                        arr_62 [3] [i_9] [i_17] [i_9] [12U] [18ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) 4294967287U))));
                    }
                    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (!((_Bool)1))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_18 = 0; i_18 < 25; i_18 += 2) /* same iter space */
                    {
                        arr_67 [i_9] [i_10 - 4] [i_10 - 4] [i_14] [i_18] [12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 18ULL))) || (((/* implicit */_Bool) -1))));
                        arr_68 [i_9 - 2] [i_12] [(unsigned char)2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_38 [i_10 - 3] [i_12] [i_14])) * (((((/* implicit */_Bool) arr_64 [i_9] [i_10] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45446))) : (arr_48 [i_18] [19LL] [i_12] [i_10])))));
                    }
                    for (unsigned short i_19 = 0; i_19 < 25; i_19 += 2) /* same iter space */
                    {
                        var_37 ^= ((/* implicit */short) 1063312123);
                        var_38 = arr_66 [22U] [i_10] [5U] [i_14] [i_19];
                    }
                    for (unsigned short i_20 = 0; i_20 < 25; i_20 += 2) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned short) 8388607ULL);
                        var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) (-(arr_74 [i_10] [i_9 + 1]))))));
                    }
                }
                for (int i_21 = 1; i_21 < 24; i_21 += 4) /* same iter space */
                {
                    var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) ((unsigned long long int) ((int) -30LL))))));
                    arr_78 [i_9] [i_9] [i_12] [i_21] [i_21] [i_12] = ((/* implicit */unsigned long long int) arr_63 [i_9] [i_9] [i_9]);
                    arr_79 [i_9 + 1] [i_9 + 1] [7LL] [17LL] = arr_61 [i_9] [i_9 - 2] [i_9] [7U] [i_9];
                    var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [(short)18] [i_10 - 2])) ? (arr_55 [i_21 - 1] [i_9 + 2]) : (arr_55 [i_21 - 1] [i_9 - 1])));
                }
                for (int i_22 = 1; i_22 < 24; i_22 += 4) /* same iter space */
                {
                    arr_84 [21LL] [i_10] [i_12] [(unsigned short)22] [i_10] [i_9 + 1] = ((int) arr_37 [i_22 + 1] [20ULL] [i_10]);
                    var_43 = ((/* implicit */unsigned long long int) 1922741666U);
                }
                /* LoopSeq 1 */
                for (unsigned short i_23 = 1; i_23 < 22; i_23 += 1) 
                {
                    arr_88 [i_9 - 1] [i_9 - 1] [i_12] [(short)16] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_10] [i_10]))) * (16428247293397690818ULL)));
                    arr_89 [i_23 + 2] [i_23 + 2] [i_12] [i_23] [22] = arr_57 [i_9] [(unsigned char)10] [i_10 - 1] [i_10 - 1] [i_9] [i_23 - 1] [i_9];
                    var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) (+(arr_32 [i_12] [i_12]))))));
                    var_45 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)1235))))))));
                    arr_90 [i_9 - 1] [i_10] [i_12] [20] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(4294967292U)))) ? (2372225622U) : (((/* implicit */unsigned int) arr_76 [i_9] [i_10] [i_9] [21]))));
                }
                var_46 = ((/* implicit */int) arr_34 [i_9]);
            }
            for (unsigned short i_24 = 0; i_24 < 25; i_24 += 2) 
            {
                var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_9 + 1] [i_10 - 2] [i_24])) ? (arr_38 [i_9 - 1] [i_10 - 3] [(short)3]) : (((/* implicit */unsigned int) arr_94 [i_9 + 1] [i_10 - 3] [i_24]))));
                arr_95 [i_24] [(unsigned short)1] [(unsigned short)1] = ((/* implicit */int) ((unsigned long long int) (unsigned short)39591));
                /* LoopSeq 3 */
                for (unsigned int i_25 = 3; i_25 < 22; i_25 += 1) 
                {
                    arr_98 [6U] [17] [i_24] [i_9] [i_9] = 6306566633548995559ULL;
                    var_48 = ((/* implicit */unsigned char) ((int) (unsigned short)65534));
                }
                for (int i_26 = 4; i_26 < 23; i_26 += 1) 
                {
                    var_49 = ((/* implicit */int) max((var_49), (((/* implicit */int) arr_99 [(unsigned char)7] [i_10] [(unsigned char)7] [(unsigned char)7] [(_Bool)1] [7ULL]))));
                    var_50 = ((/* implicit */unsigned short) arr_91 [i_9] [i_10] [i_10] [i_9]);
                    var_51 = ((/* implicit */unsigned short) max((var_51), (arr_57 [i_9] [i_10] [i_10] [i_10] [12ULL] [i_26] [i_26])));
                    var_52 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_92 [i_10] [i_10 - 3] [6U] [(unsigned char)7]))));
                }
                for (unsigned short i_27 = 0; i_27 < 25; i_27 += 1) 
                {
                    var_53 = arr_101 [i_9 - 3] [i_9 - 3] [i_9 - 3] [i_27] [i_27];
                    var_54 = ((unsigned long long int) (~(((/* implicit */int) arr_56 [i_9 - 1] [(short)7] [13U] [13U] [(unsigned short)4] [i_9]))));
                    /* LoopSeq 2 */
                    for (int i_28 = 1; i_28 < 24; i_28 += 4) 
                    {
                        var_55 = ((/* implicit */int) min((var_55), (((/* implicit */int) (+((~(18446744073709551598ULL))))))));
                        var_56 = (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)233)) || (((/* implicit */_Bool) -10))))));
                        var_57 = ((/* implicit */_Bool) max((var_57), (((/* implicit */_Bool) ((int) (~(1463686050U)))))));
                    }
                    for (long long int i_29 = 0; i_29 < 25; i_29 += 1) 
                    {
                        var_58 = ((/* implicit */int) ((unsigned int) (-2147483647 - 1)));
                        arr_110 [i_27] = ((/* implicit */unsigned long long int) arr_53 [i_10] [i_10] [(unsigned short)7] [i_10] [i_10] [i_10] [(unsigned short)7]);
                        var_59 = ((/* implicit */int) max((var_59), (((/* implicit */int) arr_48 [i_9] [i_9] [i_24] [(_Bool)1]))));
                        var_60 = ((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_9 - 1] [3] [i_10 + 1])) ? (arr_38 [i_9 - 1] [i_9 - 1] [i_10 + 1]) : (arr_38 [i_9 - 1] [i_9 - 1] [i_10 + 1])));
                    }
                }
                arr_111 [i_9] [i_9] [8] [i_24] = ((((/* implicit */_Bool) -1422235452)) ? (((0ULL) << (((((/* implicit */int) arr_70 [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_24])) - (24906))))) : (((/* implicit */unsigned long long int) arr_108 [i_9] [i_10] [i_24] [i_24] [i_9])));
                var_61 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_92 [(short)4] [(short)4] [5LL] [i_10])) == (18446744073709551615ULL)));
            }
            for (int i_30 = 3; i_30 < 22; i_30 += 2) 
            {
                /* LoopNest 2 */
                for (int i_31 = 0; i_31 < 25; i_31 += 2) 
                {
                    for (unsigned short i_32 = 0; i_32 < 25; i_32 += 2) 
                    {
                        {
                            arr_119 [i_9] [i_9] [18] [i_31] [i_32] [5U] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_91 [i_9 - 3] [(short)23] [(short)23] [i_9 - 2])) ? (((/* implicit */unsigned long long int) arr_71 [3] [3] [i_30] [i_30 + 1] [i_30 - 2])) : (18446744073709551586ULL))))));
                            arr_120 [8] = ((/* implicit */short) (!(((/* implicit */_Bool) 1164380494U))));
                            var_62 |= ((/* implicit */short) 2147483647);
                            var_63 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)14611)) <= (arr_42 [i_31])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_33 = 0; i_33 < 25; i_33 += 1) 
                {
                    for (unsigned int i_34 = 0; i_34 < 25; i_34 += 4) 
                    {
                        {
                            var_64 *= ((/* implicit */unsigned int) (unsigned short)3);
                            var_65 = ((/* implicit */unsigned long long int) arr_107 [i_9] [i_10] [20] [i_33] [i_34]);
                            arr_127 [i_9] [i_9] [i_30] [i_33] [i_34] = ((/* implicit */long long int) (~(((/* implicit */int) ((arr_52 [i_33] [i_33]) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
                var_66 = ((/* implicit */int) ((((/* implicit */_Bool) (~(3991053530U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_123 [i_9 + 1] [10U] [i_9] [i_9] [i_9 - 3] [i_9] [i_9]))) : ((+(3991053532U)))));
                var_67 = ((/* implicit */long long int) (~(((/* implicit */int) arr_121 [(unsigned short)17] [i_9 - 1] [1U] [i_30]))));
            }
            var_68 = ((/* implicit */unsigned long long int) max((var_68), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 743162332U)) || (((/* implicit */_Bool) (~(arr_73 [i_9] [i_9 + 2] [i_9] [i_9] [i_10] [i_9 + 2])))))))));
        }
        for (_Bool i_35 = 0; i_35 < 0; i_35 += 1) 
        {
            var_69 = ((/* implicit */unsigned short) arr_99 [i_9 - 3] [i_9] [i_9 + 1] [i_9] [i_9] [i_9]);
            /* LoopNest 2 */
            for (int i_36 = 3; i_36 < 23; i_36 += 4) 
            {
                for (unsigned long long int i_37 = 2; i_37 < 24; i_37 += 2) 
                {
                    {
                        arr_136 [i_36] = (-2147483647 - 1);
                        /* LoopSeq 1 */
                        for (unsigned int i_38 = 2; i_38 < 24; i_38 += 2) 
                        {
                            var_70 = ((/* implicit */unsigned char) ((int) (unsigned char)124));
                            arr_139 [i_38] [i_38 - 2] [i_38] [i_37 - 2] [i_38] [6] [12U] &= ((/* implicit */unsigned short) ((-1540276315) % ((+(((/* implicit */int) arr_86 [10] [11U] [10] [22ULL]))))));
                        }
                    }
                } 
            } 
        }
        for (unsigned short i_39 = 0; i_39 < 25; i_39 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_40 = 0; i_40 < 25; i_40 += 1) 
            {
                arr_147 [i_39] [2U] [i_39] = ((/* implicit */_Bool) 1540276305);
                var_71 = ((/* implicit */unsigned long long int) max((var_71), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_102 [i_9] [(unsigned char)23] [i_9])) ? (((/* implicit */int) arr_87 [i_9] [i_9] [i_9] [i_39] [i_39] [i_40])) : (39213300)))) ? ((-(arr_81 [i_9] [i_9] [18] [i_9] [i_9] [0U]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1540276286)))))))))));
            }
            /* LoopNest 2 */
            for (int i_41 = 2; i_41 < 24; i_41 += 4) 
            {
                for (unsigned short i_42 = 0; i_42 < 25; i_42 += 3) 
                {
                    {
                        arr_154 [(short)12] [8ULL] [i_41] [22] = ((/* implicit */short) arr_115 [i_9 - 1] [i_9 - 1] [i_41 - 1] [i_42]);
                        var_72 = (~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_55 [i_42] [i_42])) == (6ULL)))));
                    }
                } 
            } 
            arr_155 [i_9] [i_39] = ((/* implicit */unsigned short) ((1965894202997957860LL) ^ (((/* implicit */long long int) arr_82 [i_39] [i_9 - 3]))));
        }
        arr_156 [i_9] = ((/* implicit */unsigned char) arr_34 [i_9]);
    }
    var_73 = ((/* implicit */unsigned long long int) min((var_73), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_13)) ? (((1403547132) % (var_14))) : (var_2))))))));
}
