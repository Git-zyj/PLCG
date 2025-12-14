/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 4294967295;
        var_20 = var_15;
        var_21 = min((var_18 <= var_11), ((var_12 ? (arr_1 [i_0]) : var_1)));
        var_22 = 31515;
        var_23 = (min(var_23, (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_24 = ((var_2 ? (((((32 ? 0 : 2547088857628940579))) ? 3964781009 : 330186286)) : -73));
        var_25 = (((((((((arr_4 [i_1]) ? var_15 : 2547088857628940579))) ? var_16 : (((-5500341069423811761 ? var_15 : -40703474)))))) ? (arr_5 [i_1]) : ((min(-1311518914, 1)))));
        var_26 = (min(var_26, var_12));
    }
    var_27 = (min(((2489430763416267868 << (33554431 - 33554430))), ((max(-1519193601, (3964781009 + 26275))))));
    var_28 = ((1 ? (-9223372036854775807 - 1) : 26275));
    #pragma endscop
}
