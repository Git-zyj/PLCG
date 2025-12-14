/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = (~(arr_3 [i_0]));
        arr_4 [i_0] = ((!(((-(arr_1 [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_12 = ((!(((-(arr_1 [i_1 - 1]))))));
        var_13 &= (arr_7 [0]);
    }
    var_14 += ((max(-803301502, (var_9 >= 1997159643144681557))));
    var_15 = var_1;
    #pragma endscop
}
