/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_15 = (~49);
                        var_16 *= ((~(arr_6 [16] [16] [i_2] [i_3])));
                    }
                }
            }
        }
        var_17 -= (arr_8 [i_0]);
    }
    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        var_18 = (min(var_18, (arr_9 [18])));
        arr_11 [i_4] = (((-(arr_9 [i_4]))));
        arr_12 [i_4] [i_4] = (arr_10 [i_4]);
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_19 = (arr_14 [i_5] [23]);
        arr_16 [13] = ((-(arr_15 [i_5] [i_5])));
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    arr_24 [i_6] [i_6] = ((!(((-(arr_17 [i_6]))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_20 = (arr_10 [i_6]);
                                var_21 = (arr_20 [i_10] [i_6] [i_6]);
                                var_22 = (arr_9 [i_6]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            {
                                arr_38 [8] [8] [8] [i_6] [1] = (((!((!(arr_22 [i_6] [i_6] [i_6]))))));
                                arr_39 [i_6] [i_7] [i_8] [i_11] [i_6] = (arr_10 [10]);
                            }
                        }
                    }
                    arr_40 [i_6] = (-(arr_35 [12] [i_8] [12] [i_6] [i_8]));
                }
            }
        }
    }
    var_23 -= var_1;
    #pragma endscop
}
