/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~4294967292);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = min(0, (min((arr_1 [i_0]), (arr_1 [i_0]))));
        var_20 = (min((min(7, var_5)), 1106235599839578054));
        arr_2 [i_0] = -var_7;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_21 = (max(var_21, (arr_4 [i_1 - 1])));
        var_22 = (arr_5 [i_1 - 1] [i_1 - 1]);
    }
    var_23 = var_6;
    var_24 = (max(1106235599839578054, (var_2 < var_16)));
    var_25 = (((min(7, 2518758970))));
    #pragma endscop
}
