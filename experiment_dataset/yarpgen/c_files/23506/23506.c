/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_15 = (((((arr_0 [i_0]) || 28841)) ? ((((var_1 || (arr_0 [i_0]))))) : (((arr_1 [i_0 - 2]) ? (arr_1 [i_0 + 2]) : (arr_0 [i_0])))));
        var_16 = (min(((min(var_1, var_14))), (((arr_1 [i_0 + 2]) * var_4))));
        arr_2 [i_0] = (max(13237056967961358978, ((((45 < 485798031) << (82 - 78))))));
    }

    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_17 += (min(28841, -28833));
        var_18 = (((!var_1) && ((((max(var_9, -113))) && (((var_13 ? (arr_4 [i_1]) : 4294967295)))))));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_19 = ((-1 ? (((arr_3 [i_2 - 1] [i_2 - 1]) / var_2)) : ((((arr_3 [i_2 - 1] [i_2 - 1]) - (arr_3 [i_2 - 1] [i_2 - 1]))))));
        var_20 = ((var_4 >= (min((((1 ? 1 : var_4))), (var_2 / var_9)))));
    }

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_21 = ((((((arr_1 [i_3]) % (arr_7 [i_3])))) ? (max((arr_1 [i_3]), (arr_1 [i_3]))) : ((((arr_7 [i_3]) % 3)))));
        var_22 = ((((max(var_14, ((0 ? var_2 : var_14))))) ? (((arr_4 [i_3]) / var_12)) : (arr_8 [i_3])));
        var_23 = (max((((((1 ? var_10 : var_10))) ? 4611686018427387903 : var_1)), (arr_1 [i_3])));
    }
    #pragma endscop
}
