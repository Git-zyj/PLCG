/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = (max(var_13, (((-var_6 ? (max(((((arr_0 [i_0] [i_0]) < (arr_1 [i_0])))), ((var_12 << (arr_1 [i_0]))))) : (((((arr_0 [i_0] [i_0]) >= var_6)) ? 35 : var_0)))))));
        var_14 = var_9;
        var_15 = 2886295850;
        arr_3 [i_0] [i_0] = (((arr_2 [i_0]) && (!var_3)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] = var_3;
        arr_7 [i_1] = var_7;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_16 = (max(var_16, ((((arr_9 [i_2]) != (arr_9 [i_2]))))));
        arr_11 [i_2] = ((~((((arr_10 [i_2]) < var_3)))));
        arr_12 [i_2] = ((((((2886295850 ? 207 : 0))) ? (arr_9 [i_2]) : (arr_9 [i_2]))));
        var_17 *= (arr_9 [i_2]);
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_15 [i_3] = (arr_8 [i_3]);
        arr_16 [i_3] = ((12 ? 2886295870 : -5308));
        arr_17 [i_3] &= ((~(arr_9 [i_3])));
        var_18 = (max(var_18, (((((((~((var_3 ? 22570 : var_8)))) + 2147483647)) << (70 - 70))))));
        var_19 = max((arr_8 [i_3]), (arr_10 [i_3]));
    }
    var_20 = (9717 & 1408671445);
    var_21 = (7 || 1408671466);
    #pragma endscop
}
