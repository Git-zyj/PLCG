/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (max((((var_8 / var_4) + (((18446744073709551612 ? -119 : var_1))))), (!var_8)));
    var_11 = (min(var_11, var_2));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_12 |= (min((min(10350, (min(40259, 66060288)))), -66060291));
        arr_3 [i_0] = (((((!((max((arr_0 [i_0]), 20079)))))) >> ((((12139 ? -7322903612841528814 : 1)) + 7322903612841528814))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_13 = ((((((arr_2 [i_1] [i_1]) & (arr_5 [i_1] [i_1])))) ? (1 > 13266) : (arr_2 [i_1] [i_1])));
        var_14 = (max(var_14, (4194240 <= 3583523450281148892)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_9 [1] [i_2] = ((((4228907037 ? (arr_6 [i_2]) : (arr_1 [i_2] [0]))) != 1));

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_15 = (min(var_15, 2110646002));
            var_16 ^= (((arr_1 [i_2] [i_2]) ? ((1 ? (arr_1 [i_2] [i_3]) : -60701925)) : var_8));
            var_17 = 1491013691;
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            arr_16 [5] [8] [i_4] = (((((var_8 ? (arr_5 [i_2] [i_4]) : (arr_5 [i_4] [i_2])))) ? var_3 : -19));
            arr_17 [i_2] = 1;
        }
    }
    #pragma endscop
}
