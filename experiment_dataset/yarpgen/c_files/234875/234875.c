/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((var_18 ? var_5 : var_18));
    var_21 = (((((var_19 ? (~3044735674) : (-1128038778 - var_14)))) ? 0 : (max(var_13, var_19))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_22 = (min(var_22, (((-(((arr_0 [i_0]) ? (arr_0 [i_0]) : var_18)))))));
        var_23 = (min(var_23, -1128038778));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_24 = (min(var_24, (((~(arr_4 [i_1] [13]))))));
            arr_6 [i_0] [i_1] = (((arr_4 [i_1] [i_0]) ? 1 : var_19));
            var_25 = var_11;
        }
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_26 = (max(var_26, var_14));
        var_27 = (max(var_27, (((((max(((min(var_3, -32748))), (min((arr_7 [i_2]), (arr_5 [i_2] [i_2])))))) ? (~var_18) : var_15)))));
        var_28 *= (!(arr_5 [i_2] [i_2]));
    }
    var_29 = var_16;
    #pragma endscop
}
