/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = ((~(~var_1)));
        arr_2 [i_0] = (min(10, ((((var_5 < -23015) * (((arr_0 [i_0] [1]) ? 23014 : var_13)))))));
        var_15 = ((((((((min(157, -18953)))) / ((1 - (arr_0 [i_0] [i_0])))))) ? ((var_9 ? ((((arr_1 [i_0]) / 85))) : (((arr_0 [i_0] [i_0]) - (arr_1 [i_0]))))) : (((157 ? -0 : var_9)))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_16 = ((~(arr_1 [i_1 - 1])));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_8 [i_2] [i_2] [i_1 - 1] = var_7;
            arr_9 [i_1] [i_2] [4] = (((arr_0 [i_1 - 1] [i_2]) ? (arr_0 [i_1] [i_2]) : -22987));
        }
    }
    var_17 = (min(var_2, var_12));

    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    arr_17 [i_5] [i_4] [i_4] [i_3] = (((arr_5 [i_4]) ? (arr_11 [i_3]) : 1));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_18 = (max(var_18, (((-(min(((min(9, (arr_12 [i_4] [i_4])))), ((var_5 ? 100 : var_3)))))))));
                                var_19 = ((((arr_10 [i_3 - 1]) ? (arr_15 [i_3 - 1]) : (arr_18 [i_3 + 1] [i_4] [i_3] [2]))));
                                var_20 = (((((min(-3006717985774547400, 32767)))) ? ((((!(arr_5 [i_3]))))) : (((min((arr_5 [i_3]), 1551912084847572264)) - ((min(-51, 1944734087)))))));
                            }
                        }
                    }
                }
            }
        }
        var_21 = (min(var_21, -63));
    }
    var_22 &= ((((((var_12 * var_1) ? (!var_1) : (!var_6)))) ? ((3529801849186954120 ? 4305993481461405855 : 1)) : var_0));
    #pragma endscop
}
