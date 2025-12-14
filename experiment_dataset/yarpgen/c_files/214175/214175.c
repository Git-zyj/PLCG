/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, -11647));
    var_18 = (min((((var_13 / var_7) ? var_2 : var_6)), (((8388607 + var_8) ? 2111768133 : (var_0 / var_4)))));
    var_19 = (~var_10);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] |= (arr_0 [i_0] [i_0]);
        var_20 = (min(var_20, -1706941760));
        var_21 = (!2509785950);
        arr_3 [i_0] = var_8;
    }
    var_22 = -2111768124;
    #pragma endscop
}
