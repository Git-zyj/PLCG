/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_13 *= ((((((!22528) * (!var_6)))) ? (max(var_12, var_9)) : ((0 ? (arr_0 [i_0]) : (arr_2 [i_0 - 1] [i_0])))));
        var_14 = (((min(-6736, (!-87)))) < (~4281460149));
        var_15 = ((9223372036854775807 >= (((((32757 ? 57 : -85)) >> (-67 + 86))))));
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_16 = 255;
        var_17 = ((-((((min(-51, -51))) ? (arr_6 [9]) : var_5))));
    }
    var_18 = (max(var_12, (((((-113 ? var_12 : -22529))) & var_8))));
    #pragma endscop
}
