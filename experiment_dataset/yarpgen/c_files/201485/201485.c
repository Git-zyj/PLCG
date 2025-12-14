/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(max(var_0, var_4))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_13 = var_5;
                                arr_13 [i_3] = ((~((((var_10 ? var_1 : (arr_2 [i_1] [i_1] [i_3]))) << (((((var_6 ^ var_10) + 2122852604)) - 8))))));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        var_14 = ((((-(~var_10))) ^ ((~(0 == 620285704)))));
                        var_15 = ((-((-(arr_8 [i_5 + 1] [i_2 + 1] [i_0] [i_0 + 3] [i_0])))));
                    }
                    var_16 &= (!var_2);
                    arr_16 [i_0] [i_0] = (((((arr_6 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]) | 49488)) ^ (~var_5)));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_23 [i_1] &= (((arr_2 [i_0] [i_2] [17]) / var_4));
                                arr_24 [i_6] [i_2] [i_1] |= var_5;
                                var_17 = 1492000066;
                                var_18 = ((((max(-1492000067, (arr_8 [i_7] [i_6] [i_2] [i_1] [5])))) & var_11));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
