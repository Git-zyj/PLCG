/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_20 = ((-((var_10 ? var_12 : var_2))));
        arr_3 [i_0] = ((61440 ? var_16 : ((var_1 ? var_2 : var_7))));
        var_21 *= -16;
        arr_4 [i_0] = ((((min(var_16, var_1))) ? var_17 : var_12));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_22 = (min(var_22, (((110 ? (((-127 ? 4294967286 : -127))) : 7764127508905265284)))));
        arr_8 [i_1] = (((((~1) ? -119 : var_0))) ? var_17 : (((var_6 ? 28 : ((var_3 ? var_13 : var_12))))));
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_23 = ((((min(var_2, 0))) ? (((var_2 ? var_14 : var_2))) : ((-112 ? var_5 : var_7))));
        var_24 = (max(((var_16 ? var_7 : var_12)), ((1 ? var_12 : var_12))));
    }
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        var_25 = (min(((-7 ? var_2 : var_14)), (!var_3)));
        var_26 += (((((57 ? 3660147179 : 8224937124907670676))) ? -var_14 : (!var_2)));
    }
    var_27 ^= (var_4 ? ((((((var_6 ? var_17 : var_7))) ? (!var_12) : ((var_7 ? var_11 : var_18))))) : ((-127 ? var_8 : (min(634820116, 4)))));
    var_28 = ((var_8 ? 12231913153039775766 : var_3));
    #pragma endscop
}
