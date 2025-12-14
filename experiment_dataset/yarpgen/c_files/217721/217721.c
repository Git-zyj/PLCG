/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 += (8796093022207 < -47);
        var_14 = ((var_2 | (arr_1 [i_0])));
        var_15 = (min(var_15, (arr_0 [19] [i_0])));
        var_16 = (max(var_16, (((1966 ? (arr_2 [i_0] [i_0]) : (((var_1 ? (arr_1 [i_0]) : var_5))))))));
        arr_4 [i_0] [i_0] = (-9223372036854775807 - 1);
    }

    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_17 = var_1;
            var_18 = (arr_8 [i_2]);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_19 = arr_9 [i_3] [i_3];
            var_20 = var_12;
            var_21 ^= ((var_6 ? (arr_9 [i_1] [i_3]) : 16706039162612796164));
        }
        arr_13 [i_1] = ((((arr_1 [i_1]) ? (arr_1 [i_1]) : var_6)));
        var_22 = -1115870744;
        var_23 ^= ((((arr_5 [i_1] [i_1]) ? -8796093022227 : var_2)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_24 = (min(var_24, (((var_9 ? (((arr_10 [i_4] [i_4] [i_4]) ? (arr_10 [13] [i_4] [i_4]) : (arr_11 [i_4] [i_4] [i_4]))) : -8623397070019354793)))));
        var_25 = var_6;
        var_26 = (~16706039162612796184);
        var_27 = (max(var_27, ((((-2147483647 - 1) ? 9223372036854775805 : var_1)))));
        var_28 = ((~(arr_5 [i_4] [i_4])));
    }
    #pragma endscop
}
