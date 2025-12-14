/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21398
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
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_1))));
    var_13 &= ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */_Bool) var_10);
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (+(max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */int) (unsigned short)54946))))));
                var_15 = ((/* implicit */signed char) arr_1 [i_0]);
            }
        } 
    } 
}
