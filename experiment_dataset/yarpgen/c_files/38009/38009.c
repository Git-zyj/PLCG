/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 42;
    var_14 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_2] = (((-43 && (var_8 / var_11))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, (((66 - (max(7020740429172923446, 5138152014387716271)))))));
                                var_16 = -2147483642;
                                var_17 = ((!(var_0 < 50559)));
                                arr_11 [5] [i_1] [i_2] [9] [i_3] [i_4] [i_4] = -42;
                            }
                        }
                    }
                    arr_12 [i_2] = 252;
                    arr_13 [i_0] [i_2] = var_7;
                }
            }
        }
    }
    #pragma endscop
}
