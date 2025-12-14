/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((min(var_9, (var_11 && var_15))));
    var_17 = (-127 - 1);
    var_18 = var_5;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((var_7 ? ((var_8 ? var_15 : (-127 - 1))) : ((var_8 ? var_3 : (arr_3 [i_0]))))));
        arr_5 [i_0] = 94;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 = (((min((((arr_11 [i_1] [i_0] [i_1] [i_1]) ? 11 : 1473214672)), -74)) - (((var_15 ? ((var_11 ? 32 : 124)) : (arr_3 [1]))))));
                                var_20 = ((var_11 ? (((!(var_12 % -123)))) : ((min(1, -82)))));
                                arr_18 [i_0] [i_1] [i_0] [i_3] [i_4] [i_1] [i_1] = ((((min(var_7, 2013272129))) % 109));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_21 = (~((127 * (arr_11 [i_1] [i_5] [i_1] [i_1]))));
                                var_22 = (min(var_22, (((((((arr_8 [i_1] [i_5 - 2]) ? (arr_8 [i_2] [i_5 - 3]) : (arr_8 [i_2] [i_5 - 2])))) ? ((127 ? var_11 : var_9)) : (127 + var_13))))));
                            }
                        }
                    }
                    arr_26 [i_1] [i_0] [16] = (var_11 <= 42);

                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        var_23 = (((~3) > var_5));
                        arr_29 [i_1] [i_1] [i_2] [i_7] = (~(arr_21 [i_0] [i_1] [i_2] [i_7 + 1]));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_24 = (max(var_24, ((((arr_8 [i_2 - 1] [i_2 + 1]) * (min((var_0 / var_3), (((-91 ? -117 : (arr_15 [17])))))))))));

                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_25 = (~1);
                            var_26 = ((max(((min(var_3, 8))), (((arr_23 [i_0] [i_1] [i_2] [i_8] [i_9]) ? -74 : 1402221871)))));
                            var_27 = (var_3 - -9223372036854775793);
                            arr_36 [i_1] [i_8] = ((var_9 ? var_8 : (!var_6)));
                        }
                    }
                    for (int i_10 = 2; i_10 < 23;i_10 += 1)
                    {
                        var_28 = (arr_14 [i_1] [i_10] [i_2] [i_0] [i_0] [i_1]);
                        var_29 = (min(var_29, ((((((min(var_13, -117)))) <= (min(var_4, ((var_15 ? 117 : var_7)))))))));
                    }
                }
            }
        }
        arr_39 [i_0] = (arr_7 [21]);
    }
    #pragma endscop
}
