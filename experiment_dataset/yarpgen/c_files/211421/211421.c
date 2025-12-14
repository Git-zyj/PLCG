/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_10;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_21 = 14306;

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_11 [i_0 + 1] [i_0] [i_2] [i_3] [i_2] [i_2] = 4737537864149355761;

                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            arr_14 [i_0] [15] [i_2] [i_3] [i_0] = (((!(arr_10 [i_0 + 3] [i_0] [18] [i_4 - 2]))));
                            var_22 = ((((895328622 ? 0 : (max(12200922377796504778, 3)))) | (~-1)));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_23 = (~9468);
                        arr_17 [i_0 + 3] [i_0] [i_1] [i_2] [i_0] = (((((arr_12 [6] [6] [i_1] [i_2] [i_5] [i_0]) <= var_6)) ? (arr_7 [i_0] [18] [i_0]) : 1));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_24 = (arr_9 [i_0] [i_1] [i_2] [i_6]);
                        var_25 = ((7644 ? 1484863519 : 37959));
                    }
                    var_26 &= (17 && 3587942248594434149);
                    var_27 = (min(var_27, (((~(3587942248594434168 <= -1))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 8;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 10;i_9 += 1)
            {
                {
                    var_28 = var_18;
                    arr_29 [4] [i_9] = ((59069025 >> (((~var_12) + 2017083775))));
                    var_29 = (((-78 ? 232 : 1)));
                }
            }
        }
    }
    #pragma endscop
}
