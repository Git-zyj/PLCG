/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38117
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_1 + 1] [i_0] = ((/* implicit */short) arr_2 [i_0]);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */int) var_6);
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 2] [i_2] [i_2])) ? (var_6) : (((/* implicit */unsigned int) arr_8 [i_0] [i_1 + 2] [i_0] [i_0]))))) ? ((~((-2147483647 - 1)))) : (arr_8 [i_0] [i_1 + 2] [i_0] [12LL])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_1] [i_4] [i_5] = ((/* implicit */long long int) max((var_6), (arr_1 [i_1] [i_1])));
                            var_20 += max((((unsigned int) ((var_10) | (((/* implicit */unsigned int) 2147483647))))), (min((arr_1 [i_0] [i_5]), (((/* implicit */unsigned int) arr_8 [i_1] [i_1 + 1] [i_1 - 1] [5LL])))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) ((((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (2147483639) : (arr_8 [i_0] [i_0] [(short)11] [i_0])))) ^ (((((/* implicit */_Bool) ((int) var_15))) ? (((unsigned long long int) arr_14 [i_0] [i_0] [i_1 + 1] [i_1] [i_1 + 1])) : (min((581368016966826773ULL), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_1] [i_1]))))))));
                var_22 = ((/* implicit */long long int) arr_0 [i_0] [i_1 - 1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 1; i_6 < 21; i_6 += 4) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            {
                var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_6])) ? (((/* implicit */unsigned long long int) var_7)) : (arr_12 [i_6 + 2] [i_6 + 2] [i_7] [i_6] [i_6])))) ? (((/* implicit */int) (short)0)) : (arr_16 [20U])));
                /* LoopSeq 2 */
                for (unsigned int i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        for (int i_10 = 1; i_10 < 22; i_10 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) 18446744073709551615ULL))));
                                var_25 ^= ((/* implicit */long long int) min((min((min((arr_0 [i_9] [i_8]), (18446744073709551613ULL))), (((((/* implicit */unsigned long long int) arr_21 [i_9] [i_8] [i_9])) + (var_5))))), (((/* implicit */unsigned long long int) ((unsigned int) -6946556693508501858LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        for (int i_12 = 1; i_12 < 23; i_12 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_14 [i_12] [6LL] [i_8] [21U] [9LL]))));
                                arr_33 [(short)8] [i_7] [i_12] [(short)8] [i_6] [i_6 - 1] = var_16;
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    var_27 *= ((/* implicit */short) max((((min((((/* implicit */unsigned long long int) arr_30 [i_6] [18ULL] [18ULL] [18ULL] [i_6] [i_13])), (var_12))) - (min((((/* implicit */unsigned long long int) arr_23 [i_13] [i_6])), (var_5))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_16 [2LL])))));
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        for (int i_15 = 0; i_15 < 24; i_15 += 3) 
                        {
                            {
                                arr_41 [i_6] [3U] [i_13] [i_7] [i_6] = ((/* implicit */long long int) ((unsigned int) var_12));
                                var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_19 [i_15] [i_13]), (arr_19 [7ULL] [i_7])))) ? (((((arr_31 [i_6] [i_7] [i_13] [i_13] [i_14] [i_13]) / (((/* implicit */unsigned long long int) 2147483647)))) | (((((/* implicit */_Bool) arr_25 [i_14] [i_14] [i_14] [i_7] [i_14])) ? (((/* implicit */unsigned long long int) 2147483647)) : (arr_2 [i_6 + 1]))))) : (4260607557632ULL)));
                                var_29 ^= ((/* implicit */int) arr_6 [i_13] [i_7] [11U]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 1; i_16 < 23; i_16 += 4) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 24; i_17 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned int) var_17);
                                arr_48 [i_6] [i_7] = ((/* implicit */short) arr_37 [i_6] [i_7] [14U] [i_13] [i_16] [14U]);
                                var_31 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)32765)), (arr_8 [i_17] [i_16 - 1] [i_13] [i_6 + 3])))) ? (((/* implicit */unsigned int) min((arr_26 [18LL]), (arr_26 [14U])))) : (((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) arr_40 [i_6] [i_7] [i_13] [i_16] [2U]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_45 [i_6 + 1] [2U] [i_17]) != (var_13))))) : (var_6)))));
                            }
                        } 
                    } 
                    arr_49 [i_6] [i_7] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_28 [i_6] [i_13] [i_13] [i_7]);
                    arr_50 [10U] |= ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-32765)) : (((/* implicit */int) (((+(arr_34 [i_6] [(short)8] [i_13]))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_8))))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_18 = 2; i_18 < 8; i_18 += 1) 
    {
        for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 4; i_20 < 9; i_20 += 3) 
                {
                    for (long long int i_21 = 3; i_21 < 8; i_21 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_22 = 0; i_22 < 10; i_22 += 4) 
                            {
                                var_32 -= ((/* implicit */unsigned int) arr_29 [i_18] [i_18] [i_18 - 2] [i_18] [i_18 + 1] [i_18]);
                                var_33 = ((/* implicit */unsigned long long int) 1454995875);
                                arr_64 [6ULL] [6ULL] [i_20] [6ULL] [i_18] [2U] [i_18] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */long long int) arr_26 [i_18])) == (var_7)))), (((((/* implicit */_Bool) arr_26 [i_18])) ? (arr_26 [i_18]) : (arr_26 [i_18])))));
                                var_34 += ((/* implicit */unsigned long long int) (short)-32765);
                            }
                            var_35 = arr_38 [(short)3] [23ULL] [i_20] [(short)3] [i_18] [i_18];
                            var_36 |= arr_2 [i_18 + 1];
                        }
                    } 
                } 
                arr_65 [i_18] [i_18] = ((/* implicit */short) arr_8 [i_19] [i_19] [i_19] [i_19]);
                var_37 &= -2147483645;
                /* LoopNest 2 */
                for (long long int i_23 = 0; i_23 < 10; i_23 += 4) 
                {
                    for (long long int i_24 = 3; i_24 < 9; i_24 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) 10))));
                            var_39 += ((/* implicit */unsigned int) max((2147483639), (((/* implicit */int) (short)32765))));
                            arr_72 [i_18] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_18 + 2] [i_18 - 1] [i_18] [i_18 + 2])) ? (((/* implicit */long long int) var_6)) : (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_18 + 1] [i_18 - 2] [i_18 + 1] [i_18 - 2]))) : (((unsigned long long int) arr_22 [i_18 + 2] [i_18 - 1] [i_18] [i_18 - 1]))));
                            var_40 = min((((((/* implicit */_Bool) arr_3 [i_19] [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (var_7))))) : (((((/* implicit */_Bool) arr_9 [i_18] [i_19] [19LL] [i_19])) ? (arr_3 [i_23] [12ULL]) : (arr_44 [i_18] [i_19] [i_18] [i_19]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_18] [i_19] [i_18] [5])), (arr_3 [i_18] [i_23])))) ? (var_13) : (((/* implicit */unsigned int) arr_30 [i_24 - 1] [(short)23] [i_23] [i_18 + 2] [i_18] [i_18 + 2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
