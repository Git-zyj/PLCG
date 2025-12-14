/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = ((~(arr_0 [i_0])));
        arr_5 [i_0] = ((~(arr_0 [i_0])));
        arr_6 [i_0] = var_5;
        var_19 ^= (2073403119749050452 + 4294967295);
        var_20 = ((var_11 / (arr_0 [i_0])));
    }
    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {
        var_21 = (min(-111, 2669554333));
        var_22 = ((var_3 + (((((~(arr_8 [i_1])))) ? (((arr_3 [i_1 + 2]) ? var_10 : var_1)) : ((((arr_7 [i_1] [i_1]) ? (arr_8 [i_1 - 1]) : (arr_9 [i_1]))))))));
        arr_11 [i_1] = (arr_1 [i_1]);
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_23 ^= (~var_11);
        var_24 = ((-((((min((arr_3 [i_2]), (arr_1 [i_2])))) ? (arr_3 [9]) : (((arr_1 [i_2]) / (arr_3 [i_2])))))));
        var_25 |= ((+((max((arr_0 [i_2]), (-6458741793336077678 >= 1506576979))))));
    }
    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        arr_17 [i_3] = (((((~(~var_11)))) && var_10));
        var_26 = min(11, ((2669554333 ? (arr_14 [i_3 + 4]) : 64)));
        var_27 = (max(var_27, var_0));
    }
    var_28 = (max(((((var_6 ? var_17 : var_1)) + ((max(var_5, var_16))))), ((max(((var_11 ? var_4 : var_18)), ((var_6 ? var_14 : var_17)))))));
    #pragma endscop
}
