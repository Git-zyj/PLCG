/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    var_16 = (var_6 >= var_8);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 -= (arr_0 [22]);
        arr_2 [i_0] = (((arr_1 [i_0]) * (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = ((((arr_1 [i_0]) + (arr_3 [i_1]))));
                    var_19 *= 345930128;
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (arr_4 [0] [i_1] [i_0]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_20 *= (arr_5 [i_3] [i_3] [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_3] [i_3] [14] = (arr_5 [10] [18] [i_5]);
                    var_21 = (i_3 % 2 == zero) ? (((-1 << (((arr_15 [13] [i_4] [i_3] [i_4]) - 86))))) : (((-1 << (((((arr_15 [13] [i_4] [i_3] [i_4]) - 86)) + 80)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_22 = (((arr_0 [i_7]) == (arr_20 [i_3] [i_3])));
                                arr_24 [i_3] [i_3] [i_5] [i_3] [i_7] = (arr_11 [i_3]);
                            }
                        }
                    }
                    arr_25 [i_5] [i_5] [i_3] = (arr_14 [i_3] [i_4] [i_3]);
                }
            }
        }
        arr_26 [i_3] [i_3] = (arr_16 [i_3]);
        var_23 = ((((arr_7 [7] [i_3]) > (arr_7 [i_3] [i_3]))));
    }
    var_24 = var_14;
    #pragma endscop
}
