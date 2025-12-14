/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((~((4922569936208330704 ? var_8 : var_11)))));
    var_17 = 10;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = ((-((-(arr_1 [i_0] [i_0])))));
        var_19 = var_14;
        var_20 = ((-(max(var_3, (arr_0 [i_0])))));
        var_21 = ((((max(-4922569936208330715, 1))) & (((((-23444 ? 1 : -69))) ? (((615311357 ? var_8 : var_12))) : 4922569936208330699))));
        arr_2 [i_0] = ((((((arr_0 [i_0]) ? ((var_7 ? 536870912 : var_11)) : 51))) ? 104 : (max(18898, 17))));
    }
    #pragma endscop
}
