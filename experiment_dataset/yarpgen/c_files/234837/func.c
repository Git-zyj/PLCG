/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234837
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
    var_10 *= min((((/* implicit */unsigned long long int) ((signed char) max((var_9), (((/* implicit */unsigned long long int) var_6)))))), (max((var_9), (((/* implicit */unsigned long long int) var_2)))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((var_7) + (((/* implicit */int) arr_0 [i_0]))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_0 - 1]);
                var_11 &= ((/* implicit */short) arr_3 [i_0 - 1]);
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_12 = ((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0] [i_0 - 1]);
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) arr_8 [i_0 + 1] [i_0] [(signed char)11] [(signed char)11]))));
                }
            }
        } 
    } 
    var_14 ^= ((/* implicit */signed char) max((var_8), (((/* implicit */unsigned int) var_4))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_9) - (((/* implicit */unsigned long long int) var_6)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) ^ (var_9)));
}
