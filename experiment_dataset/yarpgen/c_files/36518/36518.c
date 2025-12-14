/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (~(max((min(var_17, var_17)), var_14)));
        arr_4 [i_0] = (arr_0 [i_0] [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_7 [i_0] = ((0 ? (-2147483647 - 1) : 33554432));
            arr_8 [i_0] = ((var_8 ? (arr_6 [i_0]) : var_15));
            arr_9 [i_0] [i_1] = (((-(arr_0 [i_1] [i_0]))));
        }
        arr_10 [4] = var_6;
    }
    var_19 = var_13;
    #pragma endscop
}
