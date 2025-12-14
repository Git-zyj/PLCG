/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((-(var_10 * var_0))));
    var_15 = -var_13;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (((((((var_5 ? var_6 : (arr_0 [i_0])))) ? (var_8 < var_12) : ((((arr_1 [i_0]) || 12)))))) ? var_11 : (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_11)));
        var_16 *= ((!((max((((1 ? 4294967295 : 65522))), (var_1 & var_11))))));
        var_17 ^= ((((~(((arr_1 [18]) ? (arr_1 [4]) : var_2)))) < (arr_1 [16])));
        var_18 = (max(((max(var_2, (arr_0 [i_0])))), -var_8));
    }
    var_19 = 2686014647251496134;
    var_20 = ((((9223372036854775800 ? 2686014647251496129 : 114)) & var_3));
    #pragma endscop
}
