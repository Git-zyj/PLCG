/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229088
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
    var_17 = ((((/* implicit */_Bool) ((max((9223231299366420480LL), (9015036311730626279LL))) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)245))) ^ (var_13)))))) ? (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) : (var_5))), (((/* implicit */long long int) var_16)))) : (((/* implicit */long long int) ((/* implicit */int) var_9))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned char)13] [i_0]))))) : (((/* implicit */int) ((unsigned char) (unsigned char)72)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        arr_11 [15LL] [i_1 + 1] [5LL] [i_0] [i_3] = ((((((/* implicit */_Bool) 2067081761803000654LL)) ? (9223231299366420480LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)53))))) & (((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [3LL] [i_1 + 1]))))));
                        var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_4 [i_2] [i_2]))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) var_8)) >> (((var_13) - (1747657747446237711LL)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            arr_14 [i_0] [6LL] [i_0] [1LL] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)114))))) <= (((arr_8 [i_0] [i_1 - 1] [i_2] [i_2]) - (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4 + 1] [i_2] [i_2] [i_1])))))));
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((arr_12 [i_3] [i_3 + 1] [i_4] [(unsigned char)4] [i_4 + 1] [i_4 - 1]) <= (arr_8 [i_1 + 1] [i_4 - 1] [i_2] [i_2]))))));
                        }
                        arr_15 [i_0] [i_0] [i_0] = arr_7 [i_0] [i_2] [i_3];
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        for (long long int i_6 = 4; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((arr_12 [i_1] [i_1] [i_1 - 1] [0LL] [i_1] [(unsigned char)8]) / (arr_12 [i_1] [i_1] [i_1 - 1] [(unsigned char)2] [2LL] [i_1]))))));
                                var_22 = ((/* implicit */long long int) (unsigned char)217);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 2; i_7 < 12; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((((arr_19 [i_7 + 2] [i_2] [i_1] [i_1] [i_1 + 1]) + (9223372036854775807LL))) << (((((arr_19 [i_7 - 1] [i_7 - 2] [i_7 + 2] [i_7 - 2] [i_1 + 1]) + (3554853649509277794LL))) - (47LL)))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) && (((/* implicit */_Bool) arr_5 [i_0]))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [10LL])))))));
                            }
                        } 
                    } 
                    arr_27 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 0LL))));
                }
            } 
        } 
        var_25 = arr_20 [i_0] [i_0] [i_0];
    }
    for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
    {
        var_26 = ((long long int) arr_24 [(unsigned char)12] [i_9] [i_9]);
        arr_30 [0LL] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) : (min((((/* implicit */long long int) var_2)), (var_5))))) >= (((((/* implicit */_Bool) max((-1LL), (((/* implicit */long long int) var_9))))) ? (9223231299366420480LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_5))))))));
    }
}
