/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(11, 245));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (((((((((arr_2 [i_0] [i_1]) == var_10))) >> (((max(244, -482374687)) - 229))))) ? var_5 : ((((min((arr_1 [i_0] [15]), 16))) & var_14))));
                var_18 -= 244;
                var_19 = ((-(min(-22638, 36028762659225600))));
            }
        }
    }
    var_20 += var_13;
    var_21 = ((((min((((0 ? var_6 : var_5))), (min(var_8, 0))))) ? (min(var_13, (var_1 & var_15))) : (((var_12 ? -var_6 : 2147483647)))));
    var_22 *= (((((2123247645 ? var_2 : -7050284658186609026))) ? (min((-22650 || 1545586006), var_0)) : (((var_5 / var_12) ? var_9 : 22659))));
    #pragma endscop
}
