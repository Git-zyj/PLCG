/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((-14270 + -693112754) ? (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))) : ((((arr_3 [i_0]) ? 92 : var_8)))));
        arr_5 [i_0] [i_0] = arr_0 [i_0] [i_0];
        arr_6 [7] = 101;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                arr_19 [i_1] [i_2] [i_3] = var_5;
                                arr_20 [i_4] [i_4] [i_3] [i_4] [i_4] = (-var_2 + 14242);
                            }
                        }
                    }
                    arr_21 [i_3] [i_2] [i_2] [9] = -14270;
                }
            }
        }
        arr_22 [i_1] = ((((arr_9 [i_1] [i_1] [i_1]) ? 83 : (arr_11 [i_1]))));
    }
    #pragma endscop
}
