/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_6, -81));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = var_13;
        var_16 = ((min(((0 & (-127 - 1))), var_3)));
        arr_3 [i_0] = ((-((111 - (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_17 = (-127 - 1);
        arr_6 [i_1] |= ((-(arr_5 [i_1])));
        var_18 = -86;
        var_19 = (min(var_19, (((-(arr_4 [i_1]))))));
        arr_7 [i_1] = ((!(arr_5 [i_1])));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_20 -= 65533;
        arr_10 [i_2] = (!-2583491382405782423);
    }
    #pragma endscop
}
