/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240622
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), (var_2)))) | (var_1)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        arr_8 [i_3 - 3] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_1 [i_2] [(_Bool)1])), (((((/* implicit */_Bool) ((signed char) arr_3 [i_0] [i_0]))) ? (min((arr_4 [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0] [i_0]))) : (arr_6 [i_0] [7] [i_2] [(signed char)8])))));
                        arr_9 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((arr_0 [i_0]) % (((/* implicit */unsigned int) ((((arr_2 [i_0]) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_3] [i_2] [i_1 - 2] [i_0])) - (139))))))))), (((((((long long int) (short)-8618)) + (9223372036854775807LL))) << (((((/* implicit */int) arr_5 [9] [9] [i_2] [i_3])) - (159)))))));
                        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 298644938)) <= (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_6 [i_3 - 3] [i_2] [i_1 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2190))))))))));
                        arr_10 [i_3 - 2] [i_3 - 1] [i_3] [(signed char)10] [(signed char)10] [i_3] = ((/* implicit */unsigned short) arr_5 [i_0] [i_2] [5ULL] [i_3 - 1]);
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_0] [i_2] [(signed char)3] = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-2175)) ? (((/* implicit */int) (short)2195)) : (((/* implicit */int) (short)-2166)))))));
                        arr_16 [i_0] [(short)3] [i_2] [i_4] [i_0] [i_1] = ((/* implicit */unsigned int) arr_13 [i_0] [3LL] [i_2]);
                    }
                    for (unsigned char i_5 = 1; i_5 < 9; i_5 += 4) 
                    {
                        arr_21 [i_2] [i_1] [i_2] [i_5] [i_2] = arr_4 [i_0] [i_1];
                        /* LoopSeq 1 */
                        for (signed char i_6 = 1; i_6 < 8; i_6 += 3) 
                        {
                            var_14 = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
                            var_15 = arr_23 [i_0] [i_0] [(unsigned char)7] [i_0] [i_0];
                        }
                        arr_24 [i_0] [i_0] [2U] [i_0] = ((/* implicit */signed char) ((((max((arr_0 [i_2]), (((/* implicit */unsigned int) arr_13 [i_5] [i_5] [i_5])))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_2] [i_1 + 1] [5U] [i_1 + 1])) ? (((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_5 + 1])) : (((/* implicit */int) arr_22 [i_2] [i_1]))))))) ^ (((/* implicit */unsigned int) min((arr_3 [i_0] [i_0]), (((((/* implicit */int) arr_19 [i_0] [i_1 - 1] [i_1 - 1] [i_0])) - (arr_2 [i_0]))))))));
                        arr_25 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (short)26420)) >> (((((/* implicit */int) (short)-2196)) + (2198))))) - (((/* implicit */int) ((short) max((((/* implicit */unsigned char) arr_20 [i_2] [i_2] [i_1 + 1] [8U])), (arr_5 [i_1] [i_1] [i_1] [i_0])))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 4) 
                        {
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_5] [i_5 + 2] [8LL] [i_2] [i_1 - 3] [i_1 - 2])) - (((/* implicit */int) arr_26 [i_7] [i_5 + 1] [i_5] [i_1 - 3] [i_5] [i_1 - 3]))))) ? (((/* implicit */int) ((_Bool) ((arr_28 [i_1] [i_1] [i_2] [i_2] [i_7 + 1] [i_5]) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))))))) : (min((arr_27 [i_7 + 1] [i_1] [i_5 + 1] [i_5] [i_7] [i_1 - 1] [i_7]), (arr_27 [i_7 - 1] [i_0] [i_5 - 1] [i_5] [i_7 + 1] [i_1 + 1] [(unsigned char)8]))))))));
                            var_17 = ((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_5] [i_7 - 1] [i_5 + 2]);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 1; i_8 < 8; i_8 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])) < (((/* implicit */int) (unsigned short)39060)))) ? (((/* implicit */int) ((unsigned char) (short)2189))) : (((/* implicit */int) (short)-26411)))))));
                            var_19 *= ((/* implicit */_Bool) arr_11 [i_0] [5]);
                        }
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        arr_34 [i_2] [0LL] [0LL] = ((/* implicit */short) ((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) + (-1335826726)));
                        /* LoopSeq 2 */
                        for (int i_10 = 2; i_10 < 7; i_10 += 1) 
                        {
                            arr_37 [i_0] [i_0] [i_2] [i_9] [i_9] [i_10 + 3] [i_0] = ((/* implicit */int) min((((long long int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) arr_17 [i_0] [i_1 - 1]))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)45989)) ^ (((/* implicit */int) arr_33 [(signed char)0] [(signed char)0] [i_2] [i_2])))))));
                            var_20 = ((/* implicit */long long int) arr_13 [i_10] [i_10 + 4] [i_10]);
                        }
                        /* vectorizable */
                        for (short i_11 = 1; i_11 < 10; i_11 += 2) 
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((717173232U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))) ? (arr_6 [i_9] [i_1 + 1] [i_11] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1362182060)) || (((/* implicit */_Bool) 855810636U))))))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_22 [i_0] [i_0]))));
                            var_23 = ((/* implicit */signed char) arr_39 [6U] [i_1] [i_1] [i_2] [i_9] [i_11]);
                        }
                    }
                    /* LoopSeq 2 */
                    for (long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_38 [i_0] [i_1 - 2] [10ULL] [i_2] [i_12])))) + (max((arr_0 [i_0]), (((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_0] [i_1 - 1] [i_2] [i_2] [i_2] [i_2]))) * (arr_29 [i_0] [i_1] [i_2] [(short)1] [(short)1] [i_12])))))));
                        var_25 = ((/* implicit */int) ((long long int) ((int) arr_27 [i_12] [i_2] [(signed char)7] [i_2] [i_1] [i_0] [i_0])));
                        var_26 = ((/* implicit */short) min((((/* implicit */long long int) ((((long long int) arr_12 [(unsigned short)5] [10U] [(unsigned short)5] [i_12])) == (((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [(unsigned short)3])) / ((-2147483647 - 1)))))))), (((long long int) ((((/* implicit */int) (signed char)79)) - (arr_3 [(_Bool)1] [i_1]))))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        var_27 = ((/* implicit */short) ((long long int) (signed char)48));
                        var_28 ^= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) 7680ULL)) ? (((/* implicit */int) arr_33 [i_0] [i_1] [i_0] [i_13])) : (((/* implicit */int) ((signed char) arr_22 [i_13] [i_1]))))));
                        arr_45 [i_0] [i_1 + 1] = ((/* implicit */long long int) max((((int) max((546495379U), (((/* implicit */unsigned int) arr_19 [i_2] [i_1] [i_2] [(short)7]))))), (((/* implicit */int) arr_44 [i_0] [i_1 - 1] [i_2] [i_13]))));
                        arr_46 [i_0] [i_0] [i_1] [i_2] [i_2] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_2]))) != (min((((-481567546125487034LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63662))))), (((/* implicit */long long int) arr_19 [0U] [i_1 - 3] [i_2] [i_13]))))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_15 = 1; i_15 < 9; i_15 += 1) 
                    {
                        for (long long int i_16 = 0; i_16 < 11; i_16 += 3) 
                        {
                            {
                                arr_56 [i_0] [i_14] [i_16] = ((/* implicit */long long int) (short)26401);
                                arr_57 [i_16] [i_15 - 1] [i_1] [i_1] [(unsigned short)3] = ((/* implicit */short) ((((/* implicit */int) arr_47 [i_1 + 1] [i_15 + 2] [i_15 + 2])) != (((/* implicit */int) arr_47 [i_1 + 1] [i_15 + 2] [i_15 + 2]))));
                                arr_58 [i_15] [3LL] [i_0] = ((/* implicit */unsigned short) ((long long int) arr_4 [i_1 + 1] [i_15 - 1]));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned int) arr_17 [i_0] [i_0]);
                }
                arr_59 [i_1 - 1] [i_0] [i_0] = ((/* implicit */long long int) arr_30 [i_0] [i_1] [i_1] [i_1 - 2] [(short)10] [8] [i_0]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_17 = 1; i_17 < 9; i_17 += 1) 
                {
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_39 [i_1] [i_1] [i_1] [i_1] [i_1 - 1] [i_0])) >= (((/* implicit */int) arr_13 [9LL] [i_1 + 1] [i_17 + 2]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_18 = 1; i_18 < 10; i_18 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned char) arr_36 [i_18 - 1] [1U]);
                        /* LoopSeq 2 */
                        for (int i_19 = 0; i_19 < 11; i_19 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned long long int) ((unsigned short) ((arr_2 [i_0]) > (((/* implicit */int) arr_39 [i_0] [i_17] [i_17] [i_17] [i_0] [i_0])))));
                            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((arr_53 [i_19] [i_17] [i_1 - 1] [i_0]) < (((((/* implicit */_Bool) arr_49 [i_0] [i_0])) ? ((-9223372036854775807LL - 1LL)) : (arr_32 [i_0] [i_0] [i_0] [i_0] [i_19] [i_0]))))))));
                        }
                        for (int i_20 = 1; i_20 < 9; i_20 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_54 [i_20] [i_20 - 1] [i_20 + 2])) || (((/* implicit */_Bool) arr_32 [i_1 - 3] [i_17] [i_17] [i_17] [i_17] [i_17 - 1]))));
                            var_35 *= ((/* implicit */signed char) ((2147483637) / (((/* implicit */int) (unsigned short)5452))));
                            arr_69 [i_20] [i_17] [i_20] [i_20] = ((/* implicit */long long int) ((((arr_2 [i_0]) + (2147483647))) >> (((((/* implicit */int) arr_51 [i_20 - 1] [6LL])) - (31079)))));
                        }
                    }
                    for (long long int i_21 = 1; i_21 < 10; i_21 += 4) 
                    {
                        arr_72 [i_0] [i_1 - 3] [i_17 - 1] [i_21] = ((long long int) arr_4 [(unsigned char)10] [(unsigned char)10]);
                        var_36 = ((/* implicit */unsigned long long int) arr_33 [i_21 + 1] [i_0] [(short)7] [(short)7]);
                        var_37 = ((/* implicit */short) ((((((/* implicit */int) arr_47 [i_0] [(short)4] [i_21 - 1])) != (((/* implicit */int) (signed char)56)))) ? (((unsigned long long int) arr_17 [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_0] [(short)2])) || (((/* implicit */_Bool) (short)2429))))))));
                    }
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_22 = 0; i_22 < 11; i_22 += 1) 
                {
                    var_38 = ((/* implicit */unsigned long long int) arr_30 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_0]);
                    arr_75 [(short)0] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0] [i_0])) ? (arr_64 [i_22] [7]) : (arr_6 [i_1] [i_1] [(short)3] [i_1 - 1]))));
                    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_38 [i_0] [10U] [i_22] [i_1 - 1] [(unsigned char)7]))) >= (((((/* implicit */_Bool) 1139783382)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_1] [i_22] [10U]))) : (arr_62 [i_22] [i_1] [i_0] [i_0])))));
                }
                var_40 = ((/* implicit */unsigned short) (short)-7089);
            }
        } 
    } 
}
