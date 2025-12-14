/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_10 ? var_10 : -1));
    var_20 = 3427260391420008249;
    var_21 = var_15;
    var_22 = ((((((((var_18 ? var_11 : var_11))) ? -174123169 : var_8))) ? ((-((-2147483635 ? -1338480934 : 1)))) : var_17));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_0] = (max((!var_15), (((~2300091135589704161) ? (1 && 17740811533855111165) : (arr_0 [i_0] [i_2])))));

                    for (int i_3 = 4; i_3 < 13;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [13] [i_2] [i_3] [i_4] = 140737488355326;
                            var_23 = ((((max(((-7042814164210251190 ? (arr_8 [14] [i_0] [i_0] [i_2] [i_3] [1]) : (arr_4 [i_2] [i_0] [7]))), 2147483647))) ? var_1 : 1));
                            arr_16 [i_0] [i_4] [1] [i_3 + 2] [i_4] |= (min(17474668482453187227, ((min(14958, 1)))));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_3] [i_0] = (max(((max(var_16, var_5))), ((var_7 ? (arr_18 [i_3 - 3] [i_3 - 4]) : (arr_18 [i_3 + 1] [i_3 - 1])))));
                            var_24 |= (((((arr_2 [i_3 - 1]) <= var_5)) ? 16183 : (min(30028, var_4))));
                            var_25 = ((((((1 == (arr_13 [i_3 - 1] [i_3 - 4] [i_3 - 4] [12] [i_5] [i_3 - 1]))))) % ((((max(var_5, var_16))) ? (((var_4 ? (arr_4 [i_0] [i_0] [i_0]) : var_13))) : (((arr_4 [1] [i_0] [i_5]) & (arr_11 [i_5])))))));
                            var_26 |= ((var_2 >= ((var_0 ? ((var_13 & (arr_7 [i_0] [i_1] [i_2] [i_3] [i_5] [i_5]))) : (~215)))));
                        }
                        arr_21 [7] [i_1] [i_2] [i_3 + 2] [i_0] = (((~(arr_8 [0] [3] [i_0] [i_2] [i_2] [i_3 - 4]))));
                        arr_22 [i_0] [i_3] = var_6;
                    }
                    for (int i_6 = 4; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        arr_27 [i_0] [i_1] [i_1] [i_0] = var_9;
                        var_27 &= (((arr_18 [i_0] [i_2]) ? (((var_7 ? ((max((arr_12 [i_0] [i_1] [i_1] [i_1] [i_2] [i_6 - 3] [i_6 - 2]), var_6))) : var_8))) : (min(1132381253837888503, (max(1922151247, (arr_19 [i_2])))))));
                        var_28 = ((4294967293 ? -117 : 3801));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        arr_34 [i_0] [i_7] [i_8] [i_9] = var_5;
                        arr_35 [i_0] [i_7] [i_0] [i_9] = (((arr_31 [i_0] [i_7] [i_8] [i_9]) ? 15 : (((arr_1 [i_0]) ? (((var_9 + (arr_13 [i_0] [i_0] [i_7] [i_7] [i_8] [i_9])))) : 17314362819871663105))));
                    }

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_29 ^= (arr_32 [i_0] [i_7] [i_7]);
                        var_30 = (((max(((-(arr_9 [i_0] [i_7] [13] [i_10]))), (((var_10 ? var_2 : (arr_23 [i_0] [i_0] [i_0] [1] [i_8] [i_10]))))))) ? ((-4000 & ((max((arr_36 [i_0] [i_0] [i_0] [i_0] [i_10] [i_10]), 0))))) : (arr_28 [i_7]));
                        var_31 = ((min(((3346724804 ? 32767 : 10477227098615262096), var_3))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
