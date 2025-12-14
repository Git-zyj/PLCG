/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_3;
    var_17 = var_0;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = ((((121 ? -516627905 : ((512 ? 1183307193 : 3111660103)))) ^ (~var_11)));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_14 [12] [i_1] [18] [i_1] [12] [i_2] [i_1] = var_5;
                            var_19 = (var_12 <= var_14);
                        }
                    }
                }
            }
            var_20 = (((arr_6 [i_0] [i_0] [i_0]) ? var_7 : ((var_1 ? (((1167491863 ? 975392461 : 65535))) : ((1648634317 ? var_8 : var_6))))));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_21 = ((!((max(var_13, (arr_9 [i_0]))))));
            var_22 = ((((((arr_15 [i_0]) / (var_3 / var_5)))) ? ((-(53575 / 1167491878))) : var_14));
            var_23 += var_11;
        }

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_24 = ((((((26 ? 9126 : 21832)))) ? var_8 : ((var_8 ? var_5 : (arr_11 [i_0] [i_0] [i_0] [i_6] [i_6] [i_0])))));
            arr_19 [i_6] = ((((!(arr_16 [i_0] [i_0] [i_6]))) ? ((min((arr_16 [i_6] [i_6] [i_0]), var_1))) : (((arr_9 [i_6]) ? (arr_4 [i_6] [i_0]) : (arr_18 [i_6] [i_6] [i_0])))));
            arr_20 [i_0] [i_6] [i_0] = var_15;
        }
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {

            for (int i_8 = 1; i_8 < 24;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 24;i_10 += 1)
                    {
                        {
                            var_25 = var_8;
                            var_26 += var_10;
                            arr_30 [17] [17] [17] [i_9] [i_9] [i_7] = ((var_2 > ((max((arr_23 [12] [i_7 + 2] [i_8] [i_9]), var_2)))));
                        }
                    }
                }
                arr_31 [i_8 + 1] [i_7] [i_0] = (var_0 && var_11);
            }
            var_27 = max(((((((1 ? (arr_26 [i_7] [13] [i_0] [13] [i_0] [i_0]) : var_7))) || 1167491863))), (((arr_7 [i_7 + 3] [i_7 + 2] [i_7] [i_7 + 2]) ? ((-(arr_3 [i_0] [i_7]))) : (arr_16 [i_7] [i_7] [19]))));
            var_28 = (max(((28756 ? 0 : (arr_12 [i_7] [i_7 - 1] [i_7 + 3] [i_7] [22] [22]))), (((var_7 ? (arr_7 [i_7 + 1] [i_7] [i_7 + 1] [i_7 - 1]) : (arr_3 [16] [16]))))));
        }
        arr_32 [i_0] = (((var_11 ? var_5 : (arr_12 [i_0] [12] [i_0] [i_0] [i_0] [i_0]))));
    }
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {

        for (int i_12 = 2; i_12 < 8;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 7;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 7;i_15 += 1)
                    {
                        {
                            arr_49 [i_15] [i_12] [i_12] [i_15] [i_15] &= (arr_1 [i_14 + 3]);
                            var_29 = (arr_21 [i_14] [i_14]);
                            var_30 = (min((arr_4 [i_14 + 3] [i_12 - 1]), (arr_36 [i_14 - 1] [i_12 - 2])));
                        }
                    }
                }
            }
            arr_50 [i_12] = (~var_10);
            arr_51 [i_11] [i_11] [i_11] = (arr_23 [i_11] [i_12] [i_12] [i_11]);
            var_31 = ((0 ? ((((arr_33 [i_11]) || (((-582860460 ? 10313 : 5881)))))) : 2));
            var_32 = (max(var_32, (arr_17 [i_12])));
        }

        for (int i_16 = 2; i_16 < 9;i_16 += 1)
        {
            var_33 = ((~((var_13 ? var_5 : 1167491878))));
            var_34 |= (max(((((((var_10 << (((((arr_6 [16] [i_16] [i_16]) + 126)) - 3))))) ? (max(var_14, var_5)) : ((((arr_8 [i_16] [i_16] [i_11]) ? 174 : var_4)))))), var_7));
        }
        var_35 = 47;
    }
    for (int i_17 = 3; i_17 < 19;i_17 += 1)
    {
        var_36 += (((((var_8 % (~var_2)))) ? var_11 : var_6));
        var_37 = (min((((((arr_29 [12] [i_17] [i_17] [2] [12]) - (arr_2 [i_17]))) >> var_2)), (arr_26 [i_17] [16] [i_17] [i_17] [9] [9])));
    }
    for (int i_18 = 3; i_18 < 16;i_18 += 1)
    {
        var_38 = var_4;
        var_39 = var_12;
    }
    var_40 = (((~385260550) ? (((var_11 && (((var_1 ? var_1 : var_14)))))) : ((-(var_0 % var_8)))));
    #pragma endscop
}
