/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31661
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
    var_17 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) var_12)))) ? (arr_4 [i_1] [i_2] [i_3]) : (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_3] [i_1] [i_0]))))))) <= (((long long int) var_3))));
                        var_19 = min((max((((/* implicit */unsigned long long int) 98304U)), (((((/* implicit */_Bool) (unsigned char)247)) ? (var_6) : (((/* implicit */unsigned long long int) 939907050U)))))), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_3])) ? (((((/* implicit */_Bool) 939907055U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [8U] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)101)) ? (arr_4 [i_0] [i_1] [i_0]) : (((/* implicit */long long int) arr_3 [i_1] [i_1] [i_1]))))))));
                        arr_11 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */short) 939907030U);
                    }
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) var_14);
                        arr_15 [i_0] [i_0] [i_1] [i_2] [i_4] = max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (arr_10 [i_1] [i_4])))), ((+(var_2))));
                        var_21 = ((/* implicit */long long int) var_14);
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_12 [i_0]))))) ? (((((/* implicit */int) var_9)) + (((/* implicit */int) (unsigned char)2)))) : (((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11)))))))));
                            var_23 = ((/* implicit */unsigned char) (~(((0ULL) >> (((arr_0 [(unsigned char)8] [i_1]) - (569649924U)))))));
                            arr_21 [i_0] &= ((/* implicit */int) ((unsigned char) var_8));
                            var_24 *= ((/* implicit */unsigned long long int) ((unsigned char) (signed char)-1));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0] [8U] [8U] [i_0] [i_0] [i_0])) & (arr_19 [i_6])));
                        }
                        for (signed char i_7 = 2; i_7 < 8; i_7 += 3) 
                        {
                            arr_25 [i_0] = ((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) var_16)))));
                            arr_26 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_0] [1] [i_5] [i_0]));
                        }
                        arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_24 [i_0] [i_1] [i_2] [i_0] [i_5]))));
                        var_26 += ((/* implicit */long long int) ((unsigned char) arr_3 [i_1] [i_5] [i_2]));
                        arr_28 [i_0] [i_0] [i_0] [i_0] [1U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) var_5))))) ? ((~(arr_10 [(short)11] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                    }
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) var_11))));
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_5 [i_0] [i_1] [3LL])), (arr_18 [i_0] [i_1] [i_2])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_14)))) ? (((/* implicit */int) min((arr_8 [i_0]), (((/* implicit */short) arr_5 [i_0] [i_1] [10U]))))) : ((-(((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) ((arr_3 [i_0] [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [5ULL])))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) arr_14 [i_2] [i_1] [i_1] [(short)1] [i_2] [i_2])))))))));
                    var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) min((((/* implicit */unsigned long long int) var_0)), (max((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_10 [i_0] [i_1])))))))))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */short) 3355060241U);
}
