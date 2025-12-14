/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    var_19 = 70368207306752;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (4992852380227429358 != 1);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((min((max((arr_4 [i_3 - 1] [i_4 - 1]), (-2147483647 - 1))), -41)))));
                                arr_13 [i_0] [i_1] [8] [i_2] [i_3] [i_3] [i_4] = (min((min((arr_10 [i_3 + 1] [i_1] [i_3 + 1] [i_4 + 3]), 7043249626426654690)), ((((arr_10 [i_3 - 2] [i_1] [i_2] [i_4 - 1]) ? var_15 : (arr_6 [i_3 - 1] [i_1] [i_2] [i_4 + 2]))))));
                                var_22 = (7043249626426654690 ^ (arr_3 [i_3] [i_2]));
                                arr_14 [i_3] [i_3] [i_2] [2] [7] [i_2] [i_2] = -29281;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
