/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, -15));
    var_11 = var_2;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_12 = -var_0;
        var_13 = (~-165);
        var_14 = var_9;
        arr_4 [i_0] = var_8;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_15 = var_9;

        /* vectorizable */
        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            arr_12 [i_1] [i_1] = var_6;
            arr_13 [i_1] [i_1] = (!-var_7);
            arr_14 [i_1] [22] [i_1] = var_0;
            arr_15 [i_1] [i_2] [i_2 + 2] = -62;
        }
    }
    var_16 = var_8;
    var_17 = (!-1);
    #pragma endscop
}
