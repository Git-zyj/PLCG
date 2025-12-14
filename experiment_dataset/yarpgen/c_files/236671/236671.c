/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((min(-var_6, ((min(32754, var_6)))))), 18446744073709551613));
    var_19 = (((((var_17 | 126) ? var_16 : var_6)) * (~var_17)));
    var_20 = ((((!((min(var_11, var_13)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [i_3 - 2] [i_2] [i_0 + 4] [i_0 + 4] = (min(((2557205977509928571 ? 3917460033 : 18446744073709551613)), (((arr_3 [i_1] [i_2 + 1]) ? (arr_3 [i_0] [i_2 - 1]) : (arr_3 [i_1] [i_2 + 1])))));
                            var_21 = var_17;
                            arr_12 [i_0] [i_1] [i_2 + 2] [i_3] = var_6;
                        }
                    }
                }
                arr_13 [i_1] [i_1] [i_0] = (min((arr_0 [i_0] [i_0]), (((-(arr_2 [i_0] [i_0 + 3] [i_0 - 1]))))));
                var_22 = ((~((~(~-5304397155044364987)))));
                var_23 = (+((((arr_7 [i_0 + 3] [i_1]) > (((arr_1 [i_0] [i_0]) ? var_6 : var_5))))));

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {

                    for (int i_5 = 3; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        var_24 = ((min(var_11, var_1)));

                        for (int i_6 = 3; i_6 < 11;i_6 += 1)
                        {
                            var_25 = min((arr_2 [i_0] [i_0] [i_0 - 1]), (((~(arr_0 [i_4] [i_4])))));
                            var_26 = (arr_1 [i_6] [i_4]);
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_27 = (((arr_4 [i_7]) - (((min((min(72, 85)), var_13))))));
                            var_28 = (min(var_28, var_11));
                        }
                    }
                    for (int i_8 = 3; i_8 < 11;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_29 = (min((arr_16 [i_0]), ((min(2640849395, 12)))));
                            arr_30 [i_0] [5] [i_1] [i_4] [i_4] [5] [i_9] = ((~((var_16 ? ((~(arr_28 [i_0] [i_4]))) : (arr_1 [i_0 - 1] [i_8 - 2])))));
                        }
                        var_30 *= (min((((!(arr_22 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 + 4] [i_0] [i_8 - 2])))), (arr_22 [i_0 + 2] [i_0 + 3] [i_0] [i_0 + 4] [i_4] [i_8 + 2])));
                    }
                    arr_31 [i_0] [i_0] [i_0 - 1] [i_0] = ((arr_7 [i_0 + 3] [i_4]) - ((((((arr_6 [i_0] [i_1] [i_4] [i_4]) + (arr_25 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 4])))) ? var_11 : var_0)));
                }
            }
        }
    }
    var_31 = ((((((((~var_14) + 2147483647)) >> (var_16 - 21517)))) > (min(((59 ? var_12 : 7034012471593800772)), (min(var_9, var_3))))));
    #pragma endscop
}
