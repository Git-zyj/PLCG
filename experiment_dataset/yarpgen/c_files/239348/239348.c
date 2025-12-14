/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] [i_0] = ((!(!32750)));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_8 [12] = (((arr_5 [i_1 - 1]) ? (var_7 > -32750) : (((arr_6 [i_1]) ? var_3 : 3061207005))));
        arr_9 [i_1] = ((~(arr_7 [i_1 - 1])));
    }
    for (int i_2 = 3; i_2 < 21;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = (205935710 % -32751);

        /* vectorizable */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_16 [7] [i_2] = 261120;
            arr_17 [i_2 - 2] [i_2] [i_2] = var_9;
            arr_18 [i_3] [6] = (((arr_7 [i_2 - 1]) ? (arr_7 [i_2 - 1]) : (arr_7 [i_2 - 1])));
        }
        /* vectorizable */
        for (int i_4 = 3; i_4 < 22;i_4 += 1)
        {
            arr_22 [i_2] = (((((32741 ? (arr_5 [3]) : 2097136))) || (((var_0 ? (arr_19 [i_2]) : var_6)))));
            arr_23 [0] [0] = (var_5 ^ var_4);
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 22;i_5 += 1)
        {
            arr_26 [i_2] = (var_2 - -7965816770720871170);
            arr_27 [i_2 - 2] [20] = ((-(arr_15 [i_2 + 1])));
        }
    }
    var_10 = (max((min(var_8, 165)), ((min(-67, -34422627)))));
    var_11 = var_0;
    var_12 = ((-((var_6 ? var_4 : ((var_6 ? var_6 : var_1))))));
    var_13 = var_7;
    #pragma endscop
}
