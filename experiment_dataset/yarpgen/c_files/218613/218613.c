/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_1] [6] [i_1] = (((!(arr_2 [i_0]))));
                    var_12 = ((!(((488950010 - (((arr_6 [i_0] [i_0] [14]) ? var_11 : var_9)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_13 = (arr_6 [i_0] [i_1 + 2] [4]);
                                var_14 = 255;
                            }
                        }
                    }
                    var_15 = (((((arr_4 [i_1]) + (arr_4 [i_1]))) == var_11));
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 7;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 8;i_6 += 1)
        {
            var_16 = ((max(((var_2 - (arr_19 [i_6] [i_5 - 1] [i_5])), (arr_2 [i_5 + 2])))));

            for (int i_7 = 1; i_7 < 6;i_7 += 1)
            {
                arr_23 [i_5] [i_5] [9] [4] = -24978;
                var_17 = ((!(arr_6 [i_5 + 3] [i_6] [i_7])));
                arr_24 [i_5] [i_6] [i_7] [i_7] = var_3;
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_18 = (((((max((arr_5 [i_5] [i_6 - 1] [i_5 + 3]), (arr_5 [i_5] [i_6 + 1] [i_5 + 3]))))) * var_7));
                var_19 = (max(-24997, ((~((max(0, (arr_5 [i_5] [i_6] [i_8]))))))));
                arr_27 [i_5] [7] [0] [i_5] = ((((var_9 ? (((arr_0 [i_5 + 1] [9]) ? 24978 : 24996)) : (arr_4 [i_5])))) ? 24996 : 0);
            }
            /* vectorizable */
            for (int i_9 = 1; i_9 < 9;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 7;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 8;i_11 += 1)
                    {
                        {
                            arr_37 [i_5] [i_5] = (arr_13 [1] [i_9] [9] [1] [9] [i_9] [i_5]);
                            var_20 = (arr_3 [i_5] [i_9 + 1] [i_5]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 7;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        {
                            var_21 = (~var_0);
                            arr_44 [4] [i_5] [i_9 - 1] [i_5] [i_5] = ((~(arr_28 [i_5 + 2])));
                            var_22 = 134;
                            arr_45 [2] [5] [i_9] [i_5] [i_13] = -9;
                            var_23 = (max(var_23, var_7));
                        }
                    }
                }
            }
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                var_24 = (max((arr_0 [13] [i_6 + 2]), (arr_42 [i_14] [i_5] [8])));
                var_25 = (((((-1 ? (arr_25 [i_5]) : (arr_25 [i_5])))) - (max(((((arr_18 [i_5]) ? -52 : var_3))), ((var_8 / (arr_28 [i_14])))))));
            }
        }
        for (int i_15 = 1; i_15 < 9;i_15 += 1)
        {
            arr_52 [i_5] = ((+(min((arr_42 [i_15 + 1] [i_5] [i_15]), (((arr_1 [13] [0]) ? (arr_30 [i_5]) : (arr_51 [9] [i_15 - 1])))))));
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 0;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 3; i_18 < 9;i_18 += 1)
                    {
                        {
                            var_26 &= var_11;
                            var_27 = (((((max(var_5, var_10)))) % var_11));
                        }
                    }
                }
            }
            var_28 = ((((((arr_33 [i_5] [i_5] [i_5] [i_5 + 2]) / (arr_33 [i_15] [i_5] [i_5] [i_5 + 1])))) - (max((arr_3 [i_5 - 1] [i_15 + 1] [i_5]), (arr_49 [i_5] [i_15] [i_15] [i_5])))));
        }
        var_29 = var_3;
    }
    var_30 = (((((var_2 ? -578 : var_11))) != var_11));
    #pragma endscop
}
