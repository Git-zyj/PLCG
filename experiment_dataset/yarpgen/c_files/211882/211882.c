/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = ((~((~(~-1)))));
                                arr_11 [i_2] [i_3] [i_2] [i_3] [i_4] = ((~((~((~(arr_8 [i_0] [i_0] [i_2 + 1] [i_3] [i_3])))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_17 [i_0 - 1] [i_1 - 1] [i_5] [i_6] [i_5] [i_6 + 1] = -var_15;
                            var_20 = var_1;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 9;i_8 += 1)
        {
            {
                var_21 = (!-var_0);
                var_22 = ((~((-((-(arr_21 [i_7] [9])))))));

                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    arr_26 [i_7] |= -var_0;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 9;i_11 += 1)
                        {
                            {
                                arr_32 [i_7] [i_7] [i_9] [i_9] [i_10] [i_11 - 2] = 4279;
                                var_23 = (max(var_23, (((-((~(!266287972352))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = ((~(~var_13)));
    var_25 = ((~(((!(!var_12))))));
    #pragma endscop
}
