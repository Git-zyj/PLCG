/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= 4294967277;
    var_16 = var_12;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_17 ^= min(65528, (!46));
        arr_3 [5] [i_0] = var_11;
        var_18 = (max(var_18, -107));
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        arr_6 [i_1] = -var_11;
        arr_7 [9] = var_0;
        var_19 = -372043476;
        var_20 += ((((((4294967277 ? var_1 : -2028698984939144153)) ? -4751594998997425658 : ((1 ? var_12 : (-9223372036854775807 - 1)))))));
        var_21 = (max((min(-60, (min(var_7, 14740)))), ((((var_6 ? 1812089618 : var_4))))));
    }
    var_22 = (((-9223372036854775807 - 1) ? ((((max(var_13, 29219))) ? (max(-9223372036854775798, var_11)) : (((min(var_14, var_12)))))) : (((var_5 ? 36313 : var_9)))));
    #pragma endscop
}
