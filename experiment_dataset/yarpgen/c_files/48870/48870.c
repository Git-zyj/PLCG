/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_14 = (((((((min(var_13, var_0)))) + (((arr_1 [i_0]) ? var_0 : (arr_1 [i_0])))))) ? (arr_1 [i_0]) : (~var_11));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_15 = ((!(!89)));
            var_16 += ((~((((arr_2 [7] [14] [i_1]) && var_5)))));
            var_17 = var_7;
        }
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_18 = arr_7 [i_0] [i_0] [8];
            var_19 = var_2;
            var_20 = (min(var_2, (arr_2 [i_0] [9] [i_2])));
            var_21 = (var_10 ? -8 : (arr_5 [i_0] [i_2]));
            var_22 += 65535;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_23 += ((!(arr_9 [i_0 - 1])));
            var_24 = var_6;
            var_25 = var_13;
        }
    }
    var_26 = var_3;
    #pragma endscop
}
