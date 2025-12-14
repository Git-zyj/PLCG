/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25136
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
    var_16 = 0ULL;
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_15), (var_2)))) || (((((/* implicit */long long int) var_4)) < (-2128328855803585435LL)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((var_13) * (var_6)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */int) -2128328855803585435LL);
                                arr_16 [i_0] [i_0 + 1] [i_4] [i_4] [i_0 - 1] [i_4] = var_2;
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = 6597069766656ULL;
                                arr_18 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0 + 1] = ((/* implicit */int) ((15684070548146493210ULL) > (((/* implicit */unsigned long long int) 830610240))));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) max((var_8), (((2762673525563058412ULL) - (8772932463063477862ULL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 3; i_8 < 10; i_8 += 3) 
                    {
                        for (int i_9 = 0; i_9 < 12; i_9 += 2) 
                        {
                            {
                                arr_37 [3LL] [i_5] [i_7] [i_7] [3LL] = ((/* implicit */unsigned long long int) arr_33 [i_5]);
                                var_21 = ((/* implicit */int) var_11);
                                var_22 = ((/* implicit */long long int) (+(((var_6) + (var_6)))));
                                var_23 &= arr_12 [i_5] [i_5] [13ULL];
                                var_24 = ((/* implicit */long long int) ((268435455) >> (((18446744073709551615ULL) - (18446744073709551591ULL)))));
                            }
                        } 
                    } 
                    arr_38 [i_5] [i_6] [i_6] = arr_27 [i_5] [i_5];
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((var_8) ^ (((/* implicit */unsigned long long int) 2305843008945258496LL)))) << (((/* implicit */int) ((((/* implicit */long long int) arr_36 [i_5] [i_5] [i_5] [9LL] [i_5])) > (-2128328855803585449LL)))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_10 = 1; i_10 < 10; i_10 += 3) 
        {
            for (long long int i_11 = 1; i_11 < 8; i_11 += 1) 
            {
                for (long long int i_12 = 0; i_12 < 12; i_12 += 2) 
                {
                    {
                        arr_47 [i_5] [i_10 + 1] [10ULL] [i_10] = ((/* implicit */int) ((arr_0 [i_11 + 4]) << (((268435458) - (268435404)))));
                        arr_48 [i_5] [i_10] [i_10] = ((/* implicit */long long int) 268435456);
                    }
                } 
            } 
        } 
        arr_49 [i_5] = ((/* implicit */long long int) (-(var_6)));
    }
    /* vectorizable */
    for (long long int i_13 = 3; i_13 < 10; i_13 += 2) 
    {
        arr_54 [i_13] = ((/* implicit */long long int) 2762673525563058405ULL);
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 10; i_14 += 3) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) arr_9 [i_13] [i_13 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 1) 
                    {
                        for (long long int i_17 = 1; i_17 < 9; i_17 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */long long int) arr_8 [i_13]);
                                var_28 |= ((/* implicit */int) 2128328855803585453LL);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_18 = 3; i_18 < 10; i_18 += 3) 
                    {
                        arr_67 [i_15] [3] [i_14] [i_14] [4ULL] [i_15] = ((/* implicit */int) (-(arr_61 [i_14] [i_14 + 2] [i_14] [i_14])));
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((var_15) < (((/* implicit */long long int) arr_64 [i_14 - 1] [i_14] [i_14] [i_14 + 2])))))));
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 12; i_19 += 3) 
                    {
                        for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 2) 
                        {
                            {
                                arr_74 [i_13 + 2] [i_13 - 1] [i_13] [i_20] |= ((/* implicit */unsigned long long int) arr_69 [i_13 - 1] [7LL] [i_13] [i_13 - 2] [i_13]);
                                var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((10473191325838752723ULL) < (((/* implicit */unsigned long long int) (-2147483647 - 1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_31 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((910728943) >> (((18446744073709551590ULL) - (18446744073709551566ULL)))))) > (arr_60 [6] [6LL] [i_13 - 2])));
        arr_75 [i_13 - 1] = arr_25 [i_13];
    }
    /* LoopSeq 1 */
    for (int i_21 = 0; i_21 < 25; i_21 += 3) 
    {
        arr_79 [i_21] = 9223372036854775795LL;
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_22 = 0; i_22 < 25; i_22 += 1) 
        {
            arr_83 [i_21] [i_21] = 0ULL;
            /* LoopNest 3 */
            for (int i_23 = 2; i_23 < 22; i_23 += 2) 
            {
                for (unsigned long long int i_24 = 1; i_24 < 22; i_24 += 1) 
                {
                    for (unsigned long long int i_25 = 0; i_25 < 25; i_25 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */int) var_11);
                            arr_92 [i_21] [i_21] [i_21] [i_21] [i_24] [i_21] = arr_87 [i_23 - 1] [i_23 + 2] [i_23] [i_23 + 2];
                            var_33 = ((/* implicit */long long int) var_7);
                            arr_93 [i_24] = ((/* implicit */long long int) arr_76 [i_21]);
                            arr_94 [i_21] [i_21] [21ULL] [i_24] [i_21] = ((/* implicit */unsigned long long int) (((-(var_4))) / (arr_90 [12] [i_23 - 2] [i_23] [12] [i_23])));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_26 = 0; i_26 < 25; i_26 += 1) 
            {
                for (long long int i_27 = 0; i_27 < 25; i_27 += 3) 
                {
                    {
                        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) var_0))));
                        var_35 = ((/* implicit */unsigned long long int) (-(((((var_0) + (2147483647))) >> (((arr_91 [i_21] [i_21] [i_21] [i_21] [i_21]) + (6287688299330162712LL)))))));
                        arr_100 [i_27] = var_8;
                    }
                } 
            } 
        }
        for (unsigned long long int i_28 = 0; i_28 < 25; i_28 += 1) 
        {
            var_36 = ((/* implicit */unsigned long long int) var_2);
            arr_105 [4ULL] [i_28] = ((/* implicit */long long int) (-((-(arr_97 [i_21] [i_21] [13LL] [13LL])))));
            var_37 = ((/* implicit */int) arr_101 [i_21] [i_21] [i_28]);
        }
        for (unsigned long long int i_29 = 0; i_29 < 25; i_29 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_30 = 2; i_30 < 24; i_30 += 2) 
            {
                for (long long int i_31 = 2; i_31 < 24; i_31 += 3) 
                {
                    for (long long int i_32 = 0; i_32 < 25; i_32 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned long long int) 143974450587500544LL);
                            arr_116 [i_30 + 1] [i_30] [i_30] [i_30] [i_30] [i_30 - 1] [i_30] = ((/* implicit */int) -5985058117400754132LL);
                            arr_117 [i_21] [i_21] |= min((arr_82 [i_21] [i_21]), (((/* implicit */unsigned long long int) 5567901742146194570LL)));
                        }
                    } 
                } 
            } 
            var_39 |= ((/* implicit */unsigned long long int) ((-1062126184575731310LL) & (2128328855803585427LL)));
            /* LoopNest 2 */
            for (long long int i_33 = 0; i_33 < 25; i_33 += 2) 
            {
                for (int i_34 = 0; i_34 < 25; i_34 += 3) 
                {
                    {
                        arr_123 [8ULL] [i_29] [i_29] [i_29] = ((/* implicit */long long int) ((max((((((/* implicit */unsigned long long int) -2128328855803585434LL)) & (15684070548146493210ULL))), (((/* implicit */unsigned long long int) -881846402)))) << (((arr_97 [i_21] [i_21] [i_21] [i_21]) - (2420254693337345240ULL)))));
                        var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) (+(((arr_81 [i_21] [i_21] [i_21]) + (arr_112 [i_21] [10LL] [i_21] [i_21] [10LL]))))))));
                        arr_124 [i_21] [i_21] [i_21] [i_21] = var_15;
                    }
                } 
            } 
        }
        for (unsigned long long int i_35 = 3; i_35 < 23; i_35 += 1) 
        {
            /* LoopNest 3 */
            for (int i_36 = 2; i_36 < 23; i_36 += 1) 
            {
                for (int i_37 = 0; i_37 < 25; i_37 += 3) 
                {
                    for (int i_38 = 0; i_38 < 25; i_38 += 3) 
                    {
                        {
                            arr_135 [i_35] [i_37] [11] [i_35] [i_35] [i_35] [i_35] = (-(var_4));
                            arr_136 [i_37] [i_35] [i_35 - 1] = ((/* implicit */unsigned long long int) (+(268435462)));
                        }
                    } 
                } 
            } 
            arr_137 [i_35] [i_35] = ((/* implicit */unsigned long long int) var_14);
            /* LoopSeq 2 */
            for (unsigned long long int i_39 = 2; i_39 < 23; i_39 += 3) 
            {
                var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) (!(((/* implicit */_Bool) -236842441459538177LL)))))));
                arr_141 [i_21] [i_39] [i_21] = ((/* implicit */long long int) arr_81 [i_21] [i_21] [i_21]);
                var_42 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(4949611773049296865LL))))))) + (((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_118 [i_35] [i_35 - 2] [i_35])), (var_10))) > (12439689258326442486ULL))))));
                /* LoopNest 2 */
                for (int i_40 = 0; i_40 < 25; i_40 += 1) 
                {
                    for (long long int i_41 = 1; i_41 < 21; i_41 += 1) 
                    {
                        {
                            arr_149 [i_21] [i_21] [22ULL] [i_21] [i_21] |= ((((((/* implicit */long long int) min((674234945), (431881052)))) + (236842441459538176LL))) >> ((((-(var_6))) - (1213453744195255876ULL))));
                            var_43 = ((/* implicit */int) arr_143 [i_21] [i_21]);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (long long int i_42 = 4; i_42 < 23; i_42 += 3) 
            {
                /* LoopNest 2 */
                for (int i_43 = 0; i_43 < 25; i_43 += 1) 
                {
                    for (unsigned long long int i_44 = 1; i_44 < 24; i_44 += 2) 
                    {
                        {
                            arr_158 [i_21] [i_21] [i_21] [i_43] = ((/* implicit */int) 15340131786631395684ULL);
                            arr_159 [i_21] [i_21] [i_21] [6LL] [i_21] &= ((/* implicit */int) arr_139 [i_21] [14LL] [14ULL]);
                            var_44 |= ((/* implicit */long long int) 14352486260173592505ULL);
                            arr_160 [i_43] = arr_101 [18LL] [i_35] [i_43];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_45 = 0; i_45 < 25; i_45 += 3) 
                {
                    for (int i_46 = 1; i_46 < 21; i_46 += 2) 
                    {
                        {
                            arr_166 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */unsigned long long int) arr_84 [i_21]);
                            var_45 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_9)) / (var_6)));
                            arr_167 [i_21] [5LL] [i_21] [i_21] [i_21] = 4161536;
                        }
                    } 
                } 
                arr_168 [1] [i_35] [i_35] [i_35] = ((/* implicit */int) arr_113 [i_21] [i_21] [i_21]);
            }
        }
    }
}
