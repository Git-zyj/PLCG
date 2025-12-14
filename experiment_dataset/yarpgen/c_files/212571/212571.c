/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_11 = (((((((arr_0 [i_0] [i_0 + 2]) ? 2 : var_0)))) ? (arr_1 [i_0]) : ((((!(arr_1 [i_0])))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_12 *= (arr_3 [2]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_13 = (((arr_1 [i_0]) & (arr_8 [i_1] [i_1] [i_0] [i_0 + 3])));
                        var_14 = ((((((arr_8 [5] [i_1] [i_0] [12]) ? var_6 : (arr_4 [i_0 + 1] [i_1])))) ? (arr_7 [i_0] [i_1]) : ((var_5 ? (arr_10 [i_0] [i_1] [i_2] [i_0]) : 39094))));

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_15 += ((!(arr_10 [12] [i_0 - 1] [1] [i_3])));
                            var_16 |= ((var_2 ? (arr_13 [i_0] [i_3] [i_2] [i_0 + 3] [i_0] [i_3] [i_0]) : (arr_3 [i_3])));
                            var_17 = 28392;
                            var_18 &= (arr_5 [i_0 + 1] [i_2] [i_3]);
                        }
                        var_19 = (arr_6 [9] [i_0 + 2] [i_0]);
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_20 &= ((~(arr_9 [8] [i_0] [i_0 + 2] [i_0 - 1])));
            var_21 |= ((-(arr_13 [1] [i_0] [i_0] [10] [i_0 + 1] [0] [0])));
            var_22 *= (arr_12 [i_0 + 2] [0] [i_0 + 2] [i_5] [i_0] [i_5] [i_5]);
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
        {
            arr_20 [i_0] = var_7;
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_23 = (max(var_23, ((((((arr_19 [i_6] [i_6] [i_7]) + (arr_16 [i_8]))) - -0)))));
                            var_24 = var_2;
                        }
                    }
                }
            }
            arr_30 [i_0] [i_6] &= (arr_14 [i_0] [i_6]);
        }
        for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
        {
            arr_33 [i_0] [6] = var_9;
            var_25 += (arr_9 [i_10] [i_10] [8] [6]);
        }
        arr_34 [i_0] [14] = ((288229276640083968 ? (((-((-288229276640083954 ? -1 : (arr_29 [i_0] [i_0 - 1] [10] [3] [i_0] [i_0] [i_0 + 1])))))) : (arr_19 [i_0] [i_0 - 1] [i_0])));
        var_26 *= (((((min(37167, -25)) ? ((var_5 ? (arr_3 [1]) : var_5)) : (arr_5 [i_0 + 2] [i_0 - 1] [i_0 + 2])))));
    }
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        var_27 = var_4;
        var_28 = (max(var_28, ((max((arr_36 [8]), 288229276640083956)))));
        var_29 *= (arr_36 [16]);
    }
    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        arr_41 [i_12] = (((((arr_1 [i_12]) ? (min(var_2, 4486007441326080)) : (arr_38 [i_12]))) < (arr_6 [i_12] [2] [i_12])));
        var_30 = (((((arr_31 [i_12] [i_12] [i_12]) ? var_6 : (arr_0 [i_12] [i_12])))) ? (((arr_4 [i_12] [i_12]) ? (arr_3 [i_12]) : (arr_4 [i_12] [i_12]))) : (arr_4 [11] [i_12]));
        var_31 = (arr_7 [i_12] [i_12]);

        for (int i_13 = 1; i_13 < 1;i_13 += 1)
        {
            var_32 = (max(var_32, (((((min((arr_39 [i_13 - 1]), (arr_27 [i_13 - 1] [0] [i_12] [i_13])))) ? (var_9 / 112) : (arr_25 [9] [9] [i_13] [i_13]))))));
            var_33 = (min((arr_7 [i_12] [i_13 - 1]), (arr_12 [i_12] [i_13 - 1] [5] [i_13 - 1] [i_12] [i_12] [i_12])));
            var_34 = (min(1, (arr_11 [i_12] [i_12] [i_12] [1] [i_12] [i_13])));
        }
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            var_35 = 40396;
            var_36 = ((576460752236314624 * ((-32 ? 246 : 2199014866944))));
        }
    }
    var_37 = (((((var_7 ? var_4 : var_1))) ? var_8 : var_9));
    #pragma endscop
}
