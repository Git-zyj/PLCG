/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_11 = (min(var_11, (((((arr_1 [i_1]) ? (((arr_1 [3]) / var_0)) : var_8))))));

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {

                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    var_12 ^= (!(arr_0 [i_0 + 1]));
                    var_13 -= ((!(var_9 & var_7)));
                }
                arr_10 [i_2] [i_1] [i_0] &= ((~((~((~(arr_2 [i_0])))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_14 &= var_6;
                            var_15 *= ((~(arr_2 [i_0 - 4])));
                            var_16 *= ((~(arr_1 [i_0 + 1])));
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_21 [i_1] [i_0] [i_6] [i_6] &= ((-var_8 ? ((-((var_0 ? 31559 : var_9)))) : (((-(arr_13 [i_2] [10] [i_2] [7] [i_2] [i_2]))))));

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_25 [i_0 - 3] [i_0] [i_0] [1] [i_0 - 3] [i_0] = (~1789595375);
                        var_17 = ((!(((((max(var_5, (arr_0 [0])))) / (~-220232780))))));
                        var_18 = (max(var_18, ((((arr_18 [13] [i_0] [0] [i_0]) + 18026833688230943896)))));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_30 [i_0] [i_0] [i_0] = (arr_3 [3] [i_8]);
                        arr_31 [i_0] [i_0] [12] [1] [12] = 19074;
                        arr_32 [i_2] [i_2] [i_2] [i_6] = var_5;
                    }
                    var_19 = (min(var_19, (((!(((~((-(arr_13 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_6])))))))))));
                }
            }
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_20 ^= (~var_4);
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        arr_42 [10] [i_9] [3] [i_10] [i_11] [i_11] = (max(1323767441, -3580442072));
                        var_21 ^= (~218);
                    }
                }
            }

            for (int i_12 = 1; i_12 < 13;i_12 += 1)
            {
                arr_45 [i_9] [i_12] = (1 + -12319);
                var_22 = (max(var_22, (arr_44 [i_0] [i_0 - 4] [i_0])));
            }
        }
        var_23 = (((!((((arr_18 [i_0] [i_0] [12] [i_0 - 2]) / var_10))))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 12;i_14 += 1)
            {
                {
                    var_24 &= 1;
                    var_25 = arr_2 [i_0];

                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        var_26 = (min(var_26, 1));

                        for (int i_16 = 3; i_16 < 12;i_16 += 1)
                        {
                            arr_58 [i_0] [i_0] [i_0] [i_0] [6] [i_0] [i_14] = ((((-26452 ? var_0 : (~var_7))) / (arr_51 [i_13] [i_13] [i_13])));
                            arr_59 [12] [i_14] = ((var_1 + (((2604261074 + var_6) ? var_8 : 5416))));
                        }
                        var_27 = var_0;
                        arr_60 [4] [i_0] [i_0] [4] [i_14] [i_0] = (((arr_50 [i_13] [i_14]) ? var_7 : (-var_3 + -18014398509219840)));
                    }
                }
            }
        }
        arr_61 [i_0] = 26452;
    }
    var_28 = (~-27432);
    #pragma endscop
}
