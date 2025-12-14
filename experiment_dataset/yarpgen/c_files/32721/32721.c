/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(1 * var_13)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (max(var_18, (((((max(13783, var_6))) ? (max(var_1, var_12)) : (((max(1, 1)))))))));
        var_19 = var_6;
        arr_3 [i_0] &= (max(((-30320 ? 1 : (max(1, var_10)))), (((var_1 ? 51730 : var_5)))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            {
                arr_9 [i_1] [i_1] [i_2] = ((-(11 / 1)));
                arr_10 [i_2] = var_6;
            }
        }
    }
    var_20 = var_3;
    #pragma endscop
}
