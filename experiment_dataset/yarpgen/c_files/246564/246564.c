/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_2, var_8));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) ? 4799 : 112));
        var_11 = (arr_1 [i_0]);
        var_12 = (min(var_12, (~4503049871556608)));
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        var_13 = (max((((arr_4 [i_1 - 1]) ? (arr_4 [i_1 - 1]) : 33928)), var_4));
        var_14 = (max((((var_4 ? var_4 : var_8))), (((!(!117))))));
        var_15 |= (((arr_4 [i_1 + 1]) ? var_0 : (((arr_4 [i_1 + 4]) ? (arr_4 [i_1 - 2]) : (arr_4 [i_1 + 4])))));
    }
    var_16 = (((max((max(var_0, var_6)), var_4)) - (((((92 && var_3) != var_8))))));
    #pragma endscop
}
