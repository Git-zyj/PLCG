/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((max(var_1, 0))));
    var_20 = ((var_8 == ((~((-6 ? var_9 : -38001937))))));
    var_21 = 14668374104343791320;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = var_5;
        arr_4 [i_0] = var_0;
        var_22 = (~-2278);
        arr_5 [i_0] [i_0] = (-127 ^ var_14);
        arr_6 [5] = (max(1, 1));
    }
    #pragma endscop
}
