/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    var_20 &= (-31889 == 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = arr_1 [i_0];
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 -= ((!((!(arr_10 [i_4] [16] [i_1])))));
                                arr_13 [i_1 + 1] [12] [i_1] [i_4] = ((((((arr_9 [i_2] [i_3] [i_4]) ? -31889 : (arr_6 [i_2] [0] [5])))) ? (arr_3 [i_2] [i_3]) : (((35 < (arr_3 [i_3] [i_1]))))));
                                var_23 = (min(var_23, (((var_5 <= (arr_2 [i_4] [i_2 - 1] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
