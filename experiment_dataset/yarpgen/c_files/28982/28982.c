/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, var_6));

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        arr_8 [i_0] [i_1] = ((((min(var_6, -var_6))) ? ((min(var_4, (((21144 ? var_6 : 21151)))))) : var_0));
                        arr_9 [i_0] [i_1] [1] [1] [i_1] = (((min(var_4, ((~(arr_5 [i_0] [i_0] [i_0] [i_0]))))) ^ ((((min(161, var_6)))))));
                        arr_10 [i_0] [i_1 + 2] [i_2] [i_3] [i_0] [i_1] = (((((arr_5 [i_3 + 1] [3] [i_1 - 3] [i_1 - 3]) ? (arr_1 [i_2]) : (arr_3 [i_2 + 2]))) & ((((arr_7 [i_0] [i_1 - 1] [i_1] [i_2] [16] [i_3]) ? 0 : ((var_8 ? var_0 : (arr_2 [i_3 + 1] [i_1 - 3] [i_1]))))))));
                        var_12 = ((((-(arr_0 [i_2 - 1] [7]))) - (94 - 24512)));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_13 [i_1] = ((((((arr_7 [i_4] [10] [i_1] [i_1] [i_0] [i_0]) ? (arr_0 [i_0] [i_1 + 1]) : (arr_0 [i_1] [i_1])))) * (((var_1 / var_5) ? (var_6 / var_0) : var_7))));
                            var_13 = (((min((min(-2278714415309581277, 117)), ((min(24512, var_2))))) == var_3));
                            arr_14 [i_4] [i_1] [i_2] [i_1] [i_0] = ((var_0 > (((((arr_3 [i_1 + 1]) > (arr_3 [i_1 - 1])))))));
                            var_14 = (min((((((-(arr_6 [i_4] [i_3 - 1] [i_2] [i_2 + 2] [i_1 + 1] [i_0]))) == (arr_5 [i_0] [i_1] [i_2 + 1] [i_3 - 1])))), (((((var_4 ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : var_2))) ? (arr_2 [i_0] [i_0] [i_1]) : 161))));
                            arr_15 [i_0] [i_0] [i_1] [i_3] [i_4] = var_8;
                        }
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_18 [i_0] [i_1] [8] = (~105);
                        var_15 = (min(var_15, var_6));
                        arr_19 [i_5] [i_1] [4] [i_1] [i_0] = var_1;
                        var_16 = (min(-2039724168, ((((min(var_2, (arr_5 [16] [i_1] [i_1] [i_1 + 1])))) ^ ((-(arr_2 [1] [i_1 + 2] [i_1])))))));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            arr_26 [6] [2] [i_1 - 2] [i_1] [i_1 - 2] [i_6] [2] = ((+(((arr_12 [i_0] [i_1] [i_2 - 1] [i_6] [i_7]) ? (arr_25 [i_1] [i_2] [i_6]) : var_7))));
                            arr_27 [i_0] [i_1] [i_1] [i_1] [0] = (1 | var_2);
                        }
                        for (int i_8 = 3; i_8 < 16;i_8 += 1)
                        {
                            var_17 = (max(var_17, ((((((var_6 ? var_8 : (arr_28 [i_1 - 1] [i_1 - 1] [i_2 + 1] [i_8 - 3] [6])))) ? (((((arr_21 [8] [i_1 + 2] [i_2] [i_2] [i_2] [i_8 + 1]) / 41024)))) : 1023)))));
                            arr_32 [i_0] [i_2] [i_1] [i_6] [i_1] [i_2 + 1] = ((((arr_16 [i_1 - 1]) - (arr_16 [i_1 + 1]))));
                            arr_33 [i_0] [i_1] [i_2 + 2] = (((((arr_23 [i_0] [i_1] [15]) ? var_5 : var_6)) / -var_2));
                            arr_34 [2] [i_0] [i_2] [16] [i_0] &= (min((var_4 - var_5), (((arr_4 [i_2 + 2] [i_6] [i_8]) ? var_4 : (arr_2 [1] [i_6] [1])))));
                        }
                        var_18 = (arr_30 [i_1] [i_0] [i_1] [i_0] [6] [i_0] [14]);
                        var_19 = ((~var_6) != (min((arr_22 [i_1] [i_1 - 3] [i_2] [i_1 - 1] [i_2 + 1] [i_2]), ((min((arr_20 [i_6] [i_2] [13] [1] [5] [i_0]), 1))))));
                        arr_35 [9] [9] [i_0] [9] [i_1] = (((((var_9 ? (((arr_16 [i_0]) ? var_0 : var_9)) : (((var_5 / (arr_3 [i_0]))))))) ? (arr_2 [i_1] [i_1] [i_1]) : (arr_7 [i_0] [i_0] [i_1] [i_1 - 3] [i_2] [i_6])));
                        var_20 -= (((((!((((arr_29 [10] [10] [i_1 + 2] [i_1 + 1] [10] [i_1 - 1] [i_1 + 2]) ^ 1)))))) == var_9));
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        arr_39 [12] [i_2 + 1] [i_1] [i_1] [i_0] [i_0] = ((((min(var_0, ((((arr_4 [i_9] [i_1] [6]) || var_6)))))) && var_6));
                        arr_40 [i_1] = ((+(((min((arr_2 [i_1] [i_1] [i_1]), var_9)) / (arr_28 [i_0] [i_1] [3] [i_2] [i_1])))));
                    }
                    var_21 = (((-11537 + 9223372036854775807) >> (var_9 - 1225275321)));
                }
            }
        }
    }
    var_22 = (min(var_4, ((min(1, (22 / 255))))));
    var_23 = (((!var_8) << (((var_1 && var_6) ? (var_5 ^ var_5) : (var_7 >= var_7)))));
    var_24 = -var_8;
    #pragma endscop
}
