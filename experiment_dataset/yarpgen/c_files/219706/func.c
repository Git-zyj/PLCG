/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219706
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
    var_12 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? ((~((-(var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_11)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) max((arr_0 [i_0 + 1]), (arr_0 [i_0])))) : (((((/* implicit */int) arr_1 [i_0 - 1])) | (((/* implicit */int) arr_1 [i_0 - 1]))))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 - 1]))))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1])))) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) var_8))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_15 -= ((/* implicit */unsigned int) var_7);
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_5 [i_0 - 1]))))) ? (((/* implicit */unsigned long long int) ((arr_11 [i_4] [(unsigned char)14] [i_2] [i_0 - 1] [i_0 - 1]) - (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4 - 2] [i_3] [i_2] [i_1] [i_0])))))) : (arr_10 [i_4 - 2] [i_4 - 1] [i_4] [i_4 - 1] [i_3 - 3])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_8 [i_3] [i_3])))))));
                                arr_14 [8U] [i_3] [i_1] [i_3] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) ((((/* implicit */int) arr_13 [17] [i_3] [i_2] [i_0] [i_0])) < (((/* implicit */int) var_8)))))))) ? (var_5) : (((((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_3])))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_5))));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) arr_8 [i_1] [i_1]))))) : (min(((~(var_0))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_1]))))))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 1; i_6 < 23; i_6 += 1) 
                        {
                            arr_20 [12] [12] [i_5] [i_5] [i_2] [i_1] [i_0] &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % (arr_6 [i_6] [i_0 - 1] [i_0 - 1])));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_2))));
                            var_20 = ((/* implicit */_Bool) min((var_20), (((arr_18 [i_5]) == (arr_18 [(unsigned short)9])))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */int) arr_22 [8U] [i_1]);
                            var_22 = var_11;
                            var_23 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_7] [i_5] [i_2] [(unsigned char)14] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2] [i_5] [i_2] [i_2] [i_0] [i_0]))) >= (var_5))))) : ((~(arr_3 [i_2] [i_2] [i_0 + 1])))));
                        }
                        for (short i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            var_24 = var_5;
                            arr_25 [i_8] [i_5] [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */signed char) var_2);
                            var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_0 - 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_18 [i_0 - 1])));
                        }
                        arr_26 [i_1] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [9ULL] [i_1] [i_1] [i_0 - 1] [i_0 - 1])) ? ((~(arr_7 [i_5] [14ULL]))) : (((/* implicit */unsigned long long int) arr_3 [(unsigned short)14] [i_1] [i_0 - 1]))));
                    }
                    /* vectorizable */
                    for (long long int i_9 = 1; i_9 < 22; i_9 += 1) 
                    {
                        arr_31 [i_0] [i_2] [i_1] [1LL] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */int) var_1)) << (((((/* implicit */int) arr_8 [i_1] [i_1])) - (42423)))))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_9 - 1] [i_2] [i_2] [i_1] [i_0 + 1])) ? (((/* implicit */int) arr_13 [i_0 + 1] [(signed char)12] [i_1] [i_1] [i_0 + 1])) : (((/* implicit */int) arr_28 [i_9 + 1] [i_0] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) arr_27 [i_9] [4U] [i_2] [i_1] [i_0 + 1])) : (arr_10 [i_9 - 1] [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1])));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) var_0))));
                        var_28 = ((/* implicit */unsigned short) (~(arr_6 [(short)2] [i_0 - 1] [i_0 + 1])));
                        var_29 += ((/* implicit */signed char) arr_18 [i_0]);
                        var_30 ^= ((/* implicit */short) arr_5 [i_10]);
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 13; i_11 += 2) 
    {
        var_31 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */long long int) arr_4 [i_11] [(unsigned short)17] [(unsigned short)17] [i_11])) : (arr_24 [i_11] [i_11] [i_11] [i_11] [i_11])))) ? (((((/* implicit */_Bool) arr_7 [(signed char)2] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [(unsigned char)6]))) : (arr_24 [i_11] [i_11] [(signed char)16] [i_11] [i_11]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_11])) ? (((/* implicit */int) arr_30 [(short)7] [i_11] [i_11])) : (arr_16 [i_11] [i_11] [i_11] [2ULL] [2ULL]))))));
        arr_37 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_29 [i_11] [i_11] [i_11] [i_11])))))) <= (var_9)));
        /* LoopSeq 1 */
        for (short i_12 = 0; i_12 < 13; i_12 += 3) 
        {
            arr_40 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_11] [i_11] [i_11])) ? (arr_3 [21ULL] [i_11] [i_11]) : (arr_3 [i_11] [11LL] [i_11])));
            var_32 -= ((/* implicit */short) (-(((arr_28 [i_12] [i_12] [i_12] [i_11]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))));
        }
    }
    var_33 *= ((/* implicit */signed char) var_7);
    var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))) : (var_5))))));
}
