/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_11 [i_1] = arr_9 [i_0 - 1] [9] [i_1] [i_1];
                        var_18 -= (((arr_9 [i_2] [i_2] [i_2] [6]) ? (arr_6 [i_0] [i_0] [i_0 + 1]) : (((var_12 ? var_13 : (arr_7 [16] [i_1]))))));
                        var_19 = (arr_7 [i_1] [i_1]);
                        var_20 *= 255;
                        var_21 = (arr_1 [i_0 + 3]);
                    }
                }
            }
            arr_12 [i_0] [i_1] = (((((125 ? 105 : 9223372036854775807))) ? ((-9223372036854775797 ? -9223372036854775807 : 0)) : ((((arr_2 [i_1] [i_1]) - var_10)))));
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_22 = (arr_19 [i_0] [i_0] [i_0] [10]);
                        arr_21 [i_5] = (arr_18 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {
                    var_23 = (arr_18 [i_0] [i_0] [i_0 + 3] [i_0 - 1]);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                var_24 = (((arr_18 [i_0] [i_0 + 3] [i_0] [i_9]) < var_12));
                                var_25 = (min(var_25, (arr_27 [i_8] [i_0 + 2] [i_0 + 2])));
                                var_26 = ((!(arr_8 [i_0 + 1] [i_0 - 1])));
                            }
                        }
                    }
                    var_27 = ((~(arr_0 [i_0])));

                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        var_28 = (arr_5 [i_0 + 2] [i_7] [i_7]);
                        arr_35 [i_7] [4] [i_7] [i_8] [4] [i_11] = (arr_16 [i_0] [19] [i_0] [i_11]);
                    }
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        var_29 = (((arr_13 [i_0] [i_8] [i_8]) ? (arr_29 [i_7]) : var_16));
                        var_30 = (arr_27 [i_0] [i_8] [i_8]);
                        var_31 = var_9;

                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            var_32 = (((!(arr_6 [i_0] [i_8] [i_12]))));
                            arr_43 [i_7] = (arr_41 [i_0 + 2] [i_0 + 2] [i_8] [i_12]);
                        }
                    }
                }
            }
        }
    }
    for (int i_14 = 3; i_14 < 13;i_14 += 1)
    {
        var_33 = ((arr_28 [18]) ? (((var_16 || (arr_28 [2])))) : ((max((arr_28 [0]), (arr_28 [1])))));
        /* LoopNest 2 */
        for (int i_15 = 3; i_15 < 13;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                {
                    var_34 = (arr_9 [i_14 - 3] [i_15] [i_16] [i_15]);
                    var_35 = (max(var_35, ((max((arr_47 [i_14] [i_14]), (min(-1, (arr_18 [i_16] [i_16] [i_15] [i_14]))))))));
                    var_36 = (arr_25 [i_14 - 3] [i_14 - 3]);
                    var_37 = (max(var_37, (arr_3 [0])));
                    var_38 += (max((arr_44 [i_16]), (arr_3 [18])));
                }
            }
        }
    }
    var_39 = (((((max(var_11, var_17)))) ? var_6 : var_13));
    var_40 = (min((max(((-9223372036854775797 ? 3039 : 8356081398676814019)), var_2)), ((max(var_16, ((var_15 ? var_16 : var_14)))))));
    #pragma endscop
}
