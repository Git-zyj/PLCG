/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_2 * (var_6 / var_4)))) ? var_8 : var_15));
    var_19 &= ((var_12 ? ((((var_13 ? 0 : 0)) & var_5)) : var_17));
    var_20 += var_11;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = ((((((arr_0 [i_0]) >> (arr_0 [i_0])))) ? var_16 : var_1));
        arr_2 [i_0] = ((var_4 ? (((arr_1 [i_0]) ? 2632971200 : 14)) : ((((-127 - 1) & -3)))));
        var_22 = -6526400475238532593;
        var_23 = ((7007874303729045736 ? 0 : 134217727));
        var_24 -= -var_13;
    }
    #pragma endscop
}
