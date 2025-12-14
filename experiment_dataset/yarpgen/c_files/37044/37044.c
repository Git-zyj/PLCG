/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 *= (((((min(var_14, -72))) ? ((var_13 ? 0 : 1447348055213294478)) : 69)) / ((((arr_1 [i_0]) & var_1))));
        var_17 &= var_9;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = (((min((20981 - var_11), -3)) & ((var_1 - (var_6 != -3)))));
        var_18 = ((max((255 == 6555), (arr_1 [i_1]))));
        var_19 = arr_1 [i_1];
    }
    var_20 = (min(var_20, ((((max(var_15, var_12))) ? ((((~0) && (((var_14 ? 6 : var_7)))))) : ((min((var_6 <= 26), var_5)))))));
    var_21 &= ((~(((((var_7 ? var_10 : var_7)) < ((var_12 ? var_7 : 1845330127)))))));
    var_22 = (min(4, 2));
    #pragma endscop
}
