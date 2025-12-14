/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((-7961 ? (arr_1 [i_0] [i_1]) : (arr_2 [i_1]))))));
                var_16 = var_6;
                var_17 ^= -89;
                var_18 = ((var_7 ? (arr_2 [i_0]) : var_11));
                arr_5 [i_0] [i_1] [18] = (arr_4 [i_0] [i_0] [i_1]);
            }
        }
    }
    var_19 = var_9;
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_20 = var_11;
                                var_21 = (max(var_21, var_1));
                            }
                        }
                    }
                    var_22 = (~var_8);
                    var_23 |= var_11;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            {
                                var_24 = var_6;
                                var_25 = (-127 - 1);
                                var_26 = 24;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
