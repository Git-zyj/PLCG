/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217845
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
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_6))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        var_21 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(unsigned short)13] [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : ((~(((/* implicit */int) arr_1 [i_0] [(unsigned short)15])))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(arr_5 [i_1])))))) ? (arr_5 [i_2]) : (((/* implicit */int) arr_7 [i_1] [i_3]))));
                    arr_10 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */short) (-(((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 1; i_4 < 17; i_4 += 3) 
                    {
                        arr_13 [i_1] [i_1] [i_2] [i_2] [i_3] [i_1] = ((/* implicit */short) arr_5 [i_1]);
                        var_23 ^= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_9 [(short)8] [i_2] [i_4]) : (arr_9 [i_4 + 2] [(_Bool)1] [7ULL])))) || (((/* implicit */_Bool) arr_6 [i_1] [i_2 + 2] [i_3])))))));
                        arr_14 [i_1] [i_2] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? ((+(4839566188449677246LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_4])))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_3] [i_1])))) ? (arr_9 [i_1] [0U] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 + 2] [i_2 + 1])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 - 1]))) & (arr_0 [i_2 - 1]))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 1; i_6 < 16; i_6 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [18U] [i_2 - 1])) ? (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_11 [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_3] [i_6 + 2])))) : (((/* implicit */int) arr_2 [i_6 + 3]))));
                            var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_5] [i_2 + 1])) ? (((arr_0 [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1]))))) : (arr_19 [i_1] [i_1] [i_1] [i_1])));
                            arr_21 [i_1] [i_3] [i_2] = (-(((/* implicit */int) arr_2 [i_3])));
                        }
                        var_26 = ((/* implicit */_Bool) ((arr_4 [i_2 + 2]) ? (((/* implicit */int) arr_4 [i_2 + 2])) : (((/* implicit */int) arr_4 [i_2 + 2]))));
                        var_27 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3]))) : (arr_8 [i_1])))));
                    }
                    arr_22 [i_2] [i_2] [i_2] [15LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_20 [i_1] [i_2]) & (((/* implicit */long long int) (~(arr_5 [i_2]))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 + 2]))) : (((((/* implicit */_Bool) ((arr_0 [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (((((/* implicit */_Bool) arr_15 [i_1] [i_2] [i_1])) ? (((/* implicit */long long int) arr_15 [7] [i_2] [i_3])) : (arr_6 [i_1] [i_3] [i_3])))))));
                }
            } 
        } 
        var_28 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((arr_6 [i_1] [i_1] [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1])))))) ? (((((/* implicit */_Bool) arr_18 [i_1])) ? (arr_17 [i_1] [i_1] [i_1] [11] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1] [i_1])) << (((((/* implicit */int) arr_7 [2] [i_1])) - (32075)))))))) == (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_18 [i_1])))))))));
        var_29 |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [1U] [i_1])) ? (((/* implicit */unsigned long long int) arr_8 [i_1])) : (arr_12 [i_1] [i_1] [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) (-((~(arr_20 [i_1] [i_1])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_6 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) arr_5 [i_1]))))) ? (((/* implicit */unsigned long long int) ((((arr_5 [i_1]) + (2147483647))) >> (((((/* implicit */int) arr_18 [i_1])) + (28707)))))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_20 [i_1] [i_1])) : (arr_17 [i_1] [i_1] [(unsigned short)3] [i_1] [(unsigned char)7] [i_1])))))));
        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_2 [i_1])))) ? (((((/* implicit */_Bool) (-(arr_6 [i_1] [i_1] [i_1])))) ? ((~(arr_12 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) (-(arr_9 [i_1] [i_1] [i_1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1])))))))))));
    }
}
