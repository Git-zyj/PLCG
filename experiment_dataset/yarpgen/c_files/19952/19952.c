/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_18 [i_4] [i_4] = var_2;
                                arr_19 [i_2] [i_2] [i_4] [i_4] [i_2] = ((1 >= (((arr_6 [i_0] [i_0] [i_0]) ? 7352419451556301626 : (77 % 60750)))));
                                var_12 = var_10;
                                var_13 *= -342721321660450413;
                            }
                        }
                    }
                    var_14 = 4785;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_15 = (max(var_15, 1823690330));
                                var_16 = 4809;
                            }
                        }
                    }
                    var_17 = 2471276957;
                    arr_26 [i_0] [i_1] [i_2] [i_2] = ((((arr_14 [i_0] [i_0 + 1] [i_2 + 2] [i_1 - 1] [i_2 + 2]) ? (((450179740 ? (arr_17 [4] [4] [4] [4] [4] [4]) : var_0))) : ((60768 ? -6190821714458323044 : 60750)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 19;i_9 += 1)
            {
                {
                    arr_35 [i_9] [i_9] |= arr_29 [i_8] [i_7];
                    arr_36 [i_7] [i_7] [i_8] [i_7] = 60750;
                }
            }
        }
    }
    #pragma endscop
}
