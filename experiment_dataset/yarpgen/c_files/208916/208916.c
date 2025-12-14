/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = (((arr_1 [i_0]) | (arr_0 [i_0])));
        var_13 += ((~(99 || -2079423482)));
        arr_3 [i_0] [i_0] = (+-3484836108016725840);
    }

    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {
                    {
                        var_14 = (max(var_14, ((((var_6 ? 2079423482 : (arr_12 [14] [14] [i_3 - 1] [i_2])))))));
                        var_15 = 6422736041762070121;
                        var_16 = (!var_0);
                        arr_13 [i_1] [i_3] [i_2] [i_1] = (arr_7 [i_3 - 2] [i_1 - 1] [i_1]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        var_17 -= ((2079423482 & (arr_16 [i_1] [i_2] [0] [i_6])));

                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            arr_21 [i_1] [i_1] = var_7;
                            arr_22 [i_7] [i_7] [i_1] [i_6] [i_1] [i_2] [i_1] = -991129458708344980;
                            var_18 += (arr_11 [i_1] [12]);
                            var_19 -= ((~(arr_6 [i_1 - 1] [i_2] [i_7 + 1])));
                        }
                        var_20 = (3600623455761935028 & 2975276480);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 22;i_9 += 1)
                {
                    {
                        var_21 = (((arr_19 [i_1 - 1] [i_9 - 1] [i_9 - 2] [i_9] [1]) / var_6));
                        var_22 = (max(var_22, (((25 % ((((arr_26 [i_1] [i_2] [i_8] [24] [i_9] [i_9]) != (arr_27 [i_1] [i_2] [i_2] [i_9])))))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 3; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            arr_37 [i_1 - 1] [i_2] [i_10] [i_11] [i_1] [i_12] = (((65530 | -1027400366341765657) >= var_0));
                            var_23 = var_2;
                        }
                        var_24 = var_4;
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 1; i_14 < 21;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 25;i_15 += 1)
                {
                    {
                        arr_45 [i_1] [i_14] [i_13] [i_1] = ((((var_7 ? var_6 : var_1)) << ((((~(arr_24 [i_1] [i_13] [i_14] [i_15]))) + 4500088914375899850))));
                        arr_46 [i_1] [i_13] [i_13] [i_15] = (((var_2 ? (arr_41 [i_1 - 1] [i_13] [i_14]) : (arr_42 [1] [8] [i_14]))));
                        var_25 = (min(var_25, (((-(arr_32 [i_1] [i_1 - 1] [i_1 - 1] [i_1]))))));
                        var_26 = (min(var_26, -25051));
                        var_27 = (arr_6 [i_14 + 4] [i_14 - 1] [i_14 + 3]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_16 = 2; i_16 < 24;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    {
                        arr_53 [i_1] [i_1] [i_1] = var_4;
                        arr_54 [i_1] [i_13] [i_1] = (2079423482 / var_8);
                        var_28 = (min(var_28, ((((arr_17 [i_1] [6] [13] [i_17]) ? ((((arr_5 [18] [18]) > var_3))) : var_0)))));
                        var_29 = 255;
                    }
                }
            }
        }

        for (int i_18 = 1; i_18 < 24;i_18 += 1)
        {

            for (int i_19 = 1; i_19 < 22;i_19 += 1)
            {
                var_30 = (max(var_30, (((((var_10 ? (arr_41 [12] [i_1] [i_1]) : var_5)) == ((((-1 > (arr_15 [12] [i_18] [12]))))))))));

                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    arr_63 [i_1] [i_18 + 1] [i_19] [i_20] = (((arr_34 [i_1] [i_1] [i_1] [i_18 + 1] [i_19 + 2]) ? var_5 : var_5));
                    arr_64 [i_1] = (((arr_61 [i_19 - 1] [1] [i_19] [i_19] [i_18 + 1]) == (((arr_18 [i_20] [i_19] [1] [i_1]) * 4294967281))));
                    var_31 += ((var_7 + (var_1 * 147)));
                    arr_65 [i_1] = ((((((arr_24 [i_20] [1] [i_18] [i_1]) ? var_7 : (arr_57 [i_1] [i_19 + 1])))) ? (((arr_6 [i_1] [i_19] [i_1]) ? var_2 : var_8)) : (arr_34 [i_19] [i_1] [i_19] [i_20] [i_19])));
                }
            }
            var_32 -= ((((arr_34 [i_18 - 1] [18] [i_18 - 1] [18] [i_1]) ? 68652367872 : 915365109)));
        }
        for (int i_21 = 1; i_21 < 1;i_21 += 1)
        {
            var_33 = (((arr_68 [i_21 - 1] [i_21 - 1] [i_1]) - (arr_26 [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_21])));
            var_34 -= arr_32 [i_1] [i_21 - 1] [i_21 - 1] [i_21 - 1];
        }
    }
    #pragma endscop
}
