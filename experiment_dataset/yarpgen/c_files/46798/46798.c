/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_0] = var_12;
            arr_7 [i_0] [9] = (i_0 % 2 == zero) ? (((var_0 << (arr_4 [i_0] [i_1])))) : (((var_0 << (((arr_4 [i_0] [i_1]) - 29)))));
            arr_8 [i_0] [i_0] = (arr_2 [i_0]);
            var_17 = (((arr_4 [i_0] [i_0]) << (((arr_3 [i_1] [i_0]) - 1473455559))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_18 = (max(var_18, ((((arr_3 [i_2] [i_2]) * (arr_3 [i_0] [i_1]))))));
                            arr_17 [i_0] [2] [i_4] [i_3] [i_4] [i_4] = (((arr_12 [i_0] [i_1] [i_2] [3]) ? (arr_2 [i_3]) : (arr_0 [6])));
                            var_19 = (arr_11 [i_3] [i_2] [3] [6]);
                            arr_18 [i_0] = ((var_7 || (arr_5 [i_2] [i_4])));
                            var_20 = (~var_10);
                        }
                        var_21 = (((arr_13 [i_0] [i_1] [i_2] [4] [i_3]) - (arr_13 [i_0] [i_1] [i_2] [i_3] [i_1])));
                        var_22 ^= (((arr_0 [i_3]) || (((var_1 ? (arr_1 [1]) : var_1)))));
                        var_23 *= (((arr_3 [i_3] [i_1]) ? var_10 : (arr_3 [i_1] [i_0])));
                        arr_19 [i_0] [i_0] = ((!(((var_5 ? (arr_4 [i_0] [i_0]) : var_6)))));
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            arr_23 [i_0] = ((~(arr_20 [1])));
            arr_24 [i_0] [i_5] [i_0] = (arr_15 [i_5] [i_5] [i_0] [i_0] [i_0]);
        }
        var_24 = var_7;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    {
                        arr_38 [i_6] [i_7] [i_7] [i_6] = arr_27 [i_6] [i_6];
                        var_25 = ((!(arr_34 [i_6] [i_6 + 1] [i_6])));
                    }
                }
            }
            var_26 += (((arr_34 [1] [4] [i_7]) ? ((var_1 << (var_4 - 203))) : ((((arr_27 [10] [1]) ? var_13 : 76)))));
            arr_39 [i_7] [i_6] = (var_15 && (arr_27 [i_6] [i_6 + 1]));
            var_27 = 12;
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            arr_43 [i_6] [i_6] = (!-876243923);
            var_28 = (min(var_28, var_0));
        }
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    {
                        arr_52 [i_13] [i_11] [i_6] [i_13] = ((~((var_10 ? var_13 : var_8))));
                        arr_53 [i_6] [i_11] = ((var_6 ? (arr_29 [i_6]) : var_7));
                        var_29 = ((~((var_10 ? (arr_36 [i_6] [i_11] [10] [i_11] [10]) : 3844374284752961711))));
                    }
                }
            }
            var_30 = (max(var_30, (arr_33 [11] [i_11])));
            arr_54 [i_6] [i_6] = (arr_41 [i_6 + 1]);
        }
        arr_55 [i_6] = (((-876243926 && var_2) && var_9));
        var_31 = (+-472055069);
        arr_56 [i_6] = (((((675044971 ? (arr_33 [1] [i_6 + 1]) : (arr_36 [23] [i_6 + 1] [1] [i_6 + 1] [i_6])))) || (((arr_51 [i_6 + 1] [i_6 + 1] [i_6]) && var_10))));
    }
    var_32 *= var_15;
    #pragma endscop
}
