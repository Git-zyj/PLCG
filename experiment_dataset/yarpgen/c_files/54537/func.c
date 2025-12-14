/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54537
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (-(((((/* implicit */int) arr_0 [i_0] [i_1])) >> (((/* implicit */int) arr_0 [i_0] [i_1])))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) max((var_22), ((unsigned short)37264)));
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (signed char)-16))));
}
