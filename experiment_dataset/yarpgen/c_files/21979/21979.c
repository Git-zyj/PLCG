/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (~3239044398058787387)));
                    var_16 = (arr_5 [i_0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_17 = (arr_11 [22] [i_0 - 2] [i_1] [i_0 - 2] [i_0 - 2] [i_4]);
                                var_18 = (min(4173815605631601178, 1));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        arr_15 [i_0] = ((4294967285 ? (-2147483647 - 1) : -2147483645));

                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_2] = max((((arr_3 [i_0 + 2]) ? 10627 : (arr_3 [i_0 - 3]))), 18);
                            var_19 = (1 || 15);
                            arr_19 [i_0] [i_0] [i_0] = var_2;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [i_0 - 1] [i_0 - 3] [i_0] [i_0] [6] = var_9;
                            var_20 = var_1;
                            var_21 = (((((arr_12 [i_0] [i_1] [i_0] [i_2] [i_0] [i_0] [16]) ? var_12 : -13783)) + (arr_16 [1] [i_0 + 2] [i_2] [i_5] [i_5 + 1] [i_2] [i_1])));
                        }
                        arr_25 [i_0 - 3] [i_1] [i_2] [i_5] [i_1] [i_5 + 1] = (((max((arr_14 [i_0 + 2] [i_0]), (arr_14 [i_0 + 2] [i_0 + 2]))) << (((max((arr_14 [i_0 + 2] [i_0]), var_0)) - 13407940078706989509))));
                        arr_26 [i_1] = (((((var_7 & 105) >> ((((min((arr_11 [i_0] [i_0] [i_2] [i_5] [i_2] [i_0]), 20773))) - 45)))) * var_12));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_22 = (((arr_7 [i_0 - 1] [i_0 + 1]) >= (arr_7 [i_0 - 1] [i_0 + 1])));
                        var_23 = (min(var_23, ((((-(arr_11 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1])))))));
                        var_24 = (((arr_21 [i_0] [i_0 - 3] [i_2] [i_0 - 3] [8]) ? var_5 : (arr_21 [11] [i_0 - 1] [i_2] [i_8] [1])));
                    }
                    arr_29 [i_0] [i_0] [i_2] [i_0] = (~14070136475170348748);
                }
            }
        }
    }
    var_25 = (((((var_2 ? (var_5 == 43156) : (var_14 | var_9)))) ? var_6 : var_4));
    var_26 = var_7;
    #pragma endscop
}
