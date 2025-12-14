/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (((20 ? -6765322767085375556 : (min(1, -4238926494287918604)))));
        var_16 = 4238926494287918604;
        var_17 = ((~(min(var_10, (((66 ? 4238926494287918603 : 0)))))));
        var_18 = ((var_0 || (((arr_1 [i_0 - 2]) || var_1))));
        var_19 = -1;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (~-4238926494287918604);
        var_20 = (min(((((((arr_4 [i_1]) || var_15)) ? (!var_14) : -1437971520))), (((((var_6 ? var_12 : var_9))) | ((var_1 ? -4238926494287918626 : (arr_4 [i_1])))))));
    }
    var_21 = (!var_0);
    #pragma endscop
}
