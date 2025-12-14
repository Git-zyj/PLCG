/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    var_21 = (min(var_14, ((((min(var_13, var_13))) ? var_14 : (var_15 & var_8)))));
    var_22 = ((((var_19 ? ((var_19 << (var_9 + 173737936581069423))) : var_18)) >= (var_16 == 13675)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] &= (((((min(4294967295, var_6))) ? ((-(arr_0 [i_0] [1]))) : var_1)));

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_23 = (min(((-10 ? ((var_12 ? var_10 : (arr_3 [i_0] [i_0] [i_1 - 1]))) : ((max(9, (arr_4 [3] [i_0])))))), (arr_0 [i_1 - 2] [i_1 - 2])));
            arr_7 [1] = max((arr_5 [i_0]), (((((min(1, (arr_0 [i_0] [i_1])))) ? (((arr_1 [i_0] [1]) ? 4294967287 : -4670606902416381682)) : var_7))));
        }
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_24 = (arr_8 [i_2]);
        var_25 += (((((((arr_5 [6]) ? var_9 : 4294967295))) ? ((18446744073709551615 ? 1 : 1)) : (((arr_1 [i_2] [i_2]) ? (arr_4 [10] [5]) : var_14)))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_26 = (max(var_26, 1));
        var_27 = (((1 ? 129 : var_16)));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_28 = ((((min(1, 18446744073709551615))) && (((arr_6 [i_4]) || (((-13907 ? 1 : (arr_6 [i_4]))))))));
        var_29 *= (min(((((0 ? var_6 : 1)))), ((1040187392 ? (((arr_6 [i_4]) ? var_2 : (arr_3 [i_4] [i_4] [i_4]))) : -var_6))));
        var_30 = (~(((arr_6 [i_4]) ? (arr_6 [i_4]) : 1069799824)));
    }
    var_31 = var_4;
    #pragma endscop
}
