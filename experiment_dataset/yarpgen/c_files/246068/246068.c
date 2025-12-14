/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (max((min((min(var_2, var_13)), (((var_4 - (arr_0 [i_0])))))), (((arr_0 [i_1]) | var_11))));
                var_17 = (min((((var_0 ? (max(1, var_16)) : (((var_4 ? 1 : 1)))))), (max((min(var_5, (arr_1 [i_0]))), (min(43608, (arr_1 [i_1])))))));
                arr_7 [i_0] [i_0] [i_0] = (((var_4 + var_6) ^ (((((max(var_5, 1))) << (((min(var_13, var_11)) - 3066386397)))))));
                arr_8 [i_0] [i_1] [0] = (max(((((arr_3 [i_0]) >= (var_9 && var_4)))), 511));
            }
        }
    }
    var_18 = var_9;
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 23;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [i_4] [i_2] = var_13;
                                arr_21 [i_5 + 1] [i_2] = var_3;
                                var_19 = (((((3368 && 1) ? 39090 : 1)) <= (((((var_13 ? 46617 : var_11))) ? var_7 : var_0))));
                            }
                        }
                    }
                    var_20 = var_2;
                }
            }
        }
    }
    #pragma endscop
}
