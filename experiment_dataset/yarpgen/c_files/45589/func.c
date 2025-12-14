/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45589
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
    var_18 &= min((((((/* implicit */_Bool) var_4)) ? (var_0) : (var_0))), (var_12));
    var_19 ^= var_5;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (min((min((((3304913858U) & (857962664U))), (1755175391U))), (max((min((3259136423U), (var_8))), (20U)))))));
                var_21 += arr_1 [i_0] [i_1];
            }
        } 
    } 
    var_22 &= min((min((max((var_13), (732825804U))), (((var_12) + (var_17))))), (((var_10) << (((var_15) - (3596863975U))))));
    var_23 = ((/* implicit */unsigned int) min((var_23), (var_8)));
}
