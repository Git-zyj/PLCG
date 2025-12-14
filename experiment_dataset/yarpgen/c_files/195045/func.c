/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195045
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
    var_20 = min((var_5), (((((/* implicit */int) var_11)) << (((/* implicit */int) var_11)))));
    var_21 = ((int) (unsigned short)28163);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])), (((int) var_6))));
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_14))));
            }
        } 
    } 
}
