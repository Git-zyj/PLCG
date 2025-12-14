/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] = var_16;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [1] [i_2] [i_1] [i_3] = (((((arr_5 [i_4] [6] [i_0]) ? var_6 : (arr_7 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_3] [i_2]))) != -20));
                                arr_13 [8] [8] [i_2] [i_3] [i_2] [i_2] = (255 / (arr_1 [9] [i_4 + 2]));
                                arr_14 [i_3] = var_12;
                            }
                        }
                    }
                    arr_15 [i_0 + 2] [i_1] [i_2] = (((((arr_11 [i_1] [i_1]) && (arr_11 [i_2] [i_1]))) ? ((((var_4 && (arr_10 [i_1] [i_1] [i_1] [0] [i_1] [i_1]))))) : 0));
                    var_18 = 64;
                    arr_16 [i_0] [i_1] [i_2] [i_2] = (!var_0);
                }
            }
        }
    }
    var_19 = var_2;
    #pragma endscop
}
