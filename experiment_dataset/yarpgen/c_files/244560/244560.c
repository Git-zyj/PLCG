/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    var_12 = 81;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] = min(((var_2 ? 0 : (arr_4 [i_0] [i_1] [i_1 - 1]))), -245);
                arr_9 [i_0] &= ((min(0, ((3001911450 ? -9966 : var_5)))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 = (min((max((arr_6 [i_0] [i_1 - 1]), (arr_4 [i_0] [i_1 - 1] [i_0]))), (((((min(var_10, var_7))) - var_8)))));
                                var_14 -= ((((min((arr_2 [i_1 + 2]), var_9))) ? (arr_0 [i_2 - 1]) : 268304384));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        {
                            arr_20 [i_0] [i_1 + 2] [i_5 - 1] [i_6] = arr_13 [i_1 - 1] [i_1] [i_5 + 1] [i_5 - 1] [i_6 - 1];
                            var_15 = (min(var_15, 0));
                        }
                    }
                }
            }
        }
    }
    var_16 = 4134854644225559792;
    #pragma endscop
}
