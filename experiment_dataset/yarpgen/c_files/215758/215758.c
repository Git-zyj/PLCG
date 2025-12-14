/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (((((1 ? var_13 : (arr_0 [i_0])))) ? ((-var_0 | (arr_4 [i_0] [i_0]))) : (arr_5 [i_1] [i_1] [i_1])));
                arr_6 [i_1] = (arr_4 [i_0] [i_1]);
                arr_7 [i_0] [i_1] = (arr_5 [i_0] [i_1] [i_1]);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_18 = (min(var_18, ((!(arr_11 [i_2 + 2] [i_2])))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_19 = (max(var_19, ((((((1 ? var_14 : (arr_14 [i_2] [i_2] [i_4])))) ? (((255 > (arr_15 [i_2 + 2] [i_3] [i_4])))) : (arr_12 [i_3]))))));

                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        var_20 += (((arr_15 [i_3] [i_3] [i_3]) ? (arr_15 [i_4] [i_3] [i_2 + 2]) : (arr_15 [i_5 - 1] [i_3] [i_2 + 1])));
                        arr_20 [i_2] [i_4] [i_5] = 1;
                        var_21 = (((((arr_12 [i_4]) ? (arr_19 [i_3] [23]) : (arr_9 [i_2])))) ? 9223372036854775807 : (arr_19 [i_4] [i_3]));
                    }
                    var_22 = (max(var_22, (arr_9 [i_2])));
                    arr_21 [i_2 - 1] [i_3] [i_4] = ((2171450579 < (arr_10 [i_2 + 3] [i_2 + 3])));
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        var_23 = (((arr_9 [i_7]) == (((((var_13 >> (var_1 - 17392409490820032165))) == var_3)))));
                        arr_32 [i_7] = (((arr_23 [13] [i_9]) ? ((-(arr_14 [i_7 - 1] [i_7 - 1] [i_7 - 1]))) : (arr_23 [i_6 + 2] [i_6 + 2])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    var_24 = ((-(((!(arr_14 [i_6] [9] [i_11]))))));
                    arr_37 [i_10] [i_10] = ((1 ? 21474 : (((!(0 == 9223372036854775807))))));
                }
            }
        }
        var_25 = ((7 ? (arr_14 [i_6] [i_6] [i_6]) : (((arr_25 [1] [i_6 + 3] [i_6 + 3]) ? (min((arr_22 [16]), var_1)) : -725522284690064121))));
    }
    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        var_26 = (max(((7 ? var_7 : 1)), 1));
        arr_42 [i_12] = ((((min(1, 9223372036854775807))) ? ((((((1 ? -7 : (-9223372036854775807 - 1)))) ? var_7 : (1 - 1)))) : (((arr_35 [i_12] [i_12] [13] [i_12]) ? (arr_36 [i_12] [i_12]) : (arr_35 [i_12] [i_12] [i_12] [i_12])))));
        var_27 = (arr_40 [i_12]);
        arr_43 [i_12] [i_12] = var_5;
    }
    var_28 = var_14;
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 0;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            for (int i_15 = 4; i_15 < 19;i_15 += 1)
            {
                {

                    for (int i_16 = 1; i_16 < 20;i_16 += 1)
                    {
                        arr_53 [i_13] [i_13] [i_13] [i_13] = (((arr_10 [i_13 + 1] [i_15]) || ((((((arr_50 [i_16]) ? (arr_48 [i_14]) : (arr_16 [i_14] [i_15 + 4] [i_16]))) * (!1))))));
                        arr_54 [i_16] [1] [1] [i_14] [i_13] = ((var_11 ? (arr_48 [1]) : (((!((min((arr_13 [12]), var_9))))))));
                        var_29 = (min(var_29, ((!((((~(arr_48 [10])))))))));
                        arr_55 [i_13] [15] [15] [21] = var_4;
                        var_30 = (arr_19 [i_13] [i_14]);
                    }
                    var_31 = (max(var_31, (arr_29 [6])));
                    arr_56 [i_13] [i_13 + 1] [i_13] = var_9;
                }
            }
        }
    }
    var_32 = ((!(!var_4)));
    #pragma endscop
}
