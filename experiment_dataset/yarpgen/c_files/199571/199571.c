/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 ^= (max(-var_6, ((max((arr_1 [i_0]), 123)))));
        var_14 *= (((~(arr_1 [i_0]))));

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            var_15 = (~(arr_1 [i_0]));
            var_16 |= ((max((-72 * var_6), (((arr_5 [i_0] [i_1 + 2]) >> (((arr_5 [i_0] [6]) - 14100819879740831228)))))) * (arr_2 [i_0] [i_1]));
        }
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            arr_8 [i_0] [i_0] = ((+(min((var_9 ^ var_11), var_2))));
            var_17 = (min(var_17, var_11));

            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                arr_12 [i_0] [i_0] [i_0] = ((!((((arr_11 [i_2 + 2] [i_0] [i_3 + 1]) / 14874921110342727890)))));
                arr_13 [i_0] [4] = (-(arr_7 [7] [i_0]));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_18 = (((var_4 & (arr_3 [i_0]))));
                            var_19 = (min((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_19 [i_0] [10] [i_3 - 2] [10] [i_2 + 1] [5])));
                            var_20 = (min((min((arr_7 [i_2 - 1] [i_3 + 1]), (arr_7 [i_2 - 1] [i_3 + 1]))), ((((var_4 / -81) < (arr_7 [i_3 + 1] [i_2 + 3]))))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {

                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    var_21 ^= (((arr_23 [i_2 - 2] [i_2 - 2] [i_7 + 1]) / (arr_9 [i_2] [10])));
                    var_22 = (arr_21 [i_7 + 2] [i_7 + 1] [i_7 - 1] [i_7 + 1]);

                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_23 = ((arr_24 [i_2 + 2] [7] [i_6] [i_2 + 2]) * var_11);
                        var_24 = (!var_10);
                        var_25 = (((13886377852280244059 - var_11) > (arr_1 [i_2 - 2])));
                        var_26 = var_12;
                    }
                    var_27 ^= ((var_4 & var_12) | ((~(arr_4 [12]))));
                    var_28 = arr_5 [i_2 + 2] [i_6];
                }
                var_29 = (((arr_17 [i_2 + 2] [i_2 + 3]) <= -87));
                arr_29 [i_0] [i_0] [i_0] = (((arr_19 [i_0] [i_2 + 1] [i_2 + 1] [i_0] [i_2 + 1] [i_2 + 2]) / var_12));
            }
        }
    }
    var_30 &= ((((min(-98, var_9))) ? var_12 : var_2));
    #pragma endscop
}
