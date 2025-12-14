/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_6 ? var_2 : (min(var_2, var_11)))) % (2888243021 >= var_3)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, 14));
                                var_14 &= (max((min(-124, (-127 - 1))), 1));
                                var_15 = ((((var_2 / var_9) ? ((min(var_5, -32))) : -1)));
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_4] = (min(-22, (((((21304 ? var_5 : var_2))) ? 0 : ((var_8 ? var_7 : var_8))))));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        var_16 |= (max(24, 0));
                        arr_16 [i_0] [i_0] [i_1] [i_2] [i_2] [i_5] |= var_5;
                        var_17 &= var_1;
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_18 &= arr_18 [i_0] [i_1] [i_2] [i_6];
                        var_19 ^= 331494060;
                        var_20 = (min(var_20, (arr_15 [i_0] [i_1] [i_2] [i_6])));
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        arr_24 [i_0] = (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_21 = ((var_6 ? 244 : (max((var_7 <= 2), (min(112, var_9))))));
                        arr_25 [15] [i_1] [i_2] [i_0] = (((var_6 ? var_10 : var_3)));
                    }
                    arr_26 [i_0] [i_0] = var_1;
                }
            }
        }
    }
    #pragma endscop
}
