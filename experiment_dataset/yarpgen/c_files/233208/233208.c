/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 0;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = (~-24);
        var_22 = (~-1);
        arr_2 [i_0] = ((((max((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : 3449816445250178984)), 3449816445250178984))) ? ((-(((arr_0 [i_0] [i_0]) - 1)))) : 250));
        var_23 = (max(var_23, var_5));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_24 = 0;
        var_25 = (min((min((min(3449816445250178984, 12837744143245816189)), (~var_14))), ((((-2147483647 - 1) & (arr_5 [i_1]))))));
    }
    var_26 = ((((((0 ? 3449816445250178984 : var_9))) ? (!1) : (min(1, 18446744073709551602)))));
    #pragma endscop
}
