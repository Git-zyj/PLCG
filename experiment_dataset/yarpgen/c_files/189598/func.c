/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189598
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
    var_17 &= var_5;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            var_18 = max((max((arr_0 [i_1 - 3] [i_1 - 3]), (arr_0 [i_0] [i_1 - 2]))), (arr_2 [i_0] [i_0]));
            var_19 = ((/* implicit */long long int) max((var_19), (min((arr_0 [i_1 - 1] [i_1 - 1]), (arr_0 [i_1 - 1] [i_1 - 1])))));
            var_20 &= ((/* implicit */int) arr_3 [8] [i_1]);
        }
        /* vectorizable */
        for (long long int i_2 = 3; i_2 < 13; i_2 += 3) 
        {
            var_21 = arr_3 [i_0] [i_2];
            arr_7 [i_0] [i_0] [i_0] = arr_1 [i_0];
            var_22 = ((((/* implicit */_Bool) arr_3 [i_0] [i_2 + 3])) ? (arr_3 [i_0] [i_2 - 1]) : (arr_6 [i_2] [i_2]));
        }
        for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            /* LoopSeq 4 */
            for (int i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
            {
                arr_13 [i_0] [i_3] [i_4] |= max((((/* implicit */long long int) arr_8 [i_0] [14LL] [i_3])), (min((arr_9 [i_3] [i_4]), (max((arr_12 [i_0] [i_0] [i_3] [i_0]), (arr_9 [i_3] [i_3]))))));
                var_23 &= ((((/* implicit */_Bool) max((arr_8 [i_0] [i_3] [i_3]), (arr_8 [i_0] [i_3] [i_3])))) ? (min((arr_8 [i_0] [i_3] [i_3]), (arr_8 [i_0] [i_3] [i_3]))) : (arr_8 [i_4] [i_3] [i_3]));
                arr_14 [i_0] [i_0] [i_4] = ((/* implicit */long long int) min((2147483647), (1558055156)));
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_5 [i_0] [i_3]) : (arr_10 [i_4] [i_3] [0LL])));
            }
            for (int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    for (long long int i_7 = 4; i_7 < 13; i_7 += 2) 
                    {
                        {
                            var_25 = min((arr_1 [i_0]), (arr_0 [i_0] [i_0]));
                            var_26 = arr_2 [i_5] [i_7];
                            var_27 = ((/* implicit */long long int) max((var_27), (max((((/* implicit */long long int) max((arr_20 [i_5] [i_5] [i_7] [i_5] [i_6] [i_7 - 1]), (arr_20 [i_6] [i_6] [i_7] [i_7] [i_7] [i_7 + 2])))), (min((-576141229910479798LL), (((/* implicit */long long int) 0))))))));
                            var_28 = min((((/* implicit */long long int) arr_20 [i_7 + 1] [i_7 + 1] [i_0] [i_7 + 1] [i_7 + 1] [i_7 - 2])), (arr_17 [i_0] [i_7 + 3] [15LL]));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_9 = 1; i_9 < 14; i_9 += 4) 
                    {
                        var_29 = min((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_5]))), (arr_0 [i_0] [i_0]));
                        var_30 = ((((/* implicit */_Bool) arr_11 [i_0] [i_3] [i_5])) ? (((((/* implicit */_Bool) arr_1 [i_8])) ? (min((arr_18 [8LL] [i_0] [i_0] [i_3]), (((/* implicit */long long int) arr_29 [11LL] [i_3] [i_5] [i_8] [i_9])))) : (arr_6 [i_9 + 1] [i_9 + 2]))) : (((/* implicit */long long int) min((arr_26 [i_8] [i_8] [i_8]), (arr_26 [i_0] [i_0] [i_5])))));
                        var_31 = arr_12 [2] [4LL] [i_0] [i_8];
                        arr_33 [i_0] [i_0] [i_3] &= min((((/* implicit */long long int) max((arr_8 [i_3] [i_5] [i_8]), (arr_15 [i_0] [i_9 + 2] [i_9 + 2] [i_8])))), (max((((/* implicit */long long int) arr_20 [i_0] [i_3] [i_3] [i_5] [i_8] [i_9])), (arr_25 [i_8] [i_8] [i_8] [i_8] [i_8]))));
                        arr_34 [i_0] [i_8] [i_0] [i_0] [i_3] [i_0] = arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        var_32 = ((((/* implicit */_Bool) arr_22 [i_0] [i_3] [i_3] [i_8] [i_3])) ? (arr_22 [i_10] [10] [i_5] [i_3] [7]) : (arr_22 [i_0] [i_3] [i_5] [i_8] [i_10]));
                        var_33 = ((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [13])) ? (((/* implicit */long long int) arr_26 [i_0] [i_0] [10LL])) : (arr_31 [i_0] [5LL] [i_0] [i_0] [i_8] [i_0]));
                    }
                    for (long long int i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        arr_43 [i_0] [i_3] [i_0] [i_8] [i_0] = arr_25 [i_0] [i_3] [i_0] [i_0] [7LL];
                        var_34 = ((/* implicit */long long int) min((var_34), (((((/* implicit */_Bool) 2147483647)) ? (576141229910479814LL) : (((/* implicit */long long int) 1386997435))))));
                        var_35 = ((((/* implicit */_Bool) arr_27 [i_0] [i_3] [i_3] [i_3])) ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : (((((/* implicit */_Bool) arr_32 [i_0] [i_3] [i_5] [i_8] [0LL] [i_11])) ? (((/* implicit */long long int) arr_15 [i_8] [15LL] [i_3] [i_8])) : (((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_17 [i_0] [i_3] [i_5]) : (arr_2 [i_0] [i_0]))))));
                    }
                    var_36 = arr_35 [i_0] [i_0] [i_0] [i_8] [i_5];
                    var_37 = ((((/* implicit */_Bool) arr_35 [i_0] [i_3] [i_0] [i_8] [i_8])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_8])) ? (arr_41 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) : (arr_22 [i_8] [i_5] [i_0] [i_0] [i_0])))) ? (arr_31 [i_0] [i_3] [i_0] [i_0] [1LL] [i_3]) : (arr_1 [i_0]))) : (arr_16 [i_0]));
                }
                /* vectorizable */
                for (long long int i_12 = 2; i_12 < 15; i_12 += 2) 
                {
                    var_38 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [0LL] [i_12] [i_12] [i_0])) ? (arr_12 [i_5] [i_3] [i_3] [i_0]) : (arr_12 [i_12 - 2] [i_3] [i_3] [i_12])));
                    var_39 = arr_4 [i_0] [i_3] [i_3];
                    var_40 = arr_1 [i_12 - 2];
                    /* LoopSeq 1 */
                    for (long long int i_13 = 1; i_13 < 14; i_13 += 3) 
                    {
                        arr_50 [i_0] [3] [i_12] [i_0] [i_12] [i_12] [i_12] = ((/* implicit */int) arr_32 [i_13 - 1] [i_13] [4] [i_13] [i_13 + 1] [i_13 + 2]);
                        arr_51 [i_13] [i_12] [i_0] [i_3] [i_0] = ((((/* implicit */_Bool) arr_1 [i_12 + 1])) ? (arr_2 [i_0] [i_0]) : (arr_9 [i_0] [i_13 + 1]));
                        arr_52 [12LL] [i_0] [i_0] [12LL] = ((/* implicit */int) arr_49 [i_12 - 1]);
                        var_41 = ((/* implicit */long long int) max((var_41), (((((/* implicit */_Bool) arr_40 [i_5] [i_12 + 1] [i_3] [i_13 + 1] [i_13])) ? (((/* implicit */long long int) arr_40 [i_0] [i_12 + 1] [i_3] [i_13 + 1] [i_13])) : (arr_23 [i_13 + 2] [i_12])))));
                        arr_53 [i_0] = ((((/* implicit */_Bool) arr_1 [i_12 - 1])) ? (arr_1 [i_12 + 1]) : (arr_32 [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_12] [i_12] [i_12 + 1]));
                    }
                }
                for (long long int i_14 = 0; i_14 < 16; i_14 += 1) 
                {
                    var_42 = min((arr_11 [7LL] [i_3] [i_5]), (arr_11 [i_0] [i_0] [i_0]));
                    arr_57 [i_0] [0LL] [i_3] [i_0] = arr_8 [i_3] [i_3] [i_0];
                    arr_58 [i_0] [i_3] [i_3] [i_0] = min((((/* implicit */long long int) arr_40 [8] [i_0] [i_0] [i_0] [i_0])), (max((-576141229910479786LL), (((/* implicit */long long int) max((0), (-1386997436)))))));
                }
            }
            for (int i_15 = 0; i_15 < 16; i_15 += 1) /* same iter space */
            {
                var_43 = ((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_0] [i_3] [i_15] [i_15] [i_15] [i_15])) ? (((/* implicit */long long int) arr_11 [i_0] [i_3] [i_15])) : (arr_39 [i_15] [i_15] [i_15] [i_15] [i_3] [i_3] [i_0])));
                arr_62 [i_0] [i_3] [i_3] = min((min((arr_37 [i_0] [i_0] [i_15] [i_15] [i_3] [i_15] [i_15]), (arr_37 [i_0] [i_0] [i_0] [i_15] [i_15] [i_0] [i_15]))), (arr_0 [i_15] [i_3]));
            }
            for (int i_16 = 0; i_16 < 16; i_16 += 1) 
            {
                var_44 = ((/* implicit */long long int) max((var_44), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_16] [i_3])) ? (arr_1 [i_0]) : (((/* implicit */long long int) arr_30 [i_0] [i_0] [i_0]))))) ? (max((576141229910479829LL), (((/* implicit */long long int) -2147483647)))) : (max((arr_39 [i_0] [i_16] [i_0] [i_0] [i_3] [i_0] [i_0]), (((/* implicit */long long int) max((arr_19 [i_0] [i_0] [i_0] [i_3] [13LL] [i_16]), (arr_42 [15] [12LL] [i_16]))))))))));
                arr_66 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */long long int) arr_42 [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 16; i_17 += 4) 
                {
                    for (long long int i_18 = 4; i_18 < 15; i_18 += 2) 
                    {
                        {
                            var_45 = min((min((((/* implicit */long long int) arr_60 [i_0] [i_16] [i_17] [i_18])), (arr_49 [i_18 - 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_68 [i_0] [i_16])) ? (arr_68 [i_0] [i_3]) : (arr_68 [i_0] [i_17])))));
                            var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) min((((/* implicit */long long int) arr_65 [i_18] [i_18] [i_16])), (arr_25 [i_0] [i_3] [i_16] [i_3] [i_0]))))));
                            var_47 = max((((((/* implicit */_Bool) arr_20 [i_18 - 4] [i_18] [i_0] [11LL] [i_18 - 4] [3LL])) ? (((/* implicit */long long int) arr_63 [i_0] [i_3])) : (arr_47 [i_0] [i_3] [i_16] [i_16] [i_17] [7LL]))), (((/* implicit */long long int) arr_42 [i_0] [i_0] [0])));
                            var_48 = max((((((/* implicit */_Bool) arr_26 [i_16] [1] [i_0])) ? (arr_1 [i_18 - 1]) : (max((4503462188417024LL), (6779616416855767150LL))))), (arr_67 [i_17] [i_17] [i_17] [i_17] [i_17]));
                            arr_72 [i_16] [i_3] [i_16] [i_18] [i_16] &= ((/* implicit */int) max((max((max((arr_10 [i_3] [i_3] [i_3]), (arr_18 [i_0] [i_0] [i_18] [i_0]))), (arr_37 [i_0] [i_3] [i_3] [i_17] [i_18] [i_16] [i_18 - 4]))), (((/* implicit */long long int) arr_68 [i_17] [i_17]))));
                        }
                    } 
                } 
                var_49 = ((/* implicit */int) min((((((/* implicit */_Bool) -576141229910479798LL)) ? (-9113642422044070186LL) : (-576141229910479779LL))), (((((/* implicit */_Bool) arr_44 [i_16] [i_16] [i_0] [i_16] [i_16] [i_16])) ? (max((arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0] [5LL])) ? (arr_0 [i_0] [i_3]) : (arr_18 [i_3] [3LL] [i_0] [i_0])))))));
            }
            /* LoopSeq 2 */
            for (long long int i_19 = 0; i_19 < 16; i_19 += 3) 
            {
                arr_76 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_61 [i_0]), (arr_61 [i_0])))) ? (arr_61 [i_0]) : (max((arr_61 [i_0]), (arr_61 [i_0])))));
                var_50 = arr_3 [i_3] [i_3];
                /* LoopSeq 3 */
                for (int i_20 = 0; i_20 < 16; i_20 += 3) 
                {
                    var_51 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3] [i_19])) ? (((/* implicit */long long int) arr_30 [i_0] [i_3] [i_19])) : (arr_0 [i_19] [i_0])))) ? (arr_29 [i_0] [7] [i_3] [4LL] [i_3]) : (arr_60 [i_0] [i_3] [i_19] [i_20])));
                    arr_79 [1] [1] [i_0] [i_20] = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [12LL])) ? (arr_11 [5LL] [i_19] [i_20]) : (arr_65 [i_3] [i_0] [2LL])))), (arr_31 [i_0] [i_0] [13] [i_0] [i_20] [i_19])))) ? (((/* implicit */long long int) min((arr_63 [i_0] [i_3]), (arr_29 [i_20] [14] [i_3] [i_3] [i_0])))) : (max((min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_65 [i_0] [i_0] [i_0])))), (arr_27 [i_0] [i_3] [i_19] [i_20]))));
                    var_52 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_27 [i_0] [i_0] [i_19] [i_20]) : (arr_31 [i_0] [i_3] [i_19] [i_0] [i_20] [i_0])))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_3] [11LL] [i_0])), (arr_48 [i_0] [3] [i_19])))) ? (min((4503462188417035LL), (((/* implicit */long long int) 511)))) : (((/* implicit */long long int) min((arr_8 [i_0] [i_0] [i_0]), (arr_20 [i_0] [i_3] [i_0] [i_0] [i_20] [i_20])))))) : (arr_6 [i_3] [i_20]));
                }
                for (long long int i_21 = 0; i_21 < 16; i_21 += 4) 
                {
                    var_53 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_78 [i_0] [i_19])) ? (arr_78 [i_0] [i_0]) : (arr_78 [i_0] [i_0])))) ? (arr_77 [i_0] [i_3] [i_19] [i_21]) : (min((arr_36 [2] [i_3] [i_3] [i_21]), (((((/* implicit */_Bool) arr_65 [i_3] [i_21] [i_21])) ? (arr_0 [i_21] [i_3]) : (arr_6 [i_0] [i_3]))))));
                    var_54 = ((/* implicit */int) min((var_54), (((/* implicit */int) max((arr_4 [i_3] [9LL] [i_21]), (arr_4 [i_0] [i_3] [i_3]))))));
                    /* LoopSeq 2 */
                    for (long long int i_22 = 0; i_22 < 16; i_22 += 2) 
                    {
                        arr_86 [i_0] [i_0] [i_19] [i_0] [i_0] = ((/* implicit */int) arr_16 [i_0]);
                        var_55 = max((arr_5 [i_3] [i_21]), (((/* implicit */long long int) min((arr_64 [i_0] [i_21] [i_3] [i_0]), (((((/* implicit */_Bool) arr_4 [i_3] [i_19] [i_22])) ? (arr_29 [i_21] [2LL] [3LL] [i_21] [i_21]) : (arr_24 [i_0] [i_3] [i_19])))))));
                        var_56 = arr_38 [i_0];
                    }
                    for (long long int i_23 = 4; i_23 < 15; i_23 += 1) 
                    {
                        var_57 = ((/* implicit */int) max((arr_38 [i_0]), (((((/* implicit */_Bool) arr_56 [i_21] [i_3] [i_3] [i_0])) ? (((/* implicit */long long int) arr_20 [i_19] [i_19] [i_3] [i_23 + 1] [i_23] [i_23 - 3])) : (max((((/* implicit */long long int) arr_63 [i_0] [14LL])), (arr_4 [i_0] [i_19] [i_21])))))));
                        var_58 = ((/* implicit */long long int) max((var_58), (max((max((min((arr_16 [i_3]), (arr_89 [i_3]))), (min((((/* implicit */long long int) arr_42 [i_0] [i_21] [i_23 - 3])), (arr_9 [i_21] [i_3]))))), (arr_6 [i_0] [i_0])))));
                        var_59 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_85 [i_19] [i_3] [i_19] [i_23 + 1] [i_0])) ? (arr_44 [i_0] [i_3] [i_0] [i_21] [i_0] [i_3]) : (arr_44 [10] [i_3] [i_0] [i_19] [i_3] [i_3])))) ? (((((/* implicit */_Bool) 1182960020)) ? (((/* implicit */long long int) -512)) : (0LL))) : (((/* implicit */long long int) max((arr_64 [i_23 - 1] [i_23 - 2] [i_23 - 2] [i_0]), (arr_64 [i_23 - 2] [i_23 - 3] [i_23] [i_0])))));
                    }
                    var_60 = ((/* implicit */long long int) min((var_60), (arr_89 [i_21])));
                    arr_91 [i_19] [i_0] [i_19] [i_19] = max((arr_54 [i_0] [i_0] [i_0] [i_0]), (min((max((arr_55 [6] [i_3] [i_19] [6]), (arr_47 [i_21] [i_3] [i_19] [i_3] [i_3] [i_0]))), (min((arr_4 [i_21] [i_19] [i_0]), (arr_48 [i_0] [1LL] [i_19]))))));
                }
                /* vectorizable */
                for (long long int i_24 = 0; i_24 < 16; i_24 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_25 = 0; i_25 < 16; i_25 += 4) 
                    {
                        var_61 = ((/* implicit */long long int) max((var_61), (arr_95 [i_3] [i_24])));
                        var_62 |= ((((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_25])) ? (((/* implicit */long long int) arr_8 [i_3] [i_24] [i_3])) : (arr_71 [2LL] [i_3] [i_3] [i_3]));
                        var_63 = ((((/* implicit */_Bool) 1405876191987868585LL)) ? (arr_2 [i_0] [i_0]) : (-2614197502290489456LL));
                        var_64 ^= ((((/* implicit */_Bool) arr_24 [i_3] [i_19] [i_25])) ? (arr_24 [i_3] [i_24] [i_25]) : (arr_24 [i_3] [i_0] [i_25]));
                    }
                    for (long long int i_26 = 0; i_26 < 16; i_26 += 4) 
                    {
                        arr_99 [i_0] [i_26] [i_26] [i_26] |= arr_17 [i_26] [i_26] [i_24];
                        arr_100 [i_26] [i_3] [i_3] &= ((/* implicit */int) arr_2 [4] [i_3]);
                        var_65 = ((/* implicit */int) arr_25 [i_0] [i_3] [i_19] [i_0] [i_26]);
                    }
                    for (long long int i_27 = 3; i_27 < 13; i_27 += 1) 
                    {
                        var_66 = ((/* implicit */int) arr_36 [i_0] [i_19] [i_24] [13LL]);
                        var_67 = ((/* implicit */int) ((((/* implicit */_Bool) arr_85 [i_0] [i_3] [i_0] [i_19] [i_0])) ? (arr_56 [i_3] [i_0] [i_24] [i_27 - 2]) : (arr_23 [i_27 + 3] [i_0])));
                        var_68 = ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_27 + 2] [i_27 - 2] [i_27] [i_27 + 2] [i_27] [i_27 + 3])) ? (arr_41 [i_27] [i_27 + 2] [12LL] [i_27 + 2] [i_27 - 3] [i_27 + 2]) : (arr_41 [i_27] [i_27 - 1] [i_27] [i_27 - 3] [i_27 - 2] [i_27 - 2])));
                        var_69 = arr_12 [i_0] [10LL] [i_3] [i_3];
                    }
                    var_70 = ((/* implicit */int) max((var_70), (((/* implicit */int) ((((/* implicit */_Bool) arr_81 [i_3])) ? (arr_81 [i_3]) : (arr_81 [i_3]))))));
                    var_71 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_0])) ? (arr_68 [i_0] [i_3]) : (arr_61 [i_0])));
                    var_72 |= arr_59 [i_0] [i_3] [i_0] [i_24];
                }
                arr_104 [i_3] [i_0] = arr_71 [i_0] [i_0] [i_3] [i_0];
            }
            /* vectorizable */
            for (long long int i_28 = 0; i_28 < 16; i_28 += 3) 
            {
                var_73 = ((((/* implicit */_Bool) arr_11 [i_0] [i_3] [i_28])) ? (arr_96 [i_0] [i_3] [i_3] [i_3] [i_3]) : (arr_92 [i_0] [i_0] [i_0] [i_0] [i_0] [10]));
                var_74 = ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [10])) ? (arr_15 [i_0] [i_0] [i_0] [i_0]) : (arr_15 [i_0] [i_0] [i_0] [i_0]));
                var_75 = ((/* implicit */int) max((var_75), (((/* implicit */int) arr_108 [i_0] [i_3] [i_3]))));
            }
            var_76 = max((((/* implicit */long long int) arr_83 [i_3] [i_3] [i_0] [i_0] [i_3])), (min((min((((/* implicit */long long int) arr_61 [i_0])), (arr_17 [i_0] [i_3] [i_3]))), (arr_22 [i_3] [i_0] [i_3] [i_0] [i_0]))));
            /* LoopNest 2 */
            for (long long int i_29 = 0; i_29 < 16; i_29 += 4) 
            {
                for (long long int i_30 = 0; i_30 < 16; i_30 += 1) 
                {
                    {
                        arr_114 [i_0] [i_30] [i_29] [i_3] [i_0] = arr_73 [i_0] [i_3] [i_29];
                        arr_115 [i_0] [0LL] [i_0] [i_30] = min((625927666), (513));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (int i_31 = 0; i_31 < 16; i_31 += 3) 
        {
            var_77 ^= ((((/* implicit */_Bool) arr_71 [i_0] [i_31] [i_31] [8LL])) ? (max((arr_71 [i_31] [i_31] [i_31] [0]), (arr_71 [i_0] [i_0] [i_0] [12LL]))) : (max((arr_111 [i_0] [i_0] [i_0] [0]), (arr_71 [i_0] [i_31] [i_0] [6]))));
            /* LoopSeq 1 */
            for (long long int i_32 = 0; i_32 < 16; i_32 += 3) 
            {
                var_78 &= arr_4 [6] [i_31] [i_0];
                arr_122 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_59 [i_32] [i_31] [i_31] [i_0])) ? (arr_59 [i_0] [i_0] [i_32] [i_31]) : (max((arr_5 [i_0] [i_0]), (arr_59 [i_0] [i_0] [i_31] [i_32])))));
                var_79 = arr_49 [i_31];
            }
            var_80 = ((/* implicit */long long int) arr_98 [i_0] [i_31]);
            var_81 = arr_4 [i_0] [i_0] [i_0];
        }
        var_82 = ((/* implicit */int) max((arr_108 [i_0] [i_0] [14LL]), (max((arr_16 [8LL]), (arr_103 [i_0])))));
    }
    /* LoopNest 3 */
    for (int i_33 = 0; i_33 < 25; i_33 += 2) 
    {
        for (long long int i_34 = 2; i_34 < 24; i_34 += 3) 
        {
            for (long long int i_35 = 0; i_35 < 25; i_35 += 4) 
            {
                {
                    var_83 |= max((min((arr_125 [i_33] [i_34 - 2]), (arr_125 [i_33] [i_34 - 1]))), (arr_126 [i_33] [i_35]));
                    /* LoopSeq 4 */
                    for (long long int i_36 = 1; i_36 < 22; i_36 += 3) 
                    {
                        var_84 = ((/* implicit */int) min((((/* implicit */long long int) arr_129 [i_34] [i_34 - 1] [i_36 + 2])), (arr_125 [i_34] [i_34 + 1])));
                        var_85 |= ((/* implicit */int) min((arr_125 [i_33] [i_33]), (((((/* implicit */_Bool) arr_127 [i_34 + 1] [i_34 - 1] [i_36 - 1])) ? (((/* implicit */long long int) arr_127 [i_34 + 1] [i_34 + 1] [i_34 - 2])) : (arr_130 [i_35])))));
                        var_86 |= ((/* implicit */int) arr_126 [i_34 - 1] [i_35]);
                    }
                    for (long long int i_37 = 1; i_37 < 24; i_37 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_38 = 0; i_38 < 25; i_38 += 3) 
                        {
                            arr_138 [i_34] [i_34] [i_35] [20] [i_34] = ((/* implicit */long long int) arr_128 [i_37 - 1]);
                            arr_139 [i_33] [i_35] [i_35] [i_37] [i_38] |= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_136 [i_38] [i_35] [i_34 - 2])), (((((/* implicit */_Bool) arr_134 [i_35] [i_35] [i_38])) ? (arr_124 [i_37]) : (arr_126 [i_33] [i_33])))))) ? (((/* implicit */long long int) arr_127 [i_37] [i_37] [i_37 + 1])) : (max((max((arr_137 [i_34] [16] [i_37 - 1] [i_38]), (((/* implicit */long long int) arr_128 [i_33])))), (arr_124 [i_33])))));
                            var_87 = ((/* implicit */int) arr_131 [i_33] [23LL] [23LL] [i_34]);
                            var_88 = ((/* implicit */int) max((var_88), (((/* implicit */int) arr_126 [14LL] [i_33]))));
                        }
                        /* vectorizable */
                        for (int i_39 = 0; i_39 < 25; i_39 += 2) 
                        {
                            var_89 = arr_131 [i_37 + 1] [i_34] [i_35] [i_34];
                            var_90 = arr_141 [i_33] [i_33] [2LL] [i_33];
                            var_91 = arr_132 [i_34] [i_37] [i_34 - 2] [i_34];
                            arr_142 [i_33] [i_33] [4LL] [i_33] [i_34] [i_33] [4LL] = ((((/* implicit */_Bool) arr_130 [i_34])) ? (((((/* implicit */_Bool) arr_133 [i_34] [i_34 - 1] [i_34])) ? (arr_123 [i_33]) : (((/* implicit */long long int) arr_136 [i_33] [i_34] [i_35])))) : (arr_131 [i_33] [i_34] [i_39] [i_34]));
                            arr_143 [i_33] [i_34 - 2] [i_33] [i_34] [24LL] = arr_137 [i_34 - 2] [2] [i_35] [i_37 + 1];
                        }
                        var_92 = ((((/* implicit */_Bool) arr_135 [i_37] [i_37 - 1] [i_37 - 1] [i_35] [i_34] [i_33] [i_33])) ? (max((max((((/* implicit */long long int) arr_128 [i_33])), (arr_140 [i_37] [i_35] [i_35] [i_35] [i_34] [i_34] [i_33]))), (max((arr_137 [i_33] [i_34 + 1] [i_34] [i_33]), (arr_134 [i_34] [i_35] [i_37]))))) : (((((/* implicit */_Bool) max((arr_124 [i_37]), (((/* implicit */long long int) arr_136 [i_33] [i_33] [22LL]))))) ? (((((/* implicit */_Bool) arr_140 [i_33] [19LL] [i_34 - 2] [i_35] [i_35] [i_37] [i_37 - 1])) ? (arr_124 [i_35]) : (arr_132 [i_34] [i_34 - 2] [i_34] [i_34]))) : (min((arr_133 [i_34] [i_34 - 2] [i_34]), (arr_130 [i_34]))))));
                    }
                    for (long long int i_40 = 2; i_40 < 24; i_40 += 1) 
                    {
                        var_93 = ((/* implicit */int) max((min((((((/* implicit */_Bool) arr_129 [i_35] [i_35] [i_34 + 1])) ? (((/* implicit */long long int) arr_128 [i_34])) : (arr_133 [i_34] [i_35] [i_35]))), (((/* implicit */long long int) arr_136 [i_40 + 1] [i_34 - 2] [i_33])))), (((((/* implicit */_Bool) arr_141 [i_34 + 1] [i_34 + 1] [i_40 + 1] [i_40 - 1])) ? (arr_130 [i_34]) : (arr_130 [i_34])))));
                        arr_146 [i_33] [i_34] [i_34] [i_40] [i_40 - 1] = ((/* implicit */long long int) min((515), (2147483647)));
                    }
                    for (long long int i_41 = 0; i_41 < 25; i_41 += 2) 
                    {
                        var_94 = ((/* implicit */long long int) min((var_94), (min((((/* implicit */long long int) arr_127 [i_33] [i_34] [11LL])), (min((arr_124 [i_41]), (min((arr_134 [i_41] [i_41] [16LL]), (((/* implicit */long long int) arr_129 [i_33] [i_33] [i_33]))))))))));
                        /* LoopSeq 1 */
                        for (long long int i_42 = 2; i_42 < 23; i_42 += 1) 
                        {
                            arr_151 [i_33] [i_34] = ((((/* implicit */_Bool) arr_147 [i_34] [3] [i_41] [i_34])) ? (max((min((arr_149 [i_34] [i_41] [i_34]), (arr_133 [i_34] [i_34] [i_35]))), (arr_140 [i_33] [i_33] [i_35] [i_35] [i_42] [i_42] [i_34]))) : (((((/* implicit */_Bool) max((arr_135 [i_33] [i_33] [i_33] [i_33] [i_33] [i_41] [10LL]), (((/* implicit */long long int) arr_129 [i_33] [i_34] [i_41]))))) ? (((((/* implicit */_Bool) arr_132 [i_34] [i_34] [i_34 - 2] [i_34])) ? (arr_125 [i_33] [12]) : (arr_134 [i_34] [i_41] [i_35]))) : (arr_130 [i_34]))));
                            var_95 |= ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_145 [i_34 - 1] [i_42 + 2] [i_42 - 1] [i_42 + 2])) ? (arr_145 [i_34 - 1] [i_42 + 1] [i_42 - 2] [i_42 - 1]) : (arr_145 [i_34 - 2] [i_42 - 2] [6LL] [i_42 + 1]))), (((((/* implicit */_Bool) arr_133 [i_33] [i_42 + 2] [i_42])) ? (arr_145 [i_34 - 2] [i_42 + 2] [i_42 - 1] [i_42 - 2]) : (arr_145 [i_34 + 1] [i_42 - 2] [i_42 - 2] [i_42 + 1])))));
                        }
                    }
                    var_96 = ((/* implicit */int) min((min((arr_130 [i_34]), (max((((/* implicit */long long int) arr_136 [i_33] [i_34 + 1] [11])), (arr_144 [i_33] [i_34] [i_33] [i_35]))))), (min((arr_124 [i_34]), (((/* implicit */long long int) arr_150 [i_33] [i_34] [4LL] [i_33] [i_33] [i_33]))))));
                    /* LoopNest 2 */
                    for (long long int i_43 = 0; i_43 < 25; i_43 += 1) 
                    {
                        for (int i_44 = 4; i_44 < 22; i_44 += 4) 
                        {
                            {
                                var_97 = ((/* implicit */int) max((arr_148 [i_34 - 1] [i_44 - 2]), (max((max((arr_134 [i_34] [i_34] [8]), (arr_123 [i_43]))), (min((arr_153 [0LL] [i_34 + 1] [i_35] [i_35] [20LL] [20LL]), (arr_135 [i_33] [i_34] [i_34] [i_33] [i_43] [i_34] [i_34])))))));
                                var_98 = ((/* implicit */int) min((arr_154 [i_33]), (arr_155 [i_33] [i_34] [i_44])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
