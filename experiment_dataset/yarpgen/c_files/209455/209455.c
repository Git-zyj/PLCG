/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_14 = (((((arr_1 [i_0 + 1] [i_0 - 1]) ? (arr_0 [i_0]) : (arr_1 [i_0 + 1] [i_0 + 1]))) & 3651979738));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 15;i_3 += 1)
                {
                    {
                        var_15 = 3651979738;
                        var_16 = arr_5 [i_0 + 1] [i_1] [i_1];
                        arr_10 [i_0 + 1] [i_1] [i_0] [i_0 + 1] = (!var_10);
                        var_17 = -642987551;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_18 = var_3;
        arr_13 [i_4] = ((-9979 || (((~642987561) > (min(642987558, (arr_12 [i_4])))))));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_19 = (1 + 454465898);

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        var_20 &= (~var_2);
                        var_21 = ((((16 ? (((arr_23 [i_5] [i_5] [i_5] [i_8]) ? var_12 : var_10)) : (arr_18 [i_5]))) | ((-((((arr_15 [i_5]) == var_5)))))));
                    }
                }
            }
            arr_25 [i_6] = 1;
            arr_26 [i_5] [8] = 240;
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_22 = (arr_20 [i_5] [i_5] [0]);
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 15;i_11 += 1)
                {
                    {
                        arr_36 [i_5] [i_9] [i_10 + 1] [1] = ((~(arr_16 [i_11 + 1] [i_9] [i_10 - 2])));
                        var_23 = (max(var_23, ((((arr_29 [i_5] [i_10 - 1]) ? (arr_29 [i_9] [i_9]) : (arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))));
                        var_24 = (arr_18 [i_10]);
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    {
                        var_25 += (arr_30 [i_12] [i_12] [i_13] [9]);
                        var_26 = (max(var_26, -85));
                        arr_43 [i_12] [i_12] [14] [8] = arr_14 [i_13 + 3];
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    {
                        arr_49 [i_12] = (max((((!(arr_41 [10] [i_16] [4] [i_12] [i_5])))), (arr_20 [14] [i_12] [i_15])));
                        var_27 = ((-5669 ? (-85 + 543440628) : ((-((~(arr_31 [11] [i_5])))))));
                        arr_50 [i_12] = ((((max(1, 11124))) ^ (min((arr_21 [i_15] [12] [i_15] [i_16]), (arr_24 [i_5] [i_5] [i_15] [i_16] [i_15] [i_12])))));
                        var_28 = (arr_33 [i_16] [i_5] [i_12] [i_5]);
                    }
                }
            }
        }
    }
    for (int i_17 = 3; i_17 < 15;i_17 += 1)
    {
        var_29 = (arr_40 [i_17] [1] [13]);
        arr_55 [10] = (((((2147483647 ? (arr_39 [i_17 - 3] [0] [i_17 - 1]) : (((arr_41 [i_17] [i_17] [i_17] [i_17] [i_17]) ? (arr_41 [i_17] [16] [i_17] [i_17] [i_17 - 3]) : 501630080))))) ? ((((arr_51 [i_17 - 2]) != (arr_52 [i_17 + 1])))) : (((arr_6 [3] [i_17] [i_17 - 2]) ? var_6 : 211))));
        var_30 = (arr_12 [10]);
    }
    #pragma endscop
}
