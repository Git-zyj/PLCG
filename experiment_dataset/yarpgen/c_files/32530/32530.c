/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_16 = (arr_5 [i_3 + 1] [i_3] [0] [i_3 + 1]);
                        var_17 = (((((arr_2 [i_2] [i_0]) / var_10))) ? 70 : var_1);
                        var_18 ^= -46;
                        arr_9 [i_0] = (((var_4 ? (arr_5 [i_3] [i_2] [i_1] [i_0]) : var_10)));
                    }
                    for (int i_4 = 2; i_4 < 8;i_4 += 1)
                    {
                        var_19 = (min(var_19, (arr_6 [i_0] [i_1] [1] [i_4])));
                        arr_14 [i_0] [i_2] [i_0] = (((arr_0 [i_0] [i_0]) ? (((!(arr_8 [i_0] [i_1] [i_1] [i_2] [i_2] [i_4])))) : var_7));
                        var_20 = ((38683 != (arr_8 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_21 = (min(var_21, (((var_7 ? (arr_0 [8] [i_0]) : (arr_0 [1] [i_6]))))));
                                var_22 = 1910853073;
                            }
                        }
                    }
                    var_23 ^= (((-2147483647 - 1) ? (arr_0 [4] [4]) : (arr_0 [1] [i_2])));
                }
            }
        }
        arr_21 [i_0] = var_15;
    }
    var_24 = (max((((86 / -293983696) / 1099511627775)), (((((var_3 ? var_10 : var_7)) <= 16261165077512921030)))));
    #pragma endscop
}
