/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -997;
    var_18 = (((((var_5 ? 6014 : var_9))) ? (max((!16383), var_5)) : ((max(1947898822, -16391)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_1] [i_1] [11] [i_3] [i_1] = max((--92), var_10);
                            arr_15 [i_0] [i_1] [i_2] [i_1] [i_4] = ((((max(var_8, -16387))) <= (((((max(var_15, -16851)))) / ((22865 ? var_5 : 1))))));
                            var_19 = 255;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            var_20 = ((!(arr_16 [i_1] [i_1] [i_2] [i_3] [i_5])));
                            var_21 = 4294967295;
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] = ((~(arr_13 [i_5] [i_3] [i_2] [i_1] [i_1] [11] [i_0])));
                            arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((~(arr_1 [i_2] [i_3])));
                            var_22 = -var_10;
                        }
                        var_23 = (max(((((arr_11 [6] [i_2] [i_0] [i_0] [i_0]) == 3285147213109695958))), var_15));
                        var_24 = (((((var_12 ? 28672 : -16384))) ? (~var_7) : (var_5 / var_5)));
                        arr_21 [i_1] [i_3] = (((((!((((arr_17 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2] [21]) / var_5)))))) / ((13634 >> (arr_0 [i_0] [i_1])))));
                        var_25 = 1;
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_26 = (min(var_26, ((((max((max((arr_9 [i_0] [i_2] [i_1] [i_2] [i_6]), var_6)), (arr_8 [i_0] [i_1] [i_6]))) * (((-(((arr_17 [i_0] [i_1] [i_1] [i_2] [i_2] [14] [i_1]) * (arr_8 [i_0] [i_0] [i_6])))))))))));
                        arr_25 [i_0] [i_1] [i_2] [i_6] [1] = (((arr_6 [20]) ? ((max((arr_5 [i_6]), var_6))) : (~18446744073709551605)));
                    }
                    arr_26 [i_0] [i_1] = ((+((-(((-5069558433631209563 + 9223372036854775807) >> (22030 - 22008)))))));
                    arr_27 [i_0] [i_0] [i_1] [i_2] |= max((((arr_13 [i_2] [i_1] [4] [i_1] [4] [i_0] [16]) ? var_16 : (arr_10 [i_2] [i_1] [i_2] [18]))), (10 > var_14));
                    var_27 = var_2;
                }
            }
        }

        for (int i_7 = 4; i_7 < 19;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            arr_37 [i_0] [i_7] [i_8] [i_0] = ((-(((arr_36 [i_0] [i_7 - 2] [7] [18] [i_10] [i_0]) ? (arr_8 [i_10] [i_7] [i_10]) : (arr_36 [i_0] [i_7 + 4] [i_8] [i_9] [i_10] [5])))));
                            arr_38 [1] [i_7 - 4] [i_8] [1] [i_10] = max((max((arr_10 [i_0] [i_0] [i_10] [i_10]), 1)), (arr_4 [i_0] [i_10]));
                        }
                    }
                }
            }
            arr_39 [i_0] [5] = ((~((((max(var_2, var_0))) ? (arr_33 [i_0] [i_7 + 3] [i_7 - 2] [i_7 + 3]) : ((max(var_9, (arr_17 [i_0] [i_0] [i_0] [i_0] [i_7] [i_7] [i_7 - 2]))))))));
        }
        var_28 = (max(var_28, (((-((((var_7 ? 73139176 : -32746)))))))));
        var_29 = (arr_7 [i_0] [i_0]);
    }
    for (int i_11 = 0; i_11 < 19;i_11 += 1)
    {
        arr_42 [i_11] [i_11] = (max((((arr_10 [i_11] [i_11] [i_11] [i_11]) / (arr_10 [i_11] [i_11] [i_11] [i_11]))), (arr_10 [i_11] [i_11] [i_11] [i_11])));
        arr_43 [i_11] = (arr_7 [i_11] [22]);
    }
    #pragma endscop
}
