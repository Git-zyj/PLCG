/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (7342610488103222389 & -18023);
        arr_5 [i_0] = (((arr_1 [i_0]) ? 18446744073709551615 : 4983067913716185584));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_11 = 10282997507133598360;
        var_12 = ((var_6 == (arr_7 [i_1])));
        arr_8 [i_1] = (((((77 ? var_0 : var_7))) && var_0));
        arr_9 [i_1] = (arr_6 [17] [i_1]);
        arr_10 [i_1] = (!var_1);
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_13 = (arr_7 [i_2]);
        var_14 = var_3;
        arr_15 [i_2] = (((-18024 + 2147483647) >> (((arr_14 [i_2] [i_2]) - 166))));
    }
    var_15 = ((max(((var_9 ? -21874 : -31546)), (18024 / -1))));
    #pragma endscop
}
