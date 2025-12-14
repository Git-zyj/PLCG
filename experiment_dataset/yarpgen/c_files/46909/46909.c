/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 &= (min((((var_13 << (var_11 - 578)))), ((32767 ? 1106327549 : (arr_1 [i_0] [i_0])))));
        arr_2 [i_0] &= max((min((arr_0 [i_0]), var_14)), (!32767));
        var_16 = (min(var_16, ((min((arr_0 [i_0]), (min(var_13, var_6)))))));
        var_17 ^= (max(((var_11 ? (arr_1 [i_0] [i_0]) : (((var_0 ? var_7 : var_9))))), (min(var_11, (arr_1 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = (max((((!((((arr_1 [i_0] [i_0]) ? var_13 : var_13)))))), (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_6 [i_1] = (((arr_5 [i_1]) ? var_13 : ((var_0 ? var_9 : var_4))));
        var_18 = (((arr_4 [i_1 + 1] [i_1 + 1]) == (arr_4 [1] [i_1 + 1])));
        arr_7 [i_1] = var_2;
        var_19 = (min(var_19, var_11));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_20 = var_1;
        arr_12 [i_2] [2] = -var_10;
        var_21 = ((-(arr_10 [i_2])));
        var_22 = (max(var_22, (((~(arr_10 [i_2 + 1]))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_23 = var_9;

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            arr_19 [i_3] [i_4] = (i_3 % 2 == 0) ? ((((((arr_18 [i_3]) + 9223372036854775807)) >> (((arr_18 [i_3]) + 2165364102199600621))))) : ((((((arr_18 [i_3]) + 9223372036854775807)) >> (((((arr_18 [i_3]) + 2165364102199600621)) + 2762480953523690406)))));

            for (int i_5 = 2; i_5 < 18;i_5 += 1)
            {
                arr_23 [i_3] = (arr_16 [i_3] [11] [i_5]);
                arr_24 [i_3] = (32767 ? 67 : 8);
                arr_25 [i_3] [i_4] [i_3] = ((var_8 ? ((var_10 ? var_7 : var_11)) : (arr_16 [i_3 - 1] [i_3 - 1] [i_3 - 1])));
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                var_24 = (((arr_13 [i_3 - 1]) ^ (arr_13 [i_3 - 1])));
                var_25 = (max(var_25, ((((arr_20 [i_3 - 1] [i_6]) ? var_2 : var_0)))));
                var_26 = arr_8 [i_3 - 1];
            }
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_27 = (max(var_27, (((var_12 ? var_5 : (var_10 ^ var_14))))));
                var_28 = (min(var_28, ((((((var_4 ? (arr_17 [i_7]) : var_2))) ? (~var_14) : (var_11 / var_9))))));
                arr_30 [i_3] = ((var_9 ? var_14 : (arr_10 [i_3 + 1])));
                var_29 = ((~(arr_20 [i_3 + 1] [i_3])));
            }
        }
        for (int i_8 = 2; i_8 < 19;i_8 += 1)
        {
            arr_34 [i_3] [i_3] = (!var_8);
            var_30 = ((var_5 ? var_9 : (arr_29 [i_3] [i_8] [i_8 + 1])));
            var_31 = (arr_18 [i_3]);
            var_32 = ((((var_11 ? var_5 : var_13)) >= var_7));
            var_33 = (max(var_33, (((-32767 ? 32744 : 120)))));
        }
        for (int i_9 = 1; i_9 < 19;i_9 += 1)
        {
            arr_37 [i_3] [i_3] = var_3;
            var_34 = (max(var_34, (arr_36 [i_3])));
            var_35 -= ((var_0 ? var_3 : var_4));
            arr_38 [6] [6] |= (var_6 % var_9);
        }
    }
    var_36 = (max(var_2, (((((var_4 ? var_0 : var_13))) ? (var_3 & var_8) : (var_2 ^ var_7)))));
    #pragma endscop
}
