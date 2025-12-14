/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 191;
    var_12 = (min(var_12, var_5));
    var_13 = (((((((var_2 ? var_1 : 19057))) ? var_0 : var_8)) >= ((~(~var_7)))));
    var_14 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_6 [3] [3] [i_2] = (((2591438849 ^ (arr_3 [i_0]))));
                    arr_7 [10] = ((~(~var_9)));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    arr_11 [14] [14] = (arr_4 [i_0] [i_1] [i_3]);
                    arr_12 [i_0] [i_0] [i_0] [i_0] = arr_10 [i_0];
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {
                            var_15 = (((((arr_9 [i_5 + 1]) ? (arr_9 [i_5 + 1]) : var_4)) == 17));

                            for (int i_6 = 2; i_6 < 23;i_6 += 1)
                            {
                                arr_21 [i_4] [i_4] [i_0] = (((-(1 * var_4))));
                                var_16 -= (((((arr_9 [i_5 + 1]) ? var_4 : var_0)) & (((((var_7 ? (arr_10 [i_1]) : 0))) & (arr_14 [i_0] [i_4] [i_4])))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                var_17 = (arr_10 [i_0]);
                                var_18 += (787670167 || 17);
                                arr_24 [i_5] [i_1] [i_4] [19] [0] [i_1] [i_1] = (((arr_19 [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1]) ^ (arr_17 [i_5 + 1] [i_5] [i_5] [i_5] [i_5 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
