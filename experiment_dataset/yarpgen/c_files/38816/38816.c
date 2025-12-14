/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (((var_10 ? ((var_6 ? var_4 : var_10)) : var_3)));
    var_13 = (((((~(min(var_4, var_11))))) ? (((((1112797168 ? var_3 : 669955983))) ? var_8 : (var_2 | var_8))) : (((!(((var_0 ? var_8 : var_9))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_14 = (i_0 % 2 == zero) ? ((((((((((arr_10 [i_0 - 1] [i_1 - 3] [i_2] [i_4]) ? (arr_6 [i_0] [i_0] [19]) : var_7))) - (arr_9 [i_0 - 1] [i_0] [i_2]))) + 9223372036854775807)) << ((-810134016 * (var_5 && var_3))))) : ((((((((((((arr_10 [i_0 - 1] [i_1 - 3] [i_2] [i_4]) ? (arr_6 [i_0] [i_0] [19]) : var_7))) - (arr_9 [i_0 - 1] [i_0] [i_2]))) - 9223372036854775807)) + 9223372036854775807)) << ((-810134016 * (var_5 && var_3)))));
                                arr_14 [i_0] [i_0] = ((((((!(arr_2 [i_0]))))) % (((arr_1 [i_0 - 1]) % ((min((arr_10 [i_0] [i_2] [i_0] [i_4]), var_3)))))));
                                var_15 = ((min(var_7, (arr_10 [i_0 - 1] [i_1 - 3] [i_1 - 3] [i_4 + 2]))));
                                var_16 = ((((((var_11 == var_6) ? (((arr_2 [i_0]) ? (arr_13 [i_0] [i_0]) : (arr_2 [i_0]))) : (arr_13 [i_0 - 1] [i_4 - 2])))) ? -62 : (((((var_5 ? var_10 : (arr_13 [i_0] [10])))) ? ((296323338 ? 5310984773554528943 : 296323341)) : var_11))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_2] [i_6] = (((arr_9 [i_1] [i_0] [i_6 + 2]) ? (arr_3 [i_0]) : (((((5148220658611442396 ? 195 : 8796025913344))) ? var_3 : var_1))));
                                arr_21 [i_0] [i_1] [i_2] [i_0] [i_5 + 2] [i_6] = (arr_10 [i_1] [i_2] [i_1] [10]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                arr_33 [i_7] [i_8] [i_8] [i_8] [14] [i_11] = ((((max((max(8796025913342, var_6)), (((arr_30 [i_7] [i_8] [i_9]) ? 48394 : -4623275933415215680))))) && ((!(arr_22 [i_10])))));
                                arr_34 [i_7] [i_7] = (max((((((~(arr_24 [i_8] [i_8])))) ? ((~(arr_22 [i_7]))) : (arr_31 [i_11] [i_10] [i_7] [i_7]))), (max(((max((arr_23 [i_11]), (arr_27 [i_7] [i_7] [i_7])))), (min((arr_22 [i_10]), var_1))))));
                            }
                        }
                    }
                    var_17 = (((((arr_30 [i_7] [i_7] [i_9]) ? (arr_30 [i_9] [i_8] [i_7]) : (arr_30 [i_7] [i_8] [i_9])))) ? ((max((arr_30 [19] [i_7] [i_7]), (arr_30 [i_7] [i_8] [i_9])))) : (((arr_30 [i_7] [i_8] [i_9]) - (arr_30 [i_7] [i_8] [i_9]))));
                    arr_35 [i_9] [5] [i_7] = (max((((arr_25 [i_7] [23] [i_9]) ? (arr_30 [i_7] [i_7] [i_7]) : ((max((arr_26 [i_7]), (arr_31 [i_7] [i_8] [i_9] [i_9])))))), ((((min((arr_32 [14] [i_8] [15] [15] [i_7]), (arr_30 [i_7] [23] [i_9])))) ? var_1 : ((max(0, 61922)))))));
                }
            }
        }
    }
    #pragma endscop
}
