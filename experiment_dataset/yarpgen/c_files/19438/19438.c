/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_15 = var_11;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 = (((~var_10) | ((var_6 ? var_0 : var_3))));
                                arr_14 [11] [i_2] [i_2] [12] [i_4] [i_4 - 2] = 131;
                                arr_15 [21] [4] [i_2] [i_2] [i_4 - 2] = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((115 ? 19 : 254));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_18 = (max(var_18, (((~(~120))))));
                                var_19 *= var_13;
                                var_20 = ((((var_4 ? (var_6 * 8) : -var_6)) + 148));
                                var_21 = ((!(!15)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_22 = var_0;
                                var_23 = var_9;
                                var_24 += 237;
                                arr_35 [i_6] = (var_7 < 128);
                            }
                        }
                    }
                    arr_36 [i_6] = var_13;
                }
            }
        }
    }
    #pragma endscop
}
