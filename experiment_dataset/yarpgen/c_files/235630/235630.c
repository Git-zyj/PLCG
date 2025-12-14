/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((!(4280 + var_9)))), 0));
    var_14 = (max(var_14, (((((((~var_10) < ((var_2 ? var_10 : var_9))))) * (max((((var_8 + 2147483647) >> (-1058649663 + 1058649675))), ((min(var_11, 14110))))))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_15 |= (((((((14110 && (arr_1 [i_0])))) * (((arr_1 [i_0]) * 51426))))) ? (arr_1 [i_0]) : (min((((arr_0 [12]) ? (arr_0 [1]) : var_12)), (~1))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_16 = ((+(((arr_5 [7] [i_1]) + 0))));
        var_17 = ((arr_0 [4]) ? 3984484696 : (arr_0 [6]));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 14;i_2 += 1)
    {
        var_18 = (min(var_18, var_6));
        var_19 = ((~(14110 - 1201533563)));
    }
    #pragma endscop
}
