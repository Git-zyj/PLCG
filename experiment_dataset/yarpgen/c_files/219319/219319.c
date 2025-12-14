/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 += (max((((arr_4 [i_2 + 2] [i_1 - 1]) * (arr_4 [i_2 + 2] [i_1 - 1]))), ((max(var_4, (arr_4 [i_2 + 2] [i_1 - 1]))))));
                    var_12 += (arr_2 [i_0]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    var_13 = (arr_11 [i_4 + 2]);
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_14 = (arr_11 [i_6]);
                                var_15 = ((16097319701470843063 >= ((~((var_7 ? 2349424372238708533 : 2421))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
