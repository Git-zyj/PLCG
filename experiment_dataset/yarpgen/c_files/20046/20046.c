/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_7 ^ var_2);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0 - 1] = ((((min((arr_1 [i_0] [i_0]), (((var_9 ? (arr_0 [i_0] [i_0]) : 63)))))) ? var_5 : (((max((arr_0 [i_0] [i_0]), -64))))));
        var_21 = ((((var_14 ? (((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : 0)) : (arr_2 [i_0]))) >> (((arr_0 [i_0] [i_0]) - 44519))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    {
                        var_22 = (max(var_22, var_4));

                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            var_23 = (arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] [i_2] [i_4]);
                            arr_17 [i_4] [i_4] [i_2] [i_4] [i_4 - 1] = ((((((arr_12 [i_4 + 2] [i_3] [i_2]) ? (arr_6 [i_4 + 1] [i_0] [i_0]) : (arr_10 [0] [i_2 - 1] [i_0] [i_0]))) & (max((arr_0 [i_0] [i_0]), (arr_4 [i_4]))))));
                            arr_18 [i_4] [i_1] [i_2] [i_3 - 1] = (max(-1, (max((((arr_15 [i_0] [i_0] [i_1] [i_2] [i_0] [i_4 - 1] [i_4]) - 1)), var_6))));
                        }
                    }
                }
            }
            var_24 = (((arr_11 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]) ? var_0 : (max(((((arr_7 [15] [15] [i_1]) && (arr_6 [i_0] [i_1] [0])))), (max(var_8, 13267447737941334305))))));
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_25 [i_0] [i_1] [i_1] [i_5] [i_5] = 2168040126;
                        arr_26 [i_5] [i_1] [i_1] [i_5] = (min((arr_16 [i_0]), 0));
                    }
                }
            }
        }
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_25 = var_9;
                            var_26 = (((((min((arr_27 [i_7]), 2126927178)))) || (((arr_19 [i_0 - 1]) || (arr_19 [i_0 - 1])))));
                            var_27 = ((((0 & ((var_17 ? (arr_32 [i_7]) : (arr_12 [i_0] [i_8] [i_9]))))) & (((arr_0 [1] [i_7 + 2]) & ((var_0 ? 1146709106 : (arr_22 [5] [5] [i_0] [i_0])))))));
                        }
                    }
                }
            }
            arr_42 [i_7] [i_7] [i_7 + 3] = (((((((arr_20 [i_0] [i_0] [i_7] [i_7]) || (arr_10 [i_0] [i_7] [i_7] [i_7 - 1]))) ? 65527 : (((arr_12 [6] [i_7] [i_7]) ? (arr_12 [i_7] [i_7] [i_0]) : (arr_13 [17] [17]))))) % ((((max((arr_13 [13] [i_0]), (arr_31 [i_7])))) + ((4743746630130791195 ? (arr_31 [i_0]) : 1))))));
        }
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            arr_45 [i_0] = ((((((((arr_34 [i_11] [i_11] [i_11] [11]) - 57))) ? (arr_2 [i_0 - 1]) : (((arr_15 [i_11] [i_11] [i_11] [i_11] [i_11] [7] [i_0 - 1]) + (arr_21 [i_0] [0] [i_0]))))) - 62334));
            arr_46 [i_0 - 1] = arr_40 [i_11] [i_0 - 1] [i_0 - 1] [i_11] [i_0 - 1];
            var_28 = ((((((arr_4 [i_0 - 1]) ? (arr_35 [i_0 - 1]) : var_7))) ? (((arr_35 [i_0 - 1]) + (arr_37 [i_0 - 1] [i_11]))) : ((var_5 ? (arr_37 [i_0 - 1] [i_11]) : (arr_4 [i_0 - 1])))));
            arr_47 [i_0] [i_11] [i_11] = var_0;
        }
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            var_29 = (((((-(arr_7 [i_0] [i_12] [i_12])))) ? 1 : ((1 * (max((arr_51 [i_12] [i_12] [15]), 255))))));
            arr_52 [i_0] [i_0] = (((((var_1 ? (((arr_6 [i_0] [i_12] [i_12]) | 15826215659236181890)) : var_11))) ? (arr_35 [i_0]) : 1));
        }
        var_30 *= (arr_19 [i_0]);
        arr_53 [3] = 0;
    }
    for (int i_13 = 3; i_13 < 15;i_13 += 1)
    {
        var_31 = (max(var_31, ((min(((((arr_6 [i_13] [11] [i_13]) ? ((4294967295 ? var_7 : var_6)) : var_8))), (arr_40 [8] [i_13] [i_13 - 2] [i_13] [8]))))));
        var_32 = ((155 ? (min(9223372036854775807, (max(var_14, 1)))) : ((min(65505, (arr_50 [i_13] [2] [i_13]))))));
    }
    var_33 += ((((min((var_4 || var_10), var_11))) || ((((var_16 && var_7) ? 1898719572 : var_4)))));
    #pragma endscop
}
