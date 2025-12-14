/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (min(3704303705, (((-(arr_2 [i_0]))))));
        var_16 = (((~var_11) ? ((((~111) ? (arr_2 [i_0]) : (arr_1 [i_0])))) : (arr_0 [i_0] [i_0])));

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            var_17 = (arr_4 [i_0] [i_0] [i_0]);
            var_18 = ((((!(arr_4 [4] [i_1] [i_1]))) || ((min(1, (arr_4 [i_0] [7] [i_1]))))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_9 [i_0] |= 7;
            var_19 = (((((arr_6 [i_0] [i_2]) + (((arr_8 [i_0] [i_0] [i_0]) ? (arr_8 [i_0] [i_0] [0]) : var_13)))) >> ((((((arr_1 [i_0]) ? 215 : (arr_8 [i_0] [i_2] [i_2]))) != ((3448002362 ? (arr_5 [i_0]) : var_8)))))));
            var_20 = (arr_7 [i_0] [i_2]);
        }
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            var_21 = (arr_1 [i_3]);

            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                var_22 = var_9;
                arr_16 [i_3] = (((((arr_2 [i_4 + 1]) ? var_2 : (arr_2 [i_4 - 1]))) % ((max((arr_2 [i_4 - 1]), (arr_5 [i_3 + 2]))))));
                arr_17 [9] [i_3] [i_3] [i_0] = arr_15 [i_0] [i_0] [i_4] [i_4];
                var_23 = (((((arr_8 [i_0] [i_0] [i_0]) / (arr_0 [i_0] [i_0]))) * (((((arr_0 [i_0] [i_4 - 1]) <= (arr_8 [i_0] [i_3 - 2] [i_4 - 1])))))));
                var_24 = (((arr_7 [i_3 - 2] [i_3 - 2]) / ((min((arr_10 [i_4] [i_3] [i_4 - 1]), 3448002360)))));
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_25 = 18446744073709551603;
                var_26 -= 65533;
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                arr_22 [i_0] [1] [i_6] &= 268402688;
                var_27 = (max(var_27, (((((var_15 == (arr_7 [i_3] [5]))) ? (arr_20 [i_3 - 2] [i_3 - 1] [i_6] [i_3 - 3]) : (((1 ? var_15 : (arr_19 [i_0])))))))));
            }
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                var_28 = (max((arr_7 [i_0] [i_0]), ((max((!-268402689), (arr_12 [i_0] [i_3 + 2] [i_3 - 1] [i_0]))))));
                arr_25 [i_3] [i_3] [i_7] [2] = ((-((-1 ? ((64 + (arr_24 [i_0] [i_3] [i_7] [i_0]))) : ((((arr_10 [i_3] [i_3] [i_0]) && 0)))))));
                arr_26 [i_0] [i_3] = (((max((arr_1 [i_3 - 3]), 3448002362))));
            }
            var_29 -= ((var_7 == (((arr_24 [i_3 - 1] [i_3] [i_3 - 2] [i_3]) ? var_15 : (arr_24 [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3])))));
        }
        arr_27 [i_0] = ((-(~1)));
    }

    /* vectorizable */
    for (int i_8 = 3; i_8 < 11;i_8 += 1)
    {
        arr_30 [0] [0] &= -191;
        var_30 = (((arr_11 [4]) <= (arr_11 [i_8 - 1])));
    }
    #pragma endscop
}
