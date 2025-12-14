/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((345 & (((((1977934581 ? 2317032715 : 13371))) ? (65535 / var_12) : ((((-2089089967 + 2147483647) >> (-2057560786 + 2057560808))))))));
    var_17 = var_11;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_18 = (max(var_18, var_12));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 *= (!var_11);
            arr_5 [i_0] = (2057560786 && -2057560786);
        }
        arr_6 [i_0] [i_0] = var_14;
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        arr_11 [i_2] = (max((((~((var_1 >> (-85 + 114)))))), ((~(min(var_0, var_15))))));
        var_20 &= (((((~(var_12 && 1)))) && (((2089089967 ? 17 : var_4)))));
        var_21 -= (((3321200815 ? var_6 : var_11)));
    }
    var_22 = (~((~(var_14 ^ 161))));
    var_23 *= ((((var_8 > (7621 * var_6))) && ((((~28806) + 1709610118)))));
    #pragma endscop
}
