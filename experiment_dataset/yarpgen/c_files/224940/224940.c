/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_17));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 = ((!(((((((arr_2 [i_0]) || var_4))) - var_7)))));
        var_22 = ((~(arr_0 [i_0] [i_0])));
        var_23 = ((((((arr_1 [i_0]) >> (((arr_1 [i_0]) - 238))))) ? -4213393000275151996 : (max((min(var_4, var_6)), (arr_2 [i_0])))));
        var_24 = (min(var_8, var_16));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_25 -= var_17;
        var_26 = ((34 | (arr_3 [i_1] [i_1])));
        var_27 = (min(var_27, (((~(arr_5 [i_1]))))));
        var_28 = ((!(arr_6 [i_1])));
        arr_7 [7] = ((var_14 < (arr_6 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        var_29 = var_15;
        arr_10 [i_2] [7] = var_19;
        var_30 = (67043328 <= 1);
        arr_11 [i_2] = (arr_9 [i_2 + 1]);
    }
    #pragma endscop
}
