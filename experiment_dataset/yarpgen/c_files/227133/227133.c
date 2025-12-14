/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 55;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_21 -= (((var_6 ? (~-75) : (arr_0 [i_0]))));
                arr_4 [i_1] = (max(((((-55 - -54) < (arr_3 [i_0])))), 48));
            }
        }
    }
    var_22 = ((var_2 != (min(var_18, var_1))));
    var_23 = (!var_15);
    #pragma endscop
}
