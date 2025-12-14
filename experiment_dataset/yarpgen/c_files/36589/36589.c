/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_8 [i_0] [i_1] [i_0] = var_18;
            var_20 = (1138997026 / 4);

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_21 = ((!((((arr_7 [i_2]) / var_3)))));
                var_22 = 250;

                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_2] [i_3] [i_4] = (((arr_10 [i_0]) ? (arr_10 [i_0]) : var_15));
                        var_23 = (~(!2561301140));
                        arr_17 [i_0] [i_1] [i_2] [i_2] = 2561301140;
                        var_24 = (~3523726074);
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_20 [i_0] [i_1] = (0 >= (arr_18 [i_0] [i_1] [i_1] [i_2] [i_2]));
                        var_25 = ((~(arr_14 [i_0] [i_1] [i_1] [i_3] [13] [i_3] [i_1])));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_26 = (arr_5 [i_0] [i_6]);
                        var_27 = (+-0);
                    }
                    arr_23 [i_0] [i_1] [i_2] [i_0] = var_19;
                    var_28 = var_8;
                }
            }
            for (int i_7 = 4; i_7 < 18;i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_29 = ((((!(arr_0 [i_0]))) || (arr_22 [i_7 + 4] [i_7 + 3] [i_7 + 3] [i_7 + 3] [i_7 + 2])));
                            var_30 = -1;
                        }
                    }
                }
                arr_32 [i_0] [i_1] = (arr_30 [i_1] [i_1] [i_0] [i_7] [i_7 - 3] [i_7 - 1]);
            }
            for (int i_10 = 4; i_10 < 18;i_10 += 1) /* same iter space */
            {
                var_31 = 1;
                arr_37 [i_0] [i_1] [i_1] [i_10 - 4] = 2561301170;
            }
            arr_38 [i_0] [i_1] [i_1] = ((arr_36 [i_0] [i_0] [i_0] [i_1]) >= (arr_24 [i_0] [i_1]));
        }
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            var_32 = (arr_22 [i_0] [i_11] [i_11] [i_0] [i_11]);
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        {
                            arr_48 [i_13] [i_0] [i_12] = var_6;
                            var_33 = ((-(arr_1 [i_0])));
                        }
                    }
                }
            }
            var_34 = (arr_44 [i_0] [i_0] [i_0] [i_11]);
        }
        var_35 = (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        arr_49 [i_0] = (~0);
    }
    var_36 = var_18;
    var_37 = ((var_10 ? 1 : (0 + 1)));
    #pragma endscop
}
