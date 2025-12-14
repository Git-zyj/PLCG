/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, 1));
                    var_16 = (((9 ? 1 : 1)));
                    var_17 = (((arr_6 [i_0]) << (var_2 + 70)));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((((var_2 + (var_13 < 2778905467))) < (arr_8 [i_1] [i_1] [i_1])));
                }
            }
        }
        arr_10 [i_0] = ((1 ? 0 : -6651992207146421902));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 7;i_7 += 1)
                        {
                            {
                                arr_27 [i_3] [i_4] [i_5] [i_6] [i_4] [i_3] [i_5] |= ((var_1 + (((arr_20 [i_4] [i_4 - 1] [i_4]) ^ (arr_23 [i_3] [i_4 - 1] [i_5] [i_5 - 2] [i_5] [i_5])))));
                                var_18 = var_1;
                            }
                        }
                    }
                }
                var_19 = (max(var_19, var_11));
                var_20 = ((-(((arr_19 [i_3] [i_3] [i_4] [i_4]) ? var_13 : var_9))));
            }
        }
    }
    var_21 = (((!var_14) == (var_4 & 70368744177664)));
    var_22 = var_9;
    #pragma endscop
}
