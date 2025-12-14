/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47584
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_16 -= arr_2 [i_0];
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((int) var_9));
                                var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [8ULL] [i_1 - 1] [i_1 - 1])) ? (arr_5 [i_0] [i_1 + 1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (short)13509)))));
                                arr_13 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_1 + 1] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_1 + 1] [i_0 + 1]))));
                            }
                        } 
                    } 
                }
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)31182)), (var_0)))) ? (arr_12 [(short)0] [i_1] [i_1] [i_1] [(unsigned char)10] [i_0 + 1]) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_12 [i_0] [i_0] [(short)6] [i_0] [0ULL] [i_0 + 2])))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))));
    var_21 = ((/* implicit */unsigned char) var_7);
    var_22 = ((/* implicit */unsigned long long int) var_9);
}
