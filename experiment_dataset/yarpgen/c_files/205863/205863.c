/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_3 [14] &= ((-(max(((~(arr_0 [i_0 - 1] [i_0 + 2]))), (((var_15 + 2147483647) << (var_5 - 3699709143202215630)))))));
        var_19 += (!var_10);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_20 = var_14;
        var_21 &= (min(((max((arr_1 [i_1]), var_9))), 6785913069419328193));
    }
    var_22 = (min((max(6271087418245435260, 2003954476)), var_15));
    var_23 = ((13722172594365876840 ? ((var_16 ? (min(var_3, var_12)) : var_15)) : -var_9));
    var_24 = (!var_11);
    #pragma endscop
}
