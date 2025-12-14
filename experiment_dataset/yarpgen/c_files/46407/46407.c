/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_11, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [15] [i_0] [0] = (((((((max(var_1, var_2))) || var_9))) - ((((min(var_17, var_17))) ? var_14 : (var_14 - var_14)))));
                var_20 = ((((var_5 ? var_1 : var_2)) - (((min(var_2, var_13))))));
                arr_5 [6] [i_0] [i_0] = var_15;
            }
        }
    }
    var_21 = (min(var_14, (((var_4 - var_0) - var_1))));
    #pragma endscop
}
