/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = var_11;
    var_14 = (((!var_1) >> (((min((113 | var_9), (((var_11 + 2147483647) << var_3)))) - 90))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    {
                        var_15 = (((((1975471774 ? var_3 : var_9))) ? (min(((var_5 & (arr_7 [i_3] [i_2] [9] [i_0]))), (-1 <= var_5))) : ((((14948965463445162540 != ((~(arr_1 [i_0] [i_0])))))))));
                        var_16 = 19054;
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 3; i_4 < 23;i_4 += 1)
        {
            var_17 = 8089232326294760837;
            arr_13 [i_0] [i_4 + 1] = ((-(arr_3 [i_4 - 1] [i_4 - 3])));
            arr_14 [i_4] = 26576;

            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    var_18 = ((248 >> (-28947 + 28959)));
                    var_19 = ((-(((2566013166 > (arr_5 [i_0] [i_0]))))));
                }
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_20 -= var_10;
                            arr_25 [i_0] [i_0] [i_5 + 1] [i_7] = 95;
                            arr_26 [i_0] [i_4] [i_5] [i_7] [i_8] = 1;
                            arr_27 [i_4] [i_4] [i_7] = ((arr_12 [i_5 + 1] [i_5 + 1]) + (arr_12 [i_5 + 1] [i_5 + 1]));
                        }
                    }
                }
            }
            for (int i_9 = 1; i_9 < 22;i_9 += 1)
            {
                arr_30 [i_9 + 1] [i_9] [i_9] [i_0] = 3497778610264389074;
                arr_31 [i_9] [i_0] [i_9] = -119;
                var_21 = (((arr_22 [21] [i_9 + 2] [i_4 - 1] [i_4] [i_4 - 3] [i_4]) ? (arr_22 [i_9 + 2] [i_9 + 2] [i_4 - 3] [i_4] [i_4] [i_4]) : (arr_22 [i_9 + 1] [i_9 + 2] [i_4 - 2] [i_4] [i_4 - 2] [i_4])));
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 21;i_11 += 1)
                    {
                        {
                            var_22 = (max(var_22, ((((-19035 ? -8320050530222422654 : 1))))));
                            var_23 = (((10357511747414790755 + 46344) / 119));
                            var_24 = var_10;
                            var_25 = 16724266126031661513;
                        }
                    }
                }
                var_26 *= (((arr_7 [i_0] [i_0] [i_9 + 1] [i_9 - 1]) < var_9));
            }
            for (int i_12 = 3; i_12 < 22;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 22;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        {
                            arr_46 [i_12] [i_4 + 1] [i_12] [i_13] [15] = ((!(arr_42 [i_4 - 2] [i_4 - 2] [i_4] [i_12 + 1] [i_13 - 2])));
                            var_27 = (((arr_34 [i_12 + 1] [i_12 + 1] [i_12 - 3] [i_12]) % (arr_6 [i_4 - 3] [i_12 + 2] [i_13 + 1])));
                            arr_47 [i_0] [i_4] [i_12] [i_13 + 2] [i_14] = 1;
                        }
                    }
                }
                var_28 = (arr_23 [i_12] [i_12 - 1] [i_4 - 2] [i_12]);
            }
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                arr_50 [1] [i_4 - 3] [i_15] [i_15] = var_7;
                arr_51 [19] [i_4] [9] = arr_19 [i_15] [i_0] [i_0] [i_0];
            }
            var_29 &= (((((var_4 ? 1484251292 : (arr_4 [i_4] [i_0])))) ? (arr_34 [i_4 + 1] [i_4] [i_4 - 3] [22]) : (~-21252)));
        }
        var_30 = ((((!(arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? ((max((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]), var_11))) : (((!(arr_20 [i_0] [i_0] [i_0] [9] [9]))))));
        arr_52 [i_0] [i_0] = (arr_16 [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_16 = 2; i_16 < 23;i_16 += 1)
    {
        var_31 = var_10;
        var_32 = (((((arr_54 [i_16]) % var_4)) | var_0));
        var_33 = (min(var_33, 110));
        var_34 = (!var_9);
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 25;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    {
                        var_35 -= (((arr_61 [i_16 + 1]) >= (arr_61 [i_16 + 2])));
                        arr_63 [i_16] [i_16] [i_16] [i_16] [i_16] [0] = -3851776437481900348;
                    }
                }
            }
        }
    }
    #pragma endscop
}
