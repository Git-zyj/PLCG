/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4246
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_3 = 4; i_3 < 11; i_3 += 4) 
                {
                    var_14 *= ((/* implicit */_Bool) max((min((arr_0 [i_3]), (arr_0 [i_3]))), (arr_0 [i_3])));
                    /* LoopSeq 2 */
                    for (int i_4 = 1; i_4 < 12; i_4 += 3) 
                    {
                        var_15 |= ((/* implicit */unsigned long long int) var_10);
                        arr_12 [i_0] [i_1] [i_1] [i_4] = arr_0 [i_0];
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        var_16 = var_6;
                        var_17 *= ((/* implicit */long long int) ((unsigned short) (-9223372036854775807LL - 1LL)));
                    }
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_9 [i_0 - 1] [i_1] [i_2] [i_3] [(signed char)2]))));
                }
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    arr_19 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_13 [i_0] [(unsigned short)12] [i_2] [i_2] [i_1 - 1])), ((-(4294967285U)))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_7 = 1; i_7 < 11; i_7 += 3) 
                    {
                        var_19 ^= ((/* implicit */_Bool) arr_3 [i_2 - 1] [8LL] [i_6]);
                        arr_23 [i_0] [i_1 - 2] [i_0] [i_6] [i_7 + 2] = arr_16 [i_0 - 1] [i_6] [i_2];
                    }
                    /* vectorizable */
                    for (long long int i_8 = 2; i_8 < 10; i_8 += 3) 
                    {
                        var_20 = ((unsigned short) var_2);
                        var_21 = ((/* implicit */unsigned int) var_12);
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        var_22 = ((/* implicit */int) (+(arr_1 [i_0])));
                        var_23 = ((/* implicit */signed char) var_13);
                        arr_28 [(short)4] [i_0] [(short)4] [1ULL] [i_0 - 1] [i_2 - 1] [i_9] = ((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_0] [i_1 - 3]))));
                        var_24 = ((/* implicit */int) var_4);
                    }
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        arr_31 [i_0] [i_1] [i_2 - 1] [i_6] [i_10] = ((/* implicit */unsigned long long int) var_3);
                        var_25 |= ((/* implicit */long long int) (+(((/* implicit */int) ((short) arr_9 [i_10] [i_10] [i_10] [i_6] [i_2 - 1])))));
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_4))));
                        arr_32 [i_0] [i_1] [i_2] [i_1] [(unsigned short)4] [i_0] [i_10] = ((/* implicit */unsigned long long int) var_6);
                    }
                }
                arr_33 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0]);
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_17 [10] [i_1] [i_1] [10])))))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 2) 
                    {
                        {
                            arr_38 [i_0] = ((/* implicit */unsigned long long int) (+(arr_5 [i_0 - 1] [i_1 - 3] [i_0] [i_2 - 1])));
                            var_28 = ((/* implicit */signed char) arr_20 [(unsigned short)4] [i_11] [i_11] [(signed char)11] [i_1] [i_0]);
                            arr_39 [i_0 - 1] [i_0] [10LL] [(unsigned short)2] [i_12] = ((/* implicit */int) arr_18 [i_0] [i_0] [i_2] [i_11]);
                            var_29 = ((/* implicit */int) arr_37 [i_0] [i_1] [i_0]);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_13 = 3; i_13 < 12; i_13 += 2) 
            {
                var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) arr_29 [10LL] [4LL] [i_13] [(unsigned short)10] [6] [i_0] [10LL]))));
                /* LoopSeq 2 */
                for (unsigned char i_14 = 2; i_14 < 12; i_14 += 3) 
                {
                    var_31 = ((/* implicit */_Bool) arr_14 [i_0] [(_Bool)1] [i_13] [i_14 + 1] [i_13] [i_14 + 1]);
                    var_32 *= ((/* implicit */long long int) arr_40 [i_0] [i_1 + 2] [9U] [9U]);
                    arr_46 [i_0] [3] [3] = ((/* implicit */unsigned int) min((max((arr_44 [i_14 - 1] [i_0]), (arr_44 [i_14 - 1] [i_0]))), (((unsigned short) arr_17 [i_0] [i_13 - 1] [i_0] [i_0]))));
                    var_33 = ((/* implicit */signed char) var_3);
                }
                for (unsigned char i_15 = 2; i_15 < 11; i_15 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_16 = 3; i_16 < 10; i_16 += 2) 
                    {
                        var_34 = ((/* implicit */_Bool) var_3);
                        arr_51 [i_0] [(short)9] [i_13] [i_15] [i_0] = ((/* implicit */unsigned long long int) var_5);
                    }
                    for (unsigned int i_17 = 0; i_17 < 13; i_17 += 1) 
                    {
                        var_35 = min((((/* implicit */long long int) var_12)), (((long long int) var_11)));
                        arr_56 [i_0] [i_1] [i_13] [i_15 + 2] [i_0 - 1] = ((/* implicit */unsigned short) (+(-2262229269523155517LL)));
                        var_36 = ((/* implicit */_Bool) var_13);
                    }
                    /* vectorizable */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_37 = ((/* implicit */long long int) var_6);
                        arr_60 [i_15] [i_0] [i_15] [i_13 + 1] [i_13] [i_0] [i_0] = var_10;
                    }
                    var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) var_6))));
                }
                var_39 = ((/* implicit */short) ((_Bool) ((unsigned short) arr_26 [i_0] [i_13 + 1])));
            }
            for (long long int i_19 = 3; i_19 < 10; i_19 += 2) 
            {
                arr_63 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_9);
                arr_64 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))), ((~(arr_42 [i_0])))));
            }
            /* LoopSeq 1 */
            for (short i_20 = 0; i_20 < 13; i_20 += 1) 
            {
                var_40 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-3254823087922928295LL))))));
                var_41 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0])))))));
                var_42 = ((/* implicit */short) arr_3 [i_0 - 1] [7] [i_0]);
            }
            arr_68 [i_0] [i_0] = var_8;
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            arr_71 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_13);
            arr_72 [(_Bool)0] [(unsigned short)12] |= ((/* implicit */unsigned short) var_0);
        }
    }
    for (unsigned long long int i_22 = 1; i_22 < 21; i_22 += 1) 
    {
        var_43 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
        arr_76 [i_22] = ((/* implicit */unsigned long long int) arr_75 [i_22 - 1]);
    }
    /* LoopNest 3 */
    for (signed char i_23 = 2; i_23 < 21; i_23 += 3) 
    {
        for (short i_24 = 0; i_24 < 24; i_24 += 2) 
        {
            for (signed char i_25 = 0; i_25 < 24; i_25 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_26 = 1; i_26 < 23; i_26 += 1) 
                    {
                        arr_86 [i_25] [i_24] [i_25] [i_26 - 1] = ((/* implicit */unsigned long long int) ((long long int) var_9));
                        arr_87 [i_23] [i_24] [i_25] [i_26] = (~(((unsigned int) arr_80 [i_26 - 1] [i_26] [i_25])));
                        arr_88 [i_23] [i_25] = ((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (((unsigned short) var_3)))))));
                    }
                    for (signed char i_27 = 4; i_27 < 23; i_27 += 3) 
                    {
                        var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))), (var_6))))));
                        var_45 = ((/* implicit */int) ((unsigned int) var_10));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_28 = 1; i_28 < 21; i_28 += 2) 
                        {
                            var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) min((((/* implicit */unsigned long long int) var_8)), (((unsigned long long int) min((((/* implicit */unsigned int) arr_84 [i_28] [(unsigned short)7] [i_23 - 1] [i_23 - 1])), (var_1)))))))));
                            arr_94 [i_28 + 2] [i_27 - 4] [i_25] [i_25] [i_24] [i_23 + 3] = ((/* implicit */signed char) (+(var_6)));
                            arr_95 [i_28] [i_25] [i_25] [i_25] [i_23] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((_Bool) arr_89 [i_25] [i_28] [i_28] [i_25]))), (max((((/* implicit */unsigned long long int) (short)-7188)), (18446744073709551615ULL)))));
                        }
                    }
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_30 = 3; i_30 < 21; i_30 += 2) /* same iter space */
                        {
                            arr_102 [i_23 + 1] [i_25] [i_29] [i_29] [11LL] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_93 [i_25] [i_30 + 3] [i_30 - 3] [i_30 + 1] [i_30])))));
                            arr_103 [i_23] [(short)16] [i_25] [i_29] = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) min((arr_81 [i_24] [i_24]), (var_3)))))));
                            arr_104 [(signed char)16] [i_29] [i_25] [i_25] [i_24] [i_23 + 2] = ((/* implicit */unsigned long long int) arr_82 [i_23 + 3] [i_23 - 1] [i_23 + 3]);
                            arr_105 [i_25] [i_24] = ((/* implicit */unsigned long long int) var_5);
                            var_47 = ((/* implicit */signed char) ((_Bool) arr_81 [i_30] [i_23 + 1]));
                        }
                        for (unsigned long long int i_31 = 3; i_31 < 21; i_31 += 2) /* same iter space */
                        {
                            var_48 = ((/* implicit */short) arr_78 [i_23 + 2]);
                            arr_110 [i_24] [i_24] [i_24] &= ((/* implicit */_Bool) max((arr_92 [i_23] [(short)5] [i_25] [(short)9] [i_31 - 3]), (((/* implicit */short) arr_84 [i_23] [i_31] [i_23 - 2] [i_29]))));
                            var_49 ^= ((/* implicit */signed char) var_0);
                        }
                        for (unsigned long long int i_32 = 4; i_32 < 21; i_32 += 3) 
                        {
                            arr_113 [i_25] [(short)8] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
                            arr_114 [(_Bool)1] [i_24] [i_25] [i_25] [(short)8] [i_32] [i_25] = ((/* implicit */long long int) var_6);
                        }
                        /* vectorizable */
                        for (signed char i_33 = 3; i_33 < 22; i_33 += 1) 
                        {
                            arr_118 [i_23] [(short)4] [(signed char)14] [i_24] |= ((/* implicit */unsigned long long int) ((short) arr_117 [18U] [i_23] [i_23 + 2] [i_23 + 2] [i_24] [i_33 - 2]));
                            var_50 = ((/* implicit */unsigned int) var_11);
                        }
                        var_51 = arr_98 [i_23] [i_24];
                        arr_119 [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_25] = ((/* implicit */long long int) var_4);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_34 = 0; i_34 < 24; i_34 += 1) 
                        {
                            arr_123 [i_23 - 2] [i_25] [20U] = ((/* implicit */unsigned short) ((int) var_4));
                            var_52 = ((/* implicit */int) var_3);
                            arr_124 [i_23] [i_29] [i_29] [19LL] [i_25] [i_25] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                            var_53 = ((/* implicit */int) arr_90 [i_34] [i_29] [i_24] [i_23]);
                        }
                        for (int i_35 = 2; i_35 < 23; i_35 += 2) 
                        {
                            var_54 = ((/* implicit */signed char) arr_82 [i_35] [i_29] [i_23]);
                            arr_127 [i_23] [i_25] [i_24] [i_25] [i_29] [i_35] = ((/* implicit */long long int) max((max((arr_126 [i_25] [i_35 + 1] [i_35] [i_35 - 2] [(_Bool)1]), (arr_126 [i_25] [i_35 + 1] [i_35] [i_35] [(short)20]))), (var_5)));
                            arr_128 [4ULL] [i_25] [4ULL] [i_29] [i_35] [i_35] [i_24] = ((/* implicit */long long int) var_1);
                            arr_129 [i_23] [3ULL] [i_25] [i_25] [i_29] [i_35] = ((/* implicit */signed char) max((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))))))));
                            arr_130 [i_25] [i_29] [i_25] [i_24] [i_25] = ((/* implicit */int) min((var_12), (((/* implicit */unsigned short) min((var_7), (((/* implicit */short) var_10)))))));
                        }
                        arr_131 [i_25] [i_29] = ((/* implicit */_Bool) var_12);
                    }
                    var_55 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                    var_56 = ((/* implicit */signed char) (-(((/* implicit */int) max((var_8), (var_11))))));
                    var_57 = ((/* implicit */unsigned short) var_6);
                }
            } 
        } 
    } 
}
