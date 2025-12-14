/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_11 = ((-(min(var_3, (arr_0 [i_0 - 1])))));
        var_12 = ((var_0 << (((((arr_0 [i_0 + 2]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))) - 422786607))));
        var_13 = (max(var_13, (((~(min((arr_1 [i_0 + 1]), (arr_0 [i_0 - 1]))))))));
        var_14 = (((min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))) % ((var_7 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1])))));
        arr_2 [i_0] = var_2;
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_15 = (~var_7);
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 23;i_4 += 1)
                {
                    {
                        var_16 *= ((((((arr_10 [i_4] [i_4 - 1] [i_4 - 3] [i_4 - 3] [i_4 - 3]) > var_9))) >> (-9 + 38)));
                        var_17 = (((var_2 & var_4) & (arr_12 [i_1 - 1] [i_3 - 2])));
                        arr_13 [i_2] [i_4] = 31329;
                        arr_14 [i_4 + 1] [i_3] [i_2] [i_1] [i_1] = (min((((arr_5 [i_3 + 2]) + ((min(0, var_2))))), (((~(arr_4 [17]))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 22;i_6 += 1)
                {
                    {
                        var_18 = arr_15 [i_6 - 2] [i_5] [i_1 + 1];
                        arr_23 [i_5] = (((((+((min((arr_7 [3] [19]), 31329)))))) ? (arr_6 [i_5]) : (((arr_10 [0] [i_2] [0] [i_5] [i_6 + 2]) * (arr_10 [i_5] [i_1] [13] [i_1 + 1] [i_2])))));
                    }
                }
            }
            var_19 = (arr_4 [i_2]);
            var_20 = var_9;
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
        {
            var_21 = 255;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        var_22 = (arr_4 [i_1]);

                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_23 = ((var_8 ? var_9 : var_0));
                            var_24 = var_0;
                            var_25 = var_7;
                            var_26 = (((arr_11 [i_1 + 1] [6] [i_1] [i_1 - 1]) > (arr_11 [1] [i_10] [i_10] [i_1 + 2])));
                            var_27 = var_3;
                        }
                        arr_39 [i_8] = ((~((~(arr_27 [i_8] [i_7])))));
                        var_28 -= ((-(arr_36 [i_1 + 1] [i_7] [9] [i_9] [i_8] [i_9])));
                        var_29 = (((((-(arr_31 [i_1 - 1] [1] [6] [i_9] [5])))) - 31339));
                    }
                }
            }
        }
        var_30 = ((((min(1326585929, var_4))) ? (var_2 / -1103073001) : (1103072993 & var_5)));
        var_31 = (max(var_31, ((!(((arr_38 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1 - 1]) < ((var_6 >> (var_4 + 51)))))))));
        arr_40 [21] = (arr_26 [i_1] [i_1]);
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_44 [i_11] = (min((arr_42 [i_11]), (min(((var_6 ? var_7 : (arr_41 [i_11] [1]))), var_8))));
        var_32 = ((((var_5 ? var_2 : (arr_41 [i_11] [i_11]))) & (min((arr_41 [i_11] [i_11]), (arr_42 [i_11])))));
    }
    #pragma endscop
}
