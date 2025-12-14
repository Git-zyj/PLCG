/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_7, ((var_12 ? ((var_7 ? var_9 : var_7)) : 2042218847))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1] = (arr_4 [i_0]);
            var_16 |= ((arr_4 [i_1]) ? ((((!(arr_2 [8] [i_1] [i_0]))))) : (((((32765 ? var_9 : var_0))) ? (var_5 & var_8) : var_6)));
        }
        for (int i_2 = 4; i_2 < 8;i_2 += 1)
        {
            var_17 = arr_2 [i_2 - 3] [i_0] [i_0];
            var_18 = ((((((arr_1 [i_0]) ? -var_11 : (arr_5 [i_0] [i_2 - 4] [i_0])))) ? (~28) : -709192901));
        }
        var_19 = (min(var_19, ((((~(arr_0 [i_0])))))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_11 [i_3] = ((~((~(arr_4 [i_3])))));
        var_20 = (~(arr_7 [i_3]));
        var_21 &= ((((min(3793722237, (arr_10 [i_3])))) ? (((1177979006 ? (arr_7 [i_3]) : (arr_7 [i_3])))) : (((arr_7 [i_3]) ? ((0 ? (arr_2 [i_3] [i_3] [i_3]) : (arr_1 [i_3]))) : var_7))));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_22 = (min(var_22, 26806));
        var_23 = ((501245051 >= ((((((arr_13 [3]) ? (arr_12 [i_4]) : (arr_13 [i_4])))) ? (!var_3) : (arr_13 [i_4])))));
        arr_14 [i_4] [i_4] = (((((((min(var_5, (arr_12 [6])))) ? (var_7 > 8562280355346450437) : (arr_12 [11])))) > ((((min(20872, var_3))) ? (arr_13 [i_4]) : (((90 + (arr_12 [i_4]))))))));
    }
    var_24 += (var_0 ? (((var_11 ? var_8 : var_11))) : var_6);
    var_25 = var_8;
    #pragma endscop
}
