/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = 127;
        var_13 |= (var_10 ? (arr_2 [i_0]) : ((((var_0 * 0) * var_0))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 *= var_8;
                                var_15 = (min(var_15, var_4));
                                arr_12 [i_2] [10] [i_2] = var_5;
                                var_16 = ((((-(arr_2 [i_4]))) | ((((1729382256910270464 > (arr_10 [i_2 + 4] [i_2 - 1] [7] [i_1] [i_1])))))));
                                arr_13 [i_2] = (((127 - (arr_3 [i_2] [i_4]))));
                            }
                        }
                    }
                    arr_14 [i_1] |= ((((((var_9 ? var_5 : -25)) ^ (arr_0 [i_0]))) | 18446744073709551615));
                    var_17 = ((((max(1, -1))) || (((!127) > ((1 ? var_10 : var_3))))));
                }
            }
        }
        arr_15 [i_0] = (min(var_8, (((arr_8 [i_0] [i_0]) | (((min((arr_1 [i_0]), 1))))))));
        var_18 += var_5;
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        arr_18 [i_5] = ((var_11 < (((var_4 ? var_4 : var_7)))));
        var_19 = arr_17 [i_5];
        var_20 += 1;
        var_21 = ((var_9 ? var_11 : var_3));
    }
    var_22 = (max(var_22, 255));
    var_23 *= 0;
    var_24 += ((!(!var_6)));
    #pragma endscop
}
