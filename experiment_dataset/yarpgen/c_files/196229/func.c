/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196229
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
    var_12 = ((/* implicit */int) var_9);
    var_13 = ((/* implicit */int) var_5);
    var_14 = var_9;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                var_15 |= ((/* implicit */int) (short)-29881);
                var_16 = ((/* implicit */signed char) 3455028496U);
                var_17 = ((/* implicit */int) (signed char)(-127 - 1));
                arr_6 [i_0] [19U] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) || (((/* implicit */_Bool) max((((/* implicit */int) (signed char)111)), (arr_4 [i_0] [i_1 - 2]))))));
                var_18 = ((/* implicit */unsigned int) ((_Bool) (short)29880));
            }
        } 
    } 
    var_19 = var_9;
}
