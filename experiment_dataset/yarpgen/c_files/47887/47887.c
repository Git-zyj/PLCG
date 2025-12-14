/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_0));
    var_15 -= ((var_11 & ((min(1, var_4)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((~(((((min(243, 558446353793941504))) && (var_5 % var_4))))));
        var_16 = ((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_6)) / (((max((arr_1 [i_0]), -288531062)) - (arr_3 [i_0]))));
    }
    var_17 = (max(var_17, var_11));
    var_18 = (min(var_18, ((min(((min(var_12, ((288531053 ? var_7 : var_12))))), var_8)))));
    #pragma endscop
}
