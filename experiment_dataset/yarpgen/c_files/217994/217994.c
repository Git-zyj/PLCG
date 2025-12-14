/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(31, 0))) >> 0));
    var_11 = var_9;
    var_12 = (225 ? (~0) : var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_1] [i_4] = 0;
                                var_13 = (min(var_13, ((min(((1 ? (arr_2 [i_2] [i_4]) : (arr_4 [i_2] [i_2]))), (arr_8 [i_0] [i_3] [i_0]))))));
                                var_14 ^= (min(((min(3517, 62019))), ((12620059709275465432 ? (arr_9 [i_3] [i_1] [i_2] [i_3]) : 28))));
                            }
                        }
                    }
                    var_15 = (max((arr_5 [i_0]), 0));
                }
            }
        }
    }
    #pragma endscop
}
