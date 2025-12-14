/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-1290464867 == var_2);

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_11 = (max(var_11, ((min((-96 >= 10), ((-(arr_1 [i_0 + 1]))))))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 16;i_4 += 1)
                    {
                        {
                            arr_11 [i_2] = -2466572081739696718;
                            var_12 = 50;
                            var_13 = (((var_0 & (arr_0 [i_4 + 1]))));
                        }
                    }
                }
            }
            var_14 = ((-96 ? 34 : 13054));
            var_15 = var_3;
            arr_12 [i_0] [i_1] [6] = var_0;
            var_16 = (max(var_16, (arr_3 [i_0] [i_0])));
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            var_17 = (max(1, 9223372036854775807));
            arr_17 [i_0] [i_0] = ((var_6 ? ((var_9 ? (var_2 + -4327442458609971577) : -103)) : 1));
            arr_18 [i_0] = (arr_0 [i_5]);

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {

                /* vectorizable */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_18 = (max(var_18, (((-(arr_20 [i_7] [i_6] [i_5]))))));
                        var_19 = (max(var_19, var_7));
                        var_20 = (max(var_20, (arr_5 [i_0] [i_5] [9])));
                        var_21 = ((((var_3 >> (32746 - 32723)))) - 0);
                    }
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        var_22 = (max(var_22, (~var_6)));
                        arr_29 [i_0] [i_5] [4] [i_9] [i_9] = arr_6 [i_6] [i_7] [i_9];
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_23 = ((arr_14 [i_10]) & ((27 ? var_2 : -2466572081739696715)));
                        var_24 = -var_6;
                    }
                    var_25 = (max(var_25, (((var_7 | (arr_5 [i_0 + 1] [i_0] [i_0 + 1]))))));

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_26 = 1;
                        var_27 = 10;
                        var_28 = (max(var_28, ((((((var_9 >> (((arr_33 [i_11] [i_6] [i_6] [i_6] [i_0]) - 104))))) ? (var_3 >= 11) : var_3)))));
                    }
                    var_29 = (max(var_29, (((-2466572081739696718 ? ((1 ? 23277 : 2146288119)) : (~1))))));
                    arr_35 [2] [2] [i_0 + 1] = (((!(arr_34 [i_0] [i_5] [i_5] [i_0] [i_0]))));
                }
                for (int i_12 = 2; i_12 < 19;i_12 += 1)
                {
                    arr_38 [i_12] [i_6] [i_6] [i_5] [5] = (((((var_5 ? (arr_1 [i_0 + 1]) : (((arr_23 [i_0 + 1] [i_5] [i_5] [i_0] [i_0]) & (arr_26 [14] [i_6])))))) ? ((((min((arr_5 [i_0] [i_0] [i_0]), 842487736))) ? ((max(133, 2))) : (min(var_1, var_0)))) : ((min(((min(255, 244))), (arr_24 [i_6] [i_6] [i_6] [i_6] [i_6]))))));
                    arr_39 [8] [8] [i_6] [i_12 + 1] = (((-623802016 ? 1 : 63)));
                }
                for (int i_13 = 1; i_13 < 17;i_13 += 1)
                {
                    arr_44 [i_0 + 1] = var_1;
                    var_30 = ((26160 - (var_3 != var_5)));
                    arr_45 [i_13] [i_5] [i_5] [i_0] = (max((((arr_41 [i_0] [i_13 + 1] [i_6] [i_0 + 1]) - (arr_41 [i_0] [i_13 + 1] [i_6] [i_0 + 1]))), ((max((arr_41 [i_0] [i_13 + 3] [i_0] [i_0 + 1]), (arr_41 [i_0 + 1] [i_13 - 1] [9] [i_0 + 1]))))));
                }
                arr_46 [i_0] [15] [i_6] = ((154 & (((arr_33 [i_0] [i_0 + 1] [i_0 + 1] [i_5] [i_0 + 1]) * (arr_33 [i_0] [i_0] [i_0 + 1] [i_5] [i_0 + 1])))));
            }
        }
    }
    #pragma endscop
}
