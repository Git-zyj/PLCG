/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38418
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                var_19 = var_12;
                var_20 = ((unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_0] [i_1 + 1])) : (((/* implicit */int) var_7))));
                var_21 = ((/* implicit */signed char) 8192U);
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) var_6)) ? (8192U) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))) * (643441244U))));
    var_23 = var_16;
    var_24 = var_8;
}
