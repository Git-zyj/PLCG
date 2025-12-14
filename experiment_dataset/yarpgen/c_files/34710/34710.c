/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = (arr_3 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_13 = (((((arr_13 [i_2] [i_1] [i_0]) ^ (arr_2 [i_0]))) + (arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4])));
                            var_14 = (((!var_4) ? (((arr_6 [i_2 + 1] [i_0]) ? var_4 : var_1)) : ((((arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] [i_1]) ? var_7 : (arr_1 [11] [i_0]))))));
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_20 [i_0] [i_1] = (((arr_4 [i_0]) ? (arr_4 [i_5]) : (arr_4 [i_0])));
                            arr_21 [i_5] [i_0] [1] [i_0] [i_0] = (arr_5 [i_0] [i_2 + 1] [i_2]);
                            var_15 = ((!(-104 * 0)));
                            var_16 = ((~((-(arr_8 [i_2 - 1] [i_1])))));
                            arr_22 [i_0] [i_0] [i_3] [i_5] = arr_7 [9] [2] [i_5];
                        }

                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            var_17 = (((arr_2 [i_6 - 1]) ? (arr_13 [i_6 - 1] [i_6 - 1] [i_2 + 1]) : (arr_24 [4] [i_6 + 1] [i_6 + 1] [i_1])));
                            arr_26 [i_0] [i_3] [i_2] [i_2] [i_2] [i_3] = var_0;
                            var_18 = (arr_19 [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1] [i_3] [i_3] [i_2 + 1]);
                        }
                        var_19 = ((825791530 && (arr_8 [8] [i_1])));
                        arr_27 [i_0] [i_1] [12] [i_0] = (((!-1595269414873607056) ? var_7 : (arr_16 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        arr_32 [i_7] [i_7] = var_1;
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 14;i_11 += 1)
                        {
                            {
                                arr_47 [i_7] [i_8 + 1] [i_11] [i_10] [i_8 + 1] = (arr_29 [i_9]);
                                arr_48 [i_11] [i_11] = (!var_9);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            {
                                var_20 = var_8;
                                var_21 = (89439430 ? 0 : 89439430);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 4; i_15 < 13;i_15 += 1)
                        {
                            {
                                arr_58 [i_7] [i_15] [i_9] [i_15] [i_7] = min((arr_51 [i_15] [i_15 - 1] [i_15] [i_15]), ((var_7 ? (arr_23 [i_8 + 2] [i_8 + 2] [i_15 - 3] [i_14] [i_8 + 2] [i_8 + 2]) : (arr_23 [i_8 - 1] [10] [i_15 + 1] [15] [3] [3]))));
                                var_22 = var_1;
                                var_23 = (((((+(((arr_43 [i_7]) << (((arr_46 [i_7] [i_8] [i_7] [4] [i_8]) + 799505638))))))) && var_4));
                            }
                        }
                    }
                    var_24 = (~var_7);
                    arr_59 [9] [i_8 + 1] [i_9] = min(((((arr_41 [i_7] [13] [i_9] [14]) | (arr_45 [i_7] [i_7] [i_7] [6] [6])))), (((((~(arr_34 [i_8] [i_9])))) | (arr_23 [i_7] [13] [i_9] [i_7] [i_7] [i_8 - 1]))));
                }
            }
        }
        arr_60 [i_7] = 0;
    }
    for (int i_16 = 0; i_16 < 13;i_16 += 1)
    {
        arr_63 [i_16] = (((max(var_2, ((~(arr_30 [i_16] [6])))))) ? var_8 : var_3);
        var_25 += ((!(arr_36 [i_16])));
        var_26 = (min(var_26, var_11));
    }
    var_27 = var_3;
    #pragma endscop
}
