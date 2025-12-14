/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (max((-127 - 1), 1));
    var_20 = ((var_3 ? ((min(var_7, var_2))) : ((var_15 ? (var_18 || var_4) : var_2))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_21 |= (((arr_1 [12] [i_0 - 2]) ? (arr_1 [i_0 - 1] [i_0 - 1]) : (arr_1 [i_0 - 2] [i_0 - 2])));
        var_22 = (((arr_1 [i_0 - 1] [i_0 + 1]) == (arr_1 [i_0] [i_0 - 2])));
        arr_3 [i_0] = (((arr_0 [i_0 - 1]) * (arr_2 [i_0])));
    }
    #pragma endscop
}
