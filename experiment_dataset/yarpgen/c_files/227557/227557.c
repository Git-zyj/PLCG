/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max((((((var_12 ? var_8 : var_14))) ? (~var_2) : (min(163, 1943584081)))), var_3);
    var_16 = var_9;
    var_17 -= var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = (max(((~(arr_6 [i_0] [i_1]))), var_12));
                    var_18 = (min(((((((arr_2 [i_0]) | (arr_5 [i_2])))) ? (arr_8 [i_2] [i_1] [i_0] [i_0]) : var_1)), var_12));
                }
            }
        }
    }
    var_19 = var_3;
    #pragma endscop
}
