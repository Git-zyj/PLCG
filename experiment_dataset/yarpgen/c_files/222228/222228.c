/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_2 ? (!var_4) : var_4));
    var_11 = var_1;
    var_12 = (min(var_12, var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 -= (arr_0 [i_0] [i_0]);
        var_14 *= (var_6 / 17255650217391427788);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_15 = (((~1) ? var_7 : ((((arr_2 [i_1]) != (min((arr_0 [i_1] [i_1]), (arr_3 [i_1]))))))));
        var_16 = ((var_1 ? (7897111887095870971 ^ 65531) : (((((arr_0 [i_1] [i_1]) == (arr_2 [7])))))));
        var_17 = (10542 & 1);
    }
    var_18 = var_0;
    #pragma endscop
}
