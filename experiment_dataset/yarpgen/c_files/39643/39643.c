/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    var_20 = (((((var_15 ? 4143733573 : (min(var_11, var_6))))) ? 20701 : (((((var_11 ? var_8 : var_16))) ? 198733106037874618 : var_13))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((min((((arr_1 [7] [i_0]) ? (arr_1 [i_0] [i_0]) : 141)), (arr_1 [2] [i_0 - 1]))), (arr_1 [i_0] [i_0 - 2])));
        var_21 *= (min(-1672839092, (max(((((arr_0 [i_0]) >= var_12))), -198733106037874618))));
    }
    var_22 -= var_18;
    var_23 = (~1);
    #pragma endscop
}
