/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    var_17 = ((max(var_15, -var_10)));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0 - 1] = arr_0 [i_0];
        arr_3 [i_0] = (((((max(2147483647, (arr_0 [i_0])))) ? var_9 : (~42676))) - (((arr_0 [i_0 - 1]) ? -1236262662 : (arr_0 [i_0 + 1]))));
    }

    /* vectorizable */
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] = 438848956;
        var_18 = (((arr_1 [i_1 + 3] [i_1 - 3]) - (arr_1 [i_1 + 2] [i_1 - 3])));
        var_19 = (((42676 != var_6) <= 12));
        var_20 = (-2147483647 - 1);
        arr_8 [i_1 - 3] = ((+((42675 ? (arr_5 [i_1] [i_1 + 4]) : var_2))));
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_21 = (-2147483647 - 1);
        var_22 = -var_12;
        arr_11 [i_2] [i_2] = (((arr_9 [i_2 + 3]) ? (arr_9 [i_2 - 1]) : (arr_6 [i_2 + 1] [i_2 + 3])));
    }
    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        var_23 = (-1213047623 ? -2111480442 : 7798);
        var_24 = (var_7 / var_15);
        var_25 = (min(var_25, ((((arr_0 [i_3 + 1]) && var_14)))));
    }
    #pragma endscop
}
