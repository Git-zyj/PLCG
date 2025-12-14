/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202307
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
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) 5149662388757401982LL)) ? (-7056538595225971507LL) : (9223372036854775807LL))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = 675391482U;
                var_21 = ((/* implicit */int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (var_6))), (675391482U)));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_3);
}
