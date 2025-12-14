/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_20 = (arr_3 [i_0]);

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_21 += (((arr_7 [i_0] [i_0] [i_0]) / (((arr_3 [i_0]) ? (arr_5 [i_0] [i_0]) : (arr_6 [i_0] [i_0])))));
            var_22 = (arr_0 [i_1]);
            var_23 = (max(var_23, ((((((3133255804 ? (arr_5 [i_0] [i_0]) : 8589934591))) ? var_11 : (arr_0 [i_0]))))));
        }
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((-((~(arr_4 [i_2])))));
        var_24 = ((((((arr_7 [i_2] [i_2] [i_2]) ? (arr_7 [i_2] [i_2] [i_2]) : (arr_7 [i_2] [i_2] [i_2])))) ? (arr_6 [i_2] [i_2]) : ((((!((((arr_4 [i_2]) / 3957631564)))))))));
    }

    /* vectorizable */
    for (int i_3 = 3; i_3 < 12;i_3 += 1) /* same iter space */
    {
        arr_16 [6] |= ((arr_4 [i_3 + 2]) ? var_0 : (var_2 != var_16));
        var_25 *= (((var_16 % (arr_14 [i_3]))) % var_18);
    }
    for (int i_4 = 3; i_4 < 12;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_26 = var_1;
            var_27 = (((-(arr_3 [i_4 - 3]))));
            var_28 |= (arr_5 [i_4 - 1] [i_5]);
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_29 = ((((arr_22 [i_4] [i_4 - 2] [i_4 - 2]) ? (arr_9 [i_4 + 2]) : (arr_22 [i_4] [i_4 - 2] [i_4 + 2]))));
            var_30 = (arr_7 [i_4] [i_4] [i_4 - 2]);
            var_31 = arr_23 [i_6] [i_4] [i_4];
            var_32 = (min(((var_11 ? (min(0, (arr_12 [i_4]))) : (arr_20 [3]))), (((-((((arr_1 [i_6] [i_4]) && (arr_22 [i_6] [i_6] [i_4])))))))));
        }
        var_33 += 85;
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 10;i_7 += 1)
    {
        var_34 = (arr_3 [i_7]);
        var_35 = ((var_7 ? var_13 : var_12));
        var_36 = (arr_22 [i_7] [i_7 - 2] [i_7 - 2]);
        arr_27 [i_7] [i_7] = ((~(arr_10 [i_7 + 3] [i_7 - 1])));
    }
    var_37 ^= (min(171, -1));
    #pragma endscop
}
