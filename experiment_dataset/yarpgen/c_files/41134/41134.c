/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_10 + (((var_8 - var_3) & var_2))));
    var_12 = (((var_4 * var_10) | (var_8 & var_4)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_13 = (((((var_8 | var_9) || (var_2 & var_9))) || ((((var_8 == var_2) | var_5)))));
                                arr_15 [i_1] [i_2] = (((((var_10 - var_7) | var_0)) ^ var_0));
                                var_14 = var_7;
                                var_15 += var_0;
                            }
                        }
                    }
                    var_16 = (var_2 || var_0);
                    var_17 = var_6;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_18 = ((var_0 / ((var_7 / (var_5 / var_5)))));
                                var_19 = var_2;
                                arr_20 [i_1] [i_1] [i_1] = var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
