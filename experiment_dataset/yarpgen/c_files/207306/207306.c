/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 -= var_7;
                arr_4 [i_0] [i_0] [i_0] = 0;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_1] [i_3] [i_3] = ((((-(~var_12))) + (arr_0 [i_0] [i_0])));
                            var_16 = (min(((min(0, (arr_9 [i_3] [i_1] [i_0])))), (max(1, 58950))));
                        }
                    }
                }
            }
        }
    }
    var_17 = (max(var_17, var_14));

    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_18 = (var_12 >= var_12);

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_20 [i_7] [i_6] [i_5] [i_5] [i_4] = var_6;

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_23 [1] [1] [i_5] [i_5] [i_6] [i_7] [i_5] = 0;
                            var_19 = (max(var_19, (((65535 ? ((0 ? 1075 : var_7)) : (10567357 <= -93))))));
                            var_20 = (~93);
                        }
                    }
                }
            }
            var_21 = (max(var_21, var_13));
            var_22 -= (((((!(arr_19 [i_4] [i_5] [i_5] [i_5])))) << (((((-3575458917813753084 + 9223372036854775807) >> (146 - 141))) - 176497284970031947))));
            var_23 = (min(var_23, 88));
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            arr_26 [i_4] [12] [i_9] = var_14;
            arr_27 [i_4] [10] = ((5927666722799842527 ? (arr_17 [i_4] [i_4] [9] [i_4]) : var_7));
            arr_28 [i_4] [i_4] [i_4] = ((var_11 >= (arr_12 [i_4] [i_4])));
            var_24 *= -1698126222;
        }
        var_25 = (max(var_25, (((-(arr_12 [i_4] [i_4]))))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        var_26 = (max(var_26, 255));
        var_27 = ((!(arr_16 [i_10] [11] [i_10])));
    }
    var_28 = 15898370422285782063;
    #pragma endscop
}
