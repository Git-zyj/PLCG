/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((min((max(1819584157, var_3)), 24348)), ((~(13931928398644064269 == 73)))));
    var_16 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_0 [i_0]) ? var_0 : 204))) ? ((var_6 ? var_7 : (arr_0 [2]))) : var_4));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [3] [i_2] [5] = -29899;
                                var_17 |= (((~var_14) ? (arr_11 [i_1 + 1] [i_4 + 2] [1] [i_3]) : ((var_5 ? (arr_8 [9] [i_2] [i_3] [0]) : 1))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_18 = var_1;
                                var_19 = 75;
                            }
                        }
                    }
                    arr_20 [i_0] [i_1 - 2] [i_2] = ((42 >= (~70)));
                    var_20 = (arr_7 [i_1 - 3] [i_1 - 2] [i_1 - 3] [i_1 - 3]);
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_21 = ((((((~var_7) * (var_14 >= var_13)))) ? ((var_2 % (arr_22 [1] [i_7]))) : ((max(var_2, 567712817)))));
        arr_24 [9] = (((-567712829 / var_10) ? (!var_6) : ((~(arr_0 [14])))));
        var_22 += var_1;
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {
                    {
                        var_23 = var_4;
                        arr_33 [i_9] [i_9] = ((!(((~(1 > 0))))));
                        var_24 = var_9;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 3; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    {
                        var_25 = var_8;
                        arr_41 [9] [11] [i_13] [i_11] = (max(1, 1));

                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            var_26 = ((((var_6 ? 77 : var_9)) <= (arr_7 [6] [0] [i_12] [1])));
                            var_27 = ((~(arr_23 [6] [i_11 + 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
