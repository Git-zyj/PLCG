/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 = (((max((((var_13 ? var_0 : var_16))), (arr_14 [i_0] [i_1 - 1] [i_2] [i_2] [i_2] [i_2] [i_2])))) ? (max(59, -316484336)) : var_11);
                                var_19 = 7;
                                arr_15 [i_0] [i_0] [i_1 - 1] [i_0] [i_2] [i_3] [i_4] = (((arr_14 [i_0] [i_1] [i_2] [i_2] [8] [8] [i_4]) ? (max(var_13, -423498356)) : ((var_16 ? (~423498347) : (arr_6 [i_4] [i_1] [i_0] [i_3])))));
                                var_20 -= (arr_9 [7] [i_1] [1]);
                                var_21 = (arr_6 [i_0] [i_0] [i_0] [i_0 + 1]);
                            }
                        }
                    }
                    arr_16 [i_0] [i_2] = ((((423498349 ? 255 : 235)) | (arr_7 [i_0])));
                }
            }
        }
        var_22 = (((max((((var_15 ? (arr_0 [i_0]) : 423498330))), (18446744073709551605 / var_1))) != var_4));
        arr_17 [i_0 - 1] [i_0] = ((!(arr_12 [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0])));
        var_23 = (~(arr_10 [i_0] [15] [i_0] [i_0] [i_0 - 1]));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {

        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            var_24 = ((((12223992281083123590 ? 423498360 : 224)) + (arr_10 [i_5] [i_6 + 4] [i_6] [i_6 + 3] [i_6 - 3])));
            var_25 |= (~var_6);
            var_26 = (arr_7 [i_6]);
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        var_27 = var_3;
                        var_28 = (min(var_28, (arr_9 [i_5] [i_5] [i_7])));
                        var_29 = (((arr_19 [i_6 + 4]) ? var_16 : (arr_19 [i_6 + 2])));
                    }
                }
            }

            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                var_30 = var_14;
                var_31 *= ((arr_26 [i_6] [i_6 + 2] [i_6] [i_6 + 4] [10] [i_6]) ? (arr_10 [i_6] [i_6 + 2] [i_6] [i_6] [i_6]) : (arr_26 [i_6 - 1] [i_6 + 2] [8] [i_6] [i_6] [i_6]));
                var_32 = (max(var_32, (arr_0 [i_6])));
                var_33 = (arr_8 [i_6] [i_6 - 2] [i_6 + 4]);
            }
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                arr_33 [i_6] [i_6] [i_6] [i_5] = (~var_6);
                var_34 = (max(var_34, (((((arr_26 [14] [i_6 - 3] [i_6 + 4] [i_6] [i_6] [i_6]) <= var_3))))));
            }
        }
        arr_34 [i_5] = (((((var_10 ? var_2 : (arr_20 [i_5])))) ? 423498329 : (arr_9 [i_5] [i_5] [i_5])));
    }
    var_35 += ((!((max(var_14, (~var_10))))));
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            {
                var_36 = arr_3 [i_11] [i_12];
                arr_39 [i_11] [i_12] = (~var_4);
                var_37 = ((var_16 ? (((arr_32 [i_11] [i_11]) ? (var_14 + var_5) : (((var_13 ? var_11 : (arr_18 [i_11])))))) : -423498370));
            }
        }
    }
    #pragma endscop
}
