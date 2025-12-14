/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214663
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
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (+((+(((/* implicit */int) arr_6 [(unsigned short)6] [i_0] [i_0 - 1])))))))));
                arr_7 [(unsigned short)6] &= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_5 [i_0 - 1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */int) var_9)) * (((/* implicit */int) var_12))))));
}
