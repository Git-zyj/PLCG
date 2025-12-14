/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((var_5 ? (min(var_2, var_16)) : var_17))), (min((((var_14 ? var_13 : var_17))), (min(998218084, 4365649349706496957))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((2116258633 ? var_4 : var_17))) ? (arr_1 [i_0]) : (arr_0 [i_0])));
        var_21 = (arr_1 [i_0]);
        var_22 = (4365649349706496959 / 1518251220);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_23 -= (((((-(arr_3 [1])))) & (((arr_5 [i_1]) / (arr_4 [i_1])))));
        arr_6 [i_1] = (min((arr_4 [i_1]), var_11));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_24 += 2178708656;
        arr_10 [5] = ((((((arr_9 [i_2] [i_2]) ? (arr_9 [i_2] [i_2]) : var_2))) ? var_3 : (!var_8)));
        arr_11 [i_2] = var_18;
        var_25 = var_0;
        arr_12 [i_2] = var_11;
    }
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        arr_17 [i_3 - 1] = (arr_14 [8] [i_3]);
        var_26 = (max(var_26, (((-((var_11 ? ((max(var_16, var_10))) : (arr_13 [i_3]))))))));
    }
    var_27 = ((-(min((((-9144255049475140638 ? var_16 : var_19))), var_3))));
    var_28 *= ((568031734 > (-2147483647 - 1)));
    var_29 = var_15;
    #pragma endscop
}
