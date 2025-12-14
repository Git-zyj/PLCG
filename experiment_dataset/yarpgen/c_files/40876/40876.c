/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min(var_0, 2665748413877955177))) ? ((2726681338 << (var_6 - 2805))) : var_0));
    var_11 = var_7;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 -= (arr_2 [i_0] [1]);
        arr_3 [i_0] [3] = var_9;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            arr_9 [i_1] [20] [i_1] |= (var_3 - -13657);
            arr_10 [i_2] = 2079803747;
        }
        var_13 = (max(var_13, 6248162652007814096));
    }
    #pragma endscop
}
