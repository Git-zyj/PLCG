/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = ((var_5 / (64515 + 23291)));
                arr_5 [i_0] = ((((arr_0 [i_1 - 2]) ? (arr_0 [i_0]) : (arr_0 [i_1 - 3]))) >= (arr_0 [i_0 + 3]));
            }
        }
    }

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {

            /* vectorizable */
            for (int i_4 = 4; i_4 < 18;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_18 -= ((~((23293 ? (arr_11 [15] [i_6 - 1]) : -705484350042797989))));
                            arr_20 [i_6] [i_2] [i_4] [18] [i_3] [i_3] [i_2] &= ((-30849513 && (-14698 < var_13)));
                            var_19 = ((-(~42245)));
                            var_20 = (min(var_20, (((~(arr_16 [i_5 + 1] [i_2 - 1] [i_4]))))));
                            var_21 = (1 > var_0);
                        }
                    }
                }
                arr_21 [i_4 - 1] [i_3] [12] = ((var_4 ? var_14 : ((~(arr_11 [i_4] [9])))));
                var_22 = -14720;
                var_23 = 553939377;
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_24 = ((0 ? (((((arr_6 [1] [i_7]) && 1)))) : var_10));
                            var_25 = (min(var_25, (((var_3 ? (!var_10) : 30849512)))));
                            arr_28 [i_2] [i_3 - 1] [18] [16] [i_7] [i_8] [1] = 23275;
                        }
                    }
                }
            }
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                var_26 = (-((~(arr_15 [18] [i_3 - 1] [i_9]))));
                var_27 = (arr_12 [i_2] [i_3] [6]);
                var_28 -= ((var_13 ? 3444359756 : (((-(arr_26 [i_2 - 1] [i_9 + 1] [i_3 - 1]))))));
            }
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                var_29 = (min(var_29, ((((1386904730 ? 18446744073709551615 : 42250))))));
                arr_34 [i_2 - 1] = (176 ? (arr_19 [i_2] [i_3] [i_10] [2] [i_10]) : -526426725);
                var_30 = var_15;
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 0;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 0;i_12 += 1)
                {
                    {
                        var_31 = ((((min((arr_6 [i_2 - 1] [i_11 + 1]), (((arr_22 [i_2] [2] [i_12] [1]) * (arr_7 [i_2])))))) && (((6996 ? 1 : 0)))));
                        arr_39 [10] [10] [i_11 + 1] [10] [i_12] [i_2 - 1] = ((var_13 < 1) ? (((arr_14 [i_2 - 1] [i_12 + 1] [i_12 + 1]) ? 23299 : (arr_14 [i_2 - 1] [i_12 + 1] [1]))) : ((((arr_13 [i_3 - 1] [i_11 + 1] [i_11 + 1]) > var_11))));
                    }
                }
            }
            var_32 = (max((((arr_11 [i_3 - 1] [i_2 - 1]) ? (arr_8 [i_3 - 1] [i_2 - 1]) : (arr_8 [i_3 - 1] [i_2 - 1]))), ((((~(arr_19 [i_3 - 1] [i_3] [1] [i_2] [i_2]))) * (1 * var_7)))));
            arr_40 [i_2 - 1] [i_2] = (((-(arr_33 [i_2 - 1] [i_2 - 1] [i_2] [1]))));
        }
        for (int i_13 = 2; i_13 < 18;i_13 += 1)
        {
            arr_43 [i_13] &= min((arr_38 [16] [i_2] [i_13] [12]), (~var_7));
            arr_44 [i_2 - 1] [i_2] = var_6;
        }
        var_33 = (((((arr_13 [i_2 - 1] [i_2] [i_2 - 1]) < (arr_13 [i_2 - 1] [i_2] [i_2 - 1]))) ? var_16 : (((((var_10 == (arr_9 [1] [1] [i_2 - 1]))) && (var_13 / var_2))))));
    }
    #pragma endscop
}
