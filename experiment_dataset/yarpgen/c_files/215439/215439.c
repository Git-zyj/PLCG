/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = (arr_1 [i_0]);
        var_19 *= ((~((-(arr_2 [4] [4])))));
        var_20 *= ((~(arr_2 [i_0] [i_0])));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_21 = (~var_8);
        var_22 *= ((-(arr_3 [i_1] [i_1])));
    }
    var_23 = var_17;
    var_24 |= (((min(var_15, (var_8 / -1537206478414820501))) - (((var_10 ? var_13 : var_4)))));
    var_25 = var_17;
    #pragma endscop
}
