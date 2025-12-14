/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_17 = ((-(+-49)));
                            var_18 = ((~((~(~var_12)))));
                            arr_14 [i_1] = ((-(~21202)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_19 = (max(var_19, (~var_1)));
                                var_20 = ((-((~(~var_9)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_7] [i_8] = ((!(((~(~36644))))));
                            arr_29 [i_0] [i_1] [i_0] [i_8] [9] [i_8] = (((~(~60))));
                            var_21 *= ((~(((-(arr_26 [13] [i_1] [i_1] [i_1] [i_1] [i_8]))))));
                            var_22 = ((-(+-21202)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 4; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 9;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {
                        {
                            var_23 = (-(((!(~2147483647)))));
                            var_24 *= ((-(!2805039843)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 1; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 11;i_15 += 1)
                        {
                            {
                                var_25 = ((!(((~(((!(arr_12 [i_9] [i_10 - 1] [21] [i_14] [1] [i_15])))))))));
                                arr_48 [i_15] [i_9] [i_14] [i_9] [i_10 - 1] [i_9] = ((-(((!(((~(arr_0 [i_10])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
