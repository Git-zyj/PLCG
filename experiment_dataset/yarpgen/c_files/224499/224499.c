/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min(-55, 448997029644180653)) <= (((((min(var_8, 36711))) ? (17422198273818935701 > 20635) : var_12)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = ((~((var_12 * ((min(var_4, 13795)))))));
        arr_2 [i_0] [i_0] = ((1 ? 125 : ((-125 ? (((-5128853096576003055 ? 7713 : (arr_0 [i_0] [i_0])))) : 1438022044))));
        var_16 &= ((35430 ? (((-((var_4 ? var_7 : var_6))))) : var_10));
        arr_3 [7] [7] = 57796;
    }
    var_17 &= (min(((((var_10 ? var_6 : var_6)))), var_10));
    var_18 = (max(var_18, var_13));
    var_19 = (min((((((max(var_2, var_12)))) * var_11)), var_1));
    #pragma endscop
}
