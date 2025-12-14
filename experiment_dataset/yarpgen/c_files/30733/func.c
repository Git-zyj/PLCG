/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30733
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
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_8)), (var_7))))));
    var_14 += ((/* implicit */signed char) (-(var_3)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 |= ((/* implicit */int) arr_2 [i_1]);
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */int) var_9);
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_1]))))) && (((/* implicit */_Bool) ((int) arr_1 [i_0] [i_1])))));
            }
        } 
    } 
}
