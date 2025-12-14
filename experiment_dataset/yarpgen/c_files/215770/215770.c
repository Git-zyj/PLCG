/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_4;
    var_18 = (min(((min(var_14, var_11))), (122 / -var_10)));
    var_19 = -var_11;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = var_7;
        var_20 = 70;
        arr_5 [i_0] = 1152921504606846975;
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_21 = (min(var_6, ((((max(var_0, 214))) ? (min(var_11, var_10)) : ((1152921504606846978 ? (arr_8 [i_1]) : var_8))))));
            arr_11 [i_1 + 1] = ((1 ? ((min((arr_7 [i_2]), var_15))) : (((1152921504606846978 ? var_4 : var_14)))));
            arr_12 [i_1 + 3] [i_2] [i_2] = (max((min((!125), var_1)), ((!(((var_11 + (arr_10 [i_1 - 1] [i_2] [i_1]))))))));
            arr_13 [i_1] [i_1] [i_1 + 2] = (((arr_8 [i_1 - 1]) ? var_15 : 1152921504606846978));
        }
        arr_14 [i_1 - 2] = arr_10 [i_1] [i_1 + 2] [i_1];
        arr_15 [i_1] [i_1 + 3] = ((!((min((arr_6 [i_1] [i_1 - 2]), var_2)))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_19 [i_3] = (arr_16 [i_3] [i_3]);
        arr_20 [2] [i_3] &= (((((166 << (1313169311 - 1313169309)))) ? ((((!-1152921504606846976) > (min((arr_10 [i_3] [i_3] [i_3]), var_7))))) : (arr_18 [i_3])));
    }
    for (int i_4 = 3; i_4 < 11;i_4 += 1)
    {
        arr_23 [i_4] = (max((arr_8 [i_4 - 3]), (((((1152921504606846975 ? var_2 : -1662591299))) ? (-241510891355279967 || -1122591104) : (arr_16 [i_4] [i_4])))));
        var_22 = -5292921468754920787;
        var_23 = (min(var_23, (arr_9 [i_4] [i_4 - 2])));
    }
    var_24 = (~var_11);
    #pragma endscop
}
