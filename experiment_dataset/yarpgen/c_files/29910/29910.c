/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = var_13;
        var_15 ^= ((~(arr_0 [20])));
        var_16 = (max(var_16, (((32762 ? 249 : (-2147483647 - 1))))));
        arr_4 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
        arr_5 [i_0] = (arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] = (~var_7);
        var_17 = (max(var_17, (((~((max(var_9, var_6))))))));
    }
    var_18 ^= ((((max((-2147483647 - 1), 11198606246134671001))) ? var_10 : var_14));
    #pragma endscop
}
