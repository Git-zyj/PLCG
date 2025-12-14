/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28806
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
    var_14 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_0] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3625522103U))));
                var_15 = min((min((((/* implicit */unsigned short) var_10)), (var_11))), (((/* implicit */unsigned short) ((signed char) var_10))));
            }
        } 
    } 
    var_16 = ((short) (!(((/* implicit */_Bool) (-(2681531352U))))));
}
