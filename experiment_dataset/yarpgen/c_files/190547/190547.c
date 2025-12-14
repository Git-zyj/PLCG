/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, (((min((min(var_8, var_11)), var_9))))));
                                var_13 = (27213 % 2076427648);
                                var_14 = ((((!(arr_10 [i_3 - 1] [i_0] [i_0] [i_0] [i_1 + 1]))) ? (arr_10 [i_3 - 1] [i_0] [i_0] [i_0] [i_0]) : ((var_11 ? (arr_10 [i_3 + 1] [i_0] [i_3 + 1] [i_0] [i_4]) : var_7))));
                            }
                        }
                    }
                    var_15 = ((+(min((~var_5), (arr_5 [i_0] [i_1 - 2])))));
                }
            }
        }
    }
    var_16 = (min(var_16, (((((((var_11 ? var_10 : var_4)) ? (var_4 ^ 27212) : var_2)))))));
    #pragma endscop
}
