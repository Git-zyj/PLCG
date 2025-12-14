/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_5, ((((((min(var_15, var_14)))) > (((var_13 + 9223372036854775807) << (var_2 - 1425356811155991846))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((((max(var_9, ((min(var_14, var_15)))))) ? ((var_6 ? (((var_0 ? var_17 : var_10))) : ((var_9 ? var_18 : var_6)))) : (((var_18 ? var_5 : (max(var_3, var_1)))))));
        arr_3 [i_0] = ((((((((var_14 ? var_1 : var_6))) ? (min(var_7, var_18)) : (((min(var_16, var_0))))))) ? ((min(((var_9 ? var_17 : var_0)), ((var_13 ? var_12 : var_7))))) : (max(var_0, ((var_1 ? var_1 : var_7))))));

        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [6] = (var_10 ? (max(((var_0 ? var_15 : var_12)), ((min(var_3, var_15))))) : (((((max((-2147483647 - 1), 2147483647))) > ((var_3 ? var_3 : var_18))))));
            var_20 = ((max((((var_4 ? var_3 : var_3))), (max(1108416221, 6863631078127384981)))) << (((((var_4 > (min(var_5, var_8))))) - 1)));
        }
        var_21 = ((((max(var_18, var_14))) || ((min(392197471745873013, 3186551080)))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_22 -= ((((2147483647 ? 1494086246 : 3707035929)) >> ((((((var_9 ? var_2 : var_11)) & (min(var_17, var_1)))) - 37157393209018601))));
        var_23 = (min((max(var_11, var_4)), (((var_17 ? var_10 : var_5)))));
        var_24 = (((min(var_8, var_2)) > ((min(2147483647, 61913)))));
        var_25 = ((3404 ? -1494086251 : 0));
        arr_10 [i_2] = ((((max(var_11, -1964019374))) ? ((min(((var_4 ? var_10 : var_2)), (((var_14 ? var_10 : var_0)))))) : ((((max(var_9, var_18))) ? (((var_18 << (var_5 - 32413)))) : ((var_1 ? var_6 : var_2))))));
    }
    var_26 = (min(var_6, var_3));
    #pragma endscop
}
