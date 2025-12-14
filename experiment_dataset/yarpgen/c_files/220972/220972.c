/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_2;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_8 [i_0] = ((12215300734343080581 ? 0 : (((((15303163062031274564 ? var_7 : var_3))) ? (!var_10) : 3143581011678277032))));
                var_16 = var_4;
            }
        }
    }
    var_17 = var_11;
    var_18 = var_7;
    var_19 = (min(var_19, var_12));
    #pragma endscop
}
