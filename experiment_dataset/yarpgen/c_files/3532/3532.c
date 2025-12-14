/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_13));
    var_21 = ((((((((var_11 ? 110 : var_8))) ? 229 : var_19))) ? (((~var_9) & (~var_7))) : 229));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_22 *= 78;
        var_23 = (((((var_5 ? 220276549 : (arr_2 [i_0])))) && ((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
        var_24 *= (max((arr_3 [i_0]), var_17));
        arr_4 [10] |= (((!255) ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (!62)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        var_25 = (min(var_25, ((((arr_5 [i_1 + 1]) != var_12)))));
        var_26 = ((!(arr_5 [i_1 + 1])));
        arr_7 [i_1] = (230 ? 117 : (arr_6 [i_1 - 1]));
    }
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        var_27 = (max(var_27, -8870901397506058904));
        arr_12 [4] [i_2] = var_4;
        var_28 = (min(var_28, var_15));
        var_29 = (229 * -54);
    }
    var_30 |= ((var_6 ? var_13 : (((min((!var_5), (16 > -8386541071303039905)))))));
    #pragma endscop
}
