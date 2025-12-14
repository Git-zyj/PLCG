/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = (min(var_11, ((-(((((var_4 ? var_1 : var_5))) ? 485443607 : (!var_4)))))));
        arr_2 [i_0] [i_0] = ((-(((((-(arr_0 [i_0])))) ? ((var_10 ? 1947654084 : (arr_1 [i_0] [i_0]))) : (arr_0 [2])))));
        var_12 ^= ((-(((!(((var_0 ? var_6 : var_0))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_13 = ((((((arr_3 [i_1] [i_1]) ? 2905 : 1947654082))) ? ((var_8 ? var_5 : var_8)) : ((~(arr_3 [i_1] [i_1])))));
        arr_5 [14] [14] |= ((+(((arr_3 [i_1] [i_1]) ? 2347313213 : (arr_4 [i_1] [6])))));

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_8 [i_1] [i_1] = (((((var_1 ? (arr_7 [i_1] [i_1] [i_2]) : var_10))) ? (!1947654083) : ((2347313217 ? (arr_1 [i_2] [5]) : 16515072))));
            arr_9 [i_1] = (((((arr_0 [i_1]) ? (arr_0 [i_2]) : var_9))) ? (!var_4) : ((var_5 ? (arr_6 [i_2] [i_1]) : (arr_7 [1] [i_2] [1]))));
            var_14 = (max(var_14, ((((((var_10 ? 59421632 : 5))) ? ((1 ? var_1 : var_10)) : ((((arr_7 [i_1] [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : var_2))))))));
        }
        arr_10 [i_1] = ((0 ? ((((!(arr_7 [11] [i_1] [i_1]))))) : (((arr_1 [i_1] [i_1]) ? 63470 : 2347313188))));
        var_15 = (-(~-59421644));
    }
    var_16 = (((((-var_2 ? (((1 ? var_7 : var_4))) : (((-2147483647 - 1) ? 1073741696 : var_2))))) ? (((-(!var_3)))) : (((((var_8 ? -21 : (-2147483647 - 1)))) ? (((var_6 ? var_8 : var_8))) : ((var_8 ? 1947654083 : var_9))))));
    #pragma endscop
}
