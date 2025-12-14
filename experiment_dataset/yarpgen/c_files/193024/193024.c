/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((82 ? var_13 : (((((6868 ? 50 : 34359738367))) ? var_11 : (var_16 == var_14)))));
    var_19 = (min((max((max(1831694821, -70)), var_0)), (((!(!var_3))))));
    var_20 = var_6;
    var_21 &= var_12;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = (((((0 | ((min((arr_0 [i_0]), 50)))))) ? 2147483647 : ((134217727 ? 14 : var_16))));
        arr_2 [20] [20] |= (((arr_1 [i_0]) >> ((((min(var_0, (arr_1 [i_0])))) - 51))));
        var_23 = ((((arr_1 [i_0]) ? 1831694821 : var_9)));
    }
    #pragma endscop
}
