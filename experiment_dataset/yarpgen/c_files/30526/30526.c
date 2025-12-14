/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_13 = ((~(((arr_0 [i_0] [i_0]) & (arr_0 [i_0] [i_0])))));
        var_14 = (arr_2 [i_0] [i_0]);
        var_15 = (var_10 ? -32750 : (arr_2 [i_0] [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (arr_4 [i_1]);
        arr_6 [i_1] = -23288;
        var_16 = (((arr_3 [i_1]) ? var_2 : (arr_4 [i_1])));
        arr_7 [i_1] [i_1] = ((var_8 ? ((((!(arr_1 [i_1]))))) : (7 + 2527319697865992084)));
    }
    var_17 = (max(var_17, ((min(var_10, var_11)))));
    #pragma endscop
}
