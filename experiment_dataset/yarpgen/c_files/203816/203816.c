/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_7);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (~-13);
        arr_4 [i_0] = ((24 ? 32 : -13));
        arr_5 [i_0] [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_19 = 11;
        var_20 = (((arr_0 [i_1 - 1]) ? ((((((-1269134855 ? 26167 : 6))) ? -24516 : 17))) : (min(8039755152170061467, 239))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {

        for (int i_3 = 4; i_3 < 10;i_3 += 1)
        {
            var_21 = ((((((arr_13 [i_3 - 3] [i_3 + 3] [i_3 + 2]) ? var_7 : var_8))) ? (max(var_15, (((var_7 ? var_16 : (arr_13 [i_2] [i_3] [i_3])))))) : (65535 / 12)));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 9;i_5 += 1)
                {
                    {
                        var_22 = var_13;
                        var_23 = (min(var_23, (((((min(32767, 15))) ? ((24516 ? var_6 : -2017968871)) : -2147483636)))));
                        arr_21 [i_5] = (arr_19 [i_2] [i_5] [i_4] [i_5]);
                    }
                }
            }
        }
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            arr_24 [i_2] [i_6] [i_6] = (!30);
            arr_25 [i_2] = (min((((((7175 ? -3826189467557258480 : -1562))) ? (arr_11 [i_6 - 1]) : (!var_10))), var_5));
        }
        var_24 ^= (((((((((arr_1 [0] [0]) ? (arr_11 [i_2]) : var_9))) ? var_7 : var_7))) ? (((((22 ? -25 : 32763))) ? (((arr_12 [i_2] [i_2]) ? var_15 : var_0)) : var_8)) : (((65535 ? 0 : 243)))));

        for (int i_7 = 3; i_7 < 11;i_7 += 1)
        {
            var_25 = ((((((arr_22 [i_2] [i_7] [i_7 + 2]) ? (arr_22 [i_7] [i_7] [i_7 + 1]) : (arr_22 [i_7 - 3] [i_7 - 3] [i_7 - 3])))) ? (((arr_22 [i_7 - 2] [i_7] [i_7]) ? var_3 : -1269134855)) : ((3 ? -25 : 106))));
            var_26 += (arr_13 [i_2] [i_2] [1]);
            arr_28 [i_7] [i_7] = var_8;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 10;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            var_27 = (max(var_27, (((var_16 ? 18 : 15)))));
                            var_28 = ((((((var_6 ? var_14 : (arr_32 [i_2]))))) ? (31 > 29) : var_17));
                        }
                        arr_37 [i_7] [i_8] [i_7] = var_5;
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 10;i_14 += 1)
                    {
                        {
                            arr_49 [i_2] [i_2] [i_2] [1] [i_11] = ((-3826189467557258462 ? 32 : (-32767 - 1)));
                            arr_50 [i_11] [i_13] [i_12] [i_11] [i_11] = var_9;
                            var_29 -= (arr_17 [6]);
                            var_30 |= (((arr_7 [i_14 - 1]) ? ((1478 ? 106 : 33554431)) : (((!(arr_7 [i_14 + 1]))))));
                        }
                    }
                }
            }
            var_31 = (min(var_31, ((max(((0 ? 556476767 : 0)), (arr_0 [0]))))));
            var_32 = (max(var_32, var_17));
            arr_51 [i_11] = (~11943);
        }
        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            arr_55 [i_2] [i_15] |= var_11;
            var_33 = (min(var_33, ((max(((((arr_18 [i_2] [i_2] [10] [i_2]) >= ((var_1 ? (arr_38 [i_2] [i_15] [i_2]) : var_7))))), ((((((arr_7 [i_2]) ? (arr_36 [i_15] [8] [i_2] [4]) : var_15))) ? var_11 : (!var_12))))))));
        }
    }
    for (int i_16 = 0; i_16 < 22;i_16 += 1)
    {
        var_34 += var_11;
        var_35 = ((~((max(3, -25)))));
    }

    for (int i_17 = 3; i_17 < 15;i_17 += 1)
    {
        arr_62 [i_17] [i_17] = var_14;
        arr_63 [i_17] [i_17] |= -3;
    }
    #pragma endscop
}
