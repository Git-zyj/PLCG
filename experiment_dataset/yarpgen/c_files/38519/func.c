/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38519
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                            {
                                arr_16 [i_3] [i_0] [i_3] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) arr_5 [(signed char)10] [i_2] [i_2]);
                                var_12 = ((/* implicit */_Bool) (unsigned char)136);
                                arr_17 [i_4] [i_3] [i_2] [i_1] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((long long int) arr_1 [i_3]));
                            }
                            var_13 = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
                arr_18 [i_0] [1ULL] [i_0] = ((/* implicit */unsigned short) arr_14 [i_1] [10LL] [i_1]);
                arr_19 [i_0] = ((/* implicit */int) ((long long int) ((unsigned short) arr_9 [i_1] [i_1] [i_1] [i_1])));
                /* LoopSeq 3 */
                for (long long int i_5 = 1; i_5 < 10; i_5 += 1) 
                {
                    var_14 = ((/* implicit */long long int) ((unsigned long long int) ((int) arr_13 [i_5 + 1] [i_1] [i_5] [6LL] [i_1] [i_0])));
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_15 = ((/* implicit */int) ((signed char) arr_14 [10LL] [(unsigned char)8] [i_1]));
                        var_16 = ((unsigned int) ((unsigned int) arr_24 [i_0] [i_5 + 1] [i_5 + 2] [i_5] [i_5 - 1] [i_5 + 1]));
                    }
                    for (short i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_17 = ((/* implicit */_Bool) ((unsigned long long int) 1444377940215747218ULL));
                            arr_31 [i_8] [(unsigned short)10] = ((/* implicit */unsigned short) arr_9 [i_8] [i_7] [i_5 + 2] [i_5 + 2]);
                        }
                        for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 2) 
                        {
                            arr_34 [i_0] [(unsigned char)7] [i_5] [(unsigned char)7] [i_7] [i_7] = ((/* implicit */unsigned char) arr_11 [i_0] [i_5] [i_7] [i_9]);
                            var_18 = ((/* implicit */short) ((unsigned char) ((int) arr_29 [i_0] [(_Bool)1] [(_Bool)1] [i_9 + 2] [i_5 + 2] [i_7])));
                            var_19 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) (unsigned short)2067)));
                        }
                        var_20 = ((/* implicit */unsigned long long int) (signed char)93);
                        arr_35 [(unsigned short)2] [i_1] [i_1] [i_0] [(signed char)11] [(signed char)11] = (unsigned short)62310;
                    }
                    /* LoopSeq 1 */
                    for (int i_10 = 3; i_10 < 9; i_10 += 3) 
                    {
                        var_21 *= ((/* implicit */unsigned char) ((short) ((int) (unsigned char)136)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
                        {
                            var_22 *= ((/* implicit */_Bool) arr_1 [i_5 + 2]);
                            var_23 &= ((unsigned int) arr_38 [i_10 + 1] [i_0]);
                            var_24 = ((long long int) arr_39 [i_5 + 1] [i_5 + 1] [i_10 - 1] [i_11] [i_1] [i_1]);
                            var_25 = ((long long int) arr_24 [i_10 - 3] [i_10 - 3] [i_10] [i_5 + 2] [5] [i_5 - 1]);
                            var_26 += ((/* implicit */unsigned short) ((unsigned char) -1));
                        }
                        for (int i_12 = 0; i_12 < 12; i_12 += 3) 
                        {
                            var_27 *= ((/* implicit */unsigned long long int) ((_Bool) (_Bool)0));
                            arr_45 [i_1] [i_1] [i_10] [i_10] = ((/* implicit */unsigned short) 5249774808210161219LL);
                            arr_46 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((short) (unsigned char)200)));
                        }
                    }
                }
                for (signed char i_13 = 2; i_13 < 9; i_13 += 1) 
                {
                    var_28 *= ((/* implicit */unsigned long long int) (signed char)-94);
                    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((int) arr_13 [i_13] [i_1] [i_0] [i_0] [i_0] [i_13])))));
                }
                for (unsigned int i_14 = 0; i_14 < 12; i_14 += 2) 
                {
                    arr_53 [i_0] = 18446744073709551615ULL;
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        arr_56 [i_0] [i_0] [i_14] [i_14] [(signed char)5] [(signed char)5] = ((/* implicit */unsigned short) arr_29 [i_1] [i_14] [i_14] [(signed char)8] [i_14] [i_1]);
                        var_30 = ((/* implicit */int) ((signed char) 6436488060786774678ULL));
                    }
                    for (unsigned char i_16 = 1; i_16 < 8; i_16 += 2) 
                    {
                        arr_60 [i_0] [i_1] [i_14] = ((/* implicit */_Bool) 18446744073709551615ULL);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 1) 
                        {
                            var_31 = arr_48 [i_0] [i_0] [i_1] [(_Bool)1];
                            var_32 += ((/* implicit */long long int) ((signed char) ((unsigned long long int) arr_44 [i_16] [i_16 + 2] [i_16] [i_16 + 4] [i_16 + 4])));
                        }
                        for (int i_18 = 0; i_18 < 12; i_18 += 3) 
                        {
                            arr_67 [i_16] [i_16] [i_16] [i_16] &= arr_14 [i_14] [i_0] [i_14];
                            arr_68 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_0] [(short)3] [(unsigned short)6] [i_14]);
                        }
                        var_33 &= ((/* implicit */_Bool) arr_41 [i_0] [i_0] [9] [11ULL] [11ULL]);
                        var_34 = ((/* implicit */signed char) ((unsigned short) arr_27 [i_16 + 2]));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_20 = 0; i_20 < 12; i_20 += 2) 
                        {
                            var_35 += ((/* implicit */int) ((unsigned short) arr_11 [i_20] [i_14] [i_1] [i_0]));
                            var_36 = ((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [3LL]);
                        }
                        arr_75 [i_0] [i_0] [i_19] [i_14] = ((/* implicit */long long int) (short)-12888);
                        /* LoopSeq 2 */
                        for (long long int i_21 = 2; i_21 < 11; i_21 += 1) 
                        {
                            var_37 = ((/* implicit */unsigned char) ((short) arr_59 [i_21 + 1] [i_21 + 1] [i_21 + 1] [i_21 + 1]));
                            var_38 = ((/* implicit */_Bool) arr_66 [i_0] [i_14] [(unsigned char)7]);
                            var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) 5030208365294450760ULL))));
                        }
                        for (unsigned long long int i_22 = 3; i_22 < 11; i_22 += 4) 
                        {
                            var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) (short)-12888))));
                            var_41 = ((/* implicit */signed char) arr_6 [i_19] [i_19] [i_19] [i_19]);
                            arr_82 [(_Bool)1] [i_22] [i_22] [i_22] [i_22] [2LL] [i_0] = ((/* implicit */long long int) arr_71 [i_14]);
                        }
                    }
                }
                /* LoopSeq 2 */
                for (long long int i_23 = 0; i_23 < 12; i_23 += 1) 
                {
                    var_42 = ((/* implicit */unsigned char) ((unsigned long long int) arr_44 [i_0] [i_0] [i_0] [i_0] [i_0]));
                    arr_87 [i_0] [(short)3] [(short)3] [i_23] = ((/* implicit */int) ((signed char) (_Bool)0));
                }
                for (unsigned short i_24 = 0; i_24 < 12; i_24 += 3) 
                {
                    var_43 = ((/* implicit */long long int) arr_33 [2LL] [i_24] [i_1] [i_1] [i_0] [i_0] [i_0]);
                    var_44 = ((/* implicit */signed char) min((var_44), ((signed char)-94)));
                    arr_92 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) (_Bool)1);
                    /* LoopSeq 2 */
                    for (long long int i_25 = 0; i_25 < 12; i_25 += 2) 
                    {
                        var_45 = ((/* implicit */unsigned short) arr_51 [i_25]);
                        arr_95 [(_Bool)1] [i_1] [i_24] [i_25] [i_25] = ((/* implicit */unsigned char) ((signed char) (short)12888));
                    }
                    /* vectorizable */
                    for (unsigned short i_26 = 0; i_26 < 12; i_26 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_27 = 0; i_27 < 12; i_27 += 4) 
                        {
                            var_46 += ((/* implicit */long long int) ((unsigned int) (signed char)94));
                            var_47 += ((/* implicit */int) arr_22 [(signed char)11] [i_1] [i_24] [i_26]);
                            var_48 = ((/* implicit */short) arr_69 [9] [i_1] [i_24] [i_26] [i_27] [i_27]);
                        }
                        for (unsigned int i_28 = 1; i_28 < 10; i_28 += 1) 
                        {
                            arr_106 [i_26] = ((/* implicit */unsigned long long int) ((_Bool) arr_26 [i_26] [i_28 + 2] [i_24] [i_26] [i_28]));
                            arr_107 [i_26] [i_24] = ((/* implicit */unsigned short) ((short) arr_32 [i_26] [i_26] [i_26] [9ULL] [i_26]));
                            arr_108 [i_24] [i_0] = ((/* implicit */unsigned short) 0ULL);
                        }
                        for (int i_29 = 0; i_29 < 12; i_29 += 4) 
                        {
                            var_49 += ((/* implicit */short) arr_63 [i_0] [i_1] [i_24] [i_0] [i_29]);
                            arr_113 [i_29] [i_0] [i_26] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) arr_111 [i_26]);
                        }
                        var_50 = ((/* implicit */int) arr_55 [i_26] [i_24] [8LL] [i_1] [i_24] [i_26]);
                        /* LoopSeq 2 */
                        for (unsigned short i_30 = 1; i_30 < 8; i_30 += 2) 
                        {
                            arr_116 [i_0] [i_1] [i_24] [i_26] [i_30] = ((/* implicit */unsigned long long int) arr_11 [i_30] [i_26] [i_24] [8ULL]);
                            var_51 &= ((/* implicit */unsigned long long int) 491520);
                            arr_117 [i_30] [i_26] [i_30] [i_26] [i_30] [(unsigned short)5] [i_0] = ((/* implicit */unsigned char) arr_80 [i_30] [i_30] [i_30] [i_30 + 3] [9ULL] [i_30] [i_0]);
                        }
                        for (unsigned long long int i_31 = 3; i_31 < 11; i_31 += 1) 
                        {
                            arr_122 [i_0] [i_0] [i_0] [i_24] [i_26] [i_31] [i_31] = ((/* implicit */_Bool) ((long long int) arr_41 [i_24] [i_31] [i_31] [i_31 - 1] [4ULL]));
                            arr_123 [i_24] [i_31] = ((/* implicit */unsigned int) 1657060047);
                        }
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
                    {
                        var_52 = arr_6 [i_0] [i_24] [i_24] [i_32 - 1];
                        var_53 += arr_39 [2ULL] [i_1] [i_1] [i_24] [i_24] [i_32 - 1];
                        var_54 = ((unsigned long long int) 9007199254740991LL);
                    }
                    for (unsigned char i_33 = 0; i_33 < 12; i_33 += 4) 
                    {
                        var_55 = ((/* implicit */_Bool) ((unsigned short) 18446744073709551615ULL));
                        arr_129 [(_Bool)1] [i_1] [(unsigned short)10] [i_33] [i_33] [i_33] = ((int) ((signed char) arr_1 [i_33]));
                    }
                    for (short i_34 = 0; i_34 < 12; i_34 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_35 = 0; i_35 < 12; i_35 += 4) 
                        {
                            arr_135 [i_34] [8LL] = ((/* implicit */unsigned char) arr_4 [i_34]);
                            var_56 *= ((/* implicit */_Bool) arr_23 [i_0] [i_35] [i_35]);
                        }
                        for (unsigned long long int i_36 = 1; i_36 < 11; i_36 += 4) 
                        {
                            arr_139 [i_0] [i_36] [i_24] [i_34] [i_36] = ((/* implicit */int) ((unsigned short) (short)12888));
                            arr_140 [i_36] [i_1] [i_24] = ((/* implicit */unsigned int) ((unsigned long long int) arr_119 [i_36] [i_36] [i_36] [i_36] [i_36 - 1] [i_36 - 1] [i_36]));
                            var_57 += ((/* implicit */unsigned char) ((signed char) arr_93 [i_0] [(unsigned short)4] [(unsigned short)4] [6]));
                        }
                        arr_141 [i_34] [i_34] [(_Bool)0] [i_24] [8] [8] = ((/* implicit */signed char) 1ULL);
                    }
                }
            }
        } 
    } 
    var_58 &= ((/* implicit */unsigned int) var_11);
}
