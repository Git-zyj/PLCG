/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43119
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned int) (unsigned short)65535)), (4096U))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_9))))))) : (((/* implicit */int) ((unsigned char) var_6)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_16 [i_4] [i_4] [i_4] [i_1] [(short)16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_6 [i_2] [i_4] [i_2]))) ? (min((((/* implicit */unsigned long long int) var_6)), (arr_7 [i_0] [i_0] [0ULL]))) : (arr_7 [i_0] [3] [i_2])))) ? (((arr_10 [i_4] [i_3] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_3]))))) : (((/* implicit */long long int) var_6)));
                                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) min((arr_5 [i_1] [i_1]), (((/* implicit */int) var_2)))))) ? (((/* implicit */int) ((signed char) max((var_6), (((/* implicit */int) var_4)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_5 = 2; i_5 < 23; i_5 += 3) 
                {
                    var_13 = ((/* implicit */int) ((unsigned long long int) var_3));
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (min((var_3), (((/* implicit */unsigned long long int) arr_10 [(unsigned short)1] [i_1] [(unsigned short)1])))) : (((/* implicit */unsigned long long int) ((long long int) var_0)))))) ? (((((/* implicit */_Bool) arr_1 [i_5 - 1])) ? (arr_1 [i_5 + 1]) : (arr_1 [i_5 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5 - 2]))))))));
                        var_15 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)54))) | (14ULL))), (((/* implicit */unsigned long long int) min((arr_1 [i_5 + 1]), (arr_11 [i_1] [i_1] [i_5 - 2] [i_5 + 1] [i_1] [i_1]))))));
                    }
                    var_16 = ((((/* implicit */_Bool) ((unsigned int) var_8))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8147)) ? (((/* implicit */unsigned long long int) var_8)) : (var_3)))) ? ((-(var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 120230206U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_1]))))))) : (((((/* implicit */_Bool) arr_19 [i_5] [i_5 + 1] [i_1] [i_1] [i_5])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
                    arr_21 [(short)14] [i_1] [(unsigned char)7] = ((/* implicit */short) ((long long int) min((((/* implicit */unsigned long long int) ((arr_5 [i_1] [i_1]) <= (((/* implicit */int) var_5))))), (((arr_2 [0LL]) ^ (arr_2 [i_1]))))));
                }
                for (unsigned int i_7 = 1; i_7 < 21; i_7 += 3) 
                {
                    arr_24 [i_1] [i_7] [i_7] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_20 [i_7] [i_1] [17LL] [i_1] [14U])))) ? ((+(((int) (unsigned short)8147)))) : (((/* implicit */int) var_10))));
                    var_17 ^= ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_18 [i_7 - 1] [i_7 + 3] [i_7 + 1])), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (max((var_1), (((/* implicit */unsigned long long int) arr_18 [i_7 - 1] [i_7 + 3] [i_7 + 1])))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 2; i_9 < 22; i_9 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) arr_15 [i_0] [i_1] [i_7] [(unsigned char)4] [i_9])))) ? (((/* implicit */unsigned long long int) (-(min((var_8), (((/* implicit */long long int) var_0))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_9])) <= (arr_7 [13] [i_8] [i_9]))))) & (((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                                arr_31 [i_9] [i_1] [i_7] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_4);
                                var_19 ^= ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) var_6)) | (arr_11 [i_7 - 1] [i_7 + 1] [i_7 + 2] [i_7 - 1] [i_0] [i_9 - 2])))));
                                var_20 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (max((var_9), (((/* implicit */unsigned long long int) arr_29 [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_7 + 2] [i_7 + 1])))) : (min((((((/* implicit */_Bool) arr_6 [0ULL] [23ULL] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))) : (var_3))), (((/* implicit */unsigned long long int) ((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
                                arr_32 [i_8] [i_8] [(unsigned char)18] [i_1] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((var_2), (var_2))))) <= (max((((/* implicit */long long int) 2411669905U)), (-563553763816420390LL))))))));
                            }
                        } 
                    } 
                    arr_33 [i_0] [i_0] [i_1] [i_7] |= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_27 [i_7] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */int) arr_27 [i_7] [i_7] [i_7 + 3])) : (((/* implicit */int) var_2))))));
                }
                for (unsigned int i_10 = 4; i_10 < 21; i_10 += 3) 
                {
                    arr_38 [i_0] [i_1] [i_1] [i_10] = ((/* implicit */unsigned long long int) (unsigned short)50086);
                    arr_39 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) arr_17 [i_0]);
                }
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (-((-(((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (arr_15 [4ULL] [i_0] [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0]))))))))))));
                arr_40 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-116)) ? (((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */int) (short)-16627)) : (((/* implicit */int) (unsigned short)15473)))) : (((/* implicit */int) (unsigned short)50062))));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((var_2), (((/* implicit */unsigned short) (unsigned char)57))))), (-3173278220214651628LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_0] [i_0] [i_1])))) : (((max((((/* implicit */unsigned long long int) var_0)), (arr_23 [i_0] [i_1] [i_0] [i_0]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) | (((/* implicit */int) (unsigned short)39363)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 3) 
    {
        var_23 ^= ((/* implicit */unsigned char) arr_0 [i_11]);
        /* LoopSeq 2 */
        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 4) 
        {
            var_24 = ((/* implicit */_Bool) (((-(arr_0 [i_11]))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_11] [i_12] [i_11] [i_12] [i_12] [i_12] [i_11])))));
            var_25 = ((/* implicit */int) min((max((arr_15 [i_12] [i_12] [(signed char)16] [i_11] [i_11]), (((/* implicit */unsigned int) arr_30 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [i_12] [i_12] [i_11] [i_11] [i_11] [i_11] [i_11])) | (((/* implicit */int) (signed char)-26)))))));
        }
        for (signed char i_13 = 0; i_13 < 14; i_13 += 1) 
        {
            var_26 = ((/* implicit */signed char) var_5);
            arr_49 [i_11] [i_11] = min((1428097865U), (((/* implicit */unsigned int) (signed char)57)));
        }
        arr_50 [(short)1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_11] [i_11] [i_11])) : (((/* implicit */int) var_7)))) ^ (((((/* implicit */_Bool) arr_29 [1U] [i_11] [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */int) var_7)) : (arr_29 [i_11] [(short)0] [i_11] [i_11] [i_11] [i_11])))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 13; i_14 += 3) 
    {
        var_27 = ((/* implicit */unsigned char) (+(var_8)));
        arr_53 [i_14] [i_14] = ((/* implicit */long long int) ((arr_14 [i_14] [(signed char)20] [i_14] [(signed char)20] [i_14]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63649)))));
    }
}
