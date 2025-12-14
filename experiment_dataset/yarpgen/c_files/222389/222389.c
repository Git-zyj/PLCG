/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = ((arr_0 [i_0 - 1]) * ((((min(var_13, (arr_4 [i_0] [i_0] [i_0])))))));
                var_20 = ((!(arr_2 [i_0 - 2])));
            }
        }
    }
    var_21 = (max(var_21, (!var_15)));
    var_22 = ((2147483647 ? (((!-1682134940) ? (max(var_13, -1682134940)) : (((-1682134954 ? var_14 : var_10))))) : ((((var_5 ? var_2 : 1))))));
    var_23 -= 1682134951;
    var_24 = (((((!(!var_1)))) != 32748));
    #pragma endscop
}
