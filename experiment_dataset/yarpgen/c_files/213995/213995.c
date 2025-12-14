/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((min(var_5, var_9))) ? (~var_6) : var_7)) / var_4));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = (arr_2 [i_0 - 1] [i_1] [i_1]);
                arr_4 [i_0] = ((((((~1106207615) ? ((var_6 ? (arr_0 [i_0]) : (arr_1 [i_1]))) : (((min(0, var_0))))))) ? ((-69 ? var_7 : var_7)) : 1));
                var_14 = ((((((var_4 ? var_3 : var_5)))) ? (min((arr_3 [i_0 + 1] [i_0 + 1]), var_11)) : (((min((arr_2 [i_0 - 2] [i_0 - 2] [i_1]), 106))))));
                arr_5 [i_0] = ((119 ? ((1 ? var_6 : (min(35151, var_2)))) : ((((max(1640033619, 39)))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_15 = -1;
                            var_16 = ((1 ? 1 : ((max(var_2, 41711)))));
                            arr_12 [i_0 - 2] [i_1] [i_1] [i_3] = (((1 ? var_8 : (26631 % var_7))));
                        }
                    }
                }
            }
        }
    }
    var_17 = min((((((var_7 ? var_11 : var_1))) ? ((1640033648 ? var_5 : var_2)) : (min(-8, var_11)))), ((1 ? ((var_9 ? 581046795 : var_11)) : (((max(var_1, 20536)))))));
    #pragma endscop
}
