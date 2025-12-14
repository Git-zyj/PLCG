/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237220
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((unsigned int) (+(((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_13 = (((~(((/* implicit */int) arr_0 [i_0] [i_1])))) | (((((/* implicit */_Bool) (-(4294967295U)))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) 1U)) || (((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_14 ^= ((/* implicit */int) ((((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [10] [(signed char)6] [i_0] [i_0]))))) >= (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned long long int) 482445272))))));
                    var_15 &= ((/* implicit */unsigned int) var_3);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] [i_2] [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) ((arr_10 [i_0] [i_3] [i_2 - 1] [i_2 - 1] [i_4]) ? (((/* implicit */int) arr_10 [i_0] [i_3] [i_2] [i_2 - 1] [i_2])) : (((/* implicit */int) var_7))));
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_0))));
                                var_17 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [i_1] [(_Bool)1] [i_3] [i_4])) > (((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))));
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_2))));
                            }
                        } 
                    } 
                }
                arr_14 [i_0] [i_0] = ((((/* implicit */_Bool) arr_2 [2U] [i_1] [(short)6])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (((((/* implicit */_Bool) 2147483647)) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) + (arr_1 [(signed char)2])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((int) ((((/* implicit */int) ((signed char) var_3))) - (((482445274) + (((/* implicit */int) (short)24576)))))));
}
