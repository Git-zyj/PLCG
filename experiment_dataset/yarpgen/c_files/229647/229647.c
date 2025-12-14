/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-((var_2 ? var_5 : var_10)))));
    var_13 = ((((((var_10 ? var_7 : var_1)) | var_0)) < var_8));
    var_14 = (min(var_14, (!var_2)));
    var_15 = (min(var_15, var_10));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 ^= (min((arr_2 [i_0]), ((((arr_1 [i_0] [i_0]) ? -113 : 1)))));
        var_17 = ((((max((arr_0 [i_0]), 255))) ? (1 + -1) : ((((((arr_0 [i_0]) + 1))) ? (arr_2 [i_0]) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_18 ^= (min(((min((arr_4 [i_1 + 1] [i_1 + 1]), (arr_4 [i_1] [i_1 + 1])))), (arr_0 [i_1 + 1])));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_19 = ((-(arr_7 [i_1 + 1])));
            var_20 = (((arr_0 [i_1 + 1]) ? (arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1]) : ((-(arr_0 [i_1])))));
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_21 = (min(var_21, (((((~(min((arr_0 [i_3]), -1787055845)))) >> ((((((((arr_9 [i_3] [i_3]) ? (arr_1 [i_3] [i_3]) : (arr_0 [i_3])))) ? (((arr_9 [i_3] [9]) ? (arr_2 [i_3]) : (arr_11 [i_3] [i_3]))) : (arr_12 [i_3] [i_3]))) + 17252)))))));
        arr_13 [i_3] [i_3] = (((!49523) ? (max((min((arr_2 [i_3]), (arr_0 [11]))), 58)) : ((min((arr_11 [i_3] [i_3]), (arr_1 [i_3] [i_3]))))));
    }
    #pragma endscop
}
