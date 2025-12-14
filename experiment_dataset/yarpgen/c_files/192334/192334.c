/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        arr_2 [19] &= (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 = (+-2045058615);
                    var_14 *= (((arr_7 [21] [i_1 - 2] [i_2]) ? (((arr_4 [i_0]) ? (arr_0 [i_0 - 1]) : (arr_4 [i_2]))) : (arr_7 [i_0 - 1] [i_0 - 2] [i_0 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_15 = ((((((2045058615 ? var_3 : (arr_14 [i_0] [i_2] [i_0] [9]))) ? (arr_10 [i_1] [i_1] [i_1 - 1] [7]) : (arr_9 [i_0] [18] [i_3] [24])))));
                                arr_15 [i_0] [4] &= (arr_8 [23] [i_1] [i_1] [i_1]);
                            }
                        }
                    }
                }
            }
        }
        arr_16 [i_0] = ((~(min(-2045058606, ((-2045058606 ? var_0 : var_2))))));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_19 [18] &= (((((var_1 ? var_3 : (arr_5 [i_5])))) ? ((var_11 ? 2045058617 : var_8)) : (arr_10 [i_5] [i_5] [i_5] [i_5])));
        arr_20 [i_5] = (((var_9 / var_11) / 126525305));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 20;i_6 += 1)
    {
        arr_24 [i_6 + 1] [9] = (((arr_5 [i_6 + 1]) + ((var_3 ? var_1 : (arr_4 [i_6])))));
        arr_25 [i_6] = ((~((((arr_17 [12] [12]) || (arr_8 [i_6] [i_6] [i_6] [i_6 - 1]))))));
        var_16 = (arr_7 [i_6 - 1] [i_6 - 1] [i_6 + 1]);
        arr_26 [i_6] [i_6] = -2045058615;
        var_17 -= (arr_10 [i_6 + 1] [13] [13] [i_6 + 1]);
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        var_18 = ((~(((arr_12 [i_7]) ? (min(15, (arr_1 [i_7]))) : ((((arr_10 [1] [i_7 - 1] [i_7] [i_7 - 1]) ? 120 : var_5)))))));
        var_19 += var_10;
        arr_29 [i_7] [7] = var_5;
    }
    var_20 = var_10;
    #pragma endscop
}
