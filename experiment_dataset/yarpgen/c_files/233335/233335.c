/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_19));
    var_21 = var_13;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_22 = ((-(((!(arr_0 [i_0 + 1]))))));
        arr_2 [i_0] [9] = ((-((-(arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] = (arr_4 [i_1]);
        arr_8 [i_1] [i_1] = (arr_3 [i_1]);
        arr_9 [i_1] [i_1] = ((((~(-2147483647 - 1))) | (arr_3 [i_1])));
        var_23 = (arr_3 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_24 = (min(var_24, (((-(arr_11 [i_2 + 3] [i_2 + 3]))))));
        var_25 = (arr_12 [i_2 + 1] [i_2 + 1]);
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = (~-2147483636);
        var_26 -= ((~(arr_13 [i_3])));
        var_27 = arr_13 [i_3];
    }
    #pragma endscop
}
