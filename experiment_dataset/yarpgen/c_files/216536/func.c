/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216536
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [1] [i_1 - 1] |= ((/* implicit */long long int) (short)-28292);
                var_18 = ((/* implicit */_Bool) var_12);
            }
        } 
    } 
    var_19 = var_1;
    var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) >= (var_15)));
}
