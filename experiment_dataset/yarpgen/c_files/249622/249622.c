/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (((var_8 < (var_3 / 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_3] [i_1] [i_3] [i_3] = (((((((((arr_7 [i_1]) ? var_8 : 10757))) ? ((var_2 ? (arr_8 [i_0] [i_2] [i_0] [i_0]) : (arr_12 [i_0] [i_0] [i_1] [i_4]))) : var_6))) ? ((max((arr_8 [i_3] [i_3] [i_0] [i_0]), 2087670348665621863))) : -188));
                                var_12 = (max(var_12, ((((arr_13 [i_0] [i_4 - 1] [0] [i_3] [i_4] [i_4]) ? var_5 : (((-3933365874374226917 ? 3517 : 255))))))));
                            }
                        }
                    }
                }
                var_13 = (((var_4 ? var_0 : (arr_7 [i_0]))));
                arr_16 [i_0] [i_1] = (arr_14 [i_0] [i_1]);
                var_14 = (min(var_14, (!var_9)));
            }
        }
    }
    var_15 = ((var_2 ? ((var_7 ? (max(var_5, 2147483647)) : var_1)) : var_5));
    #pragma endscop
}
