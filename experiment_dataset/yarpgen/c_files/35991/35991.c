/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= -var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (((((0 ? ((min((arr_1 [i_1 + 3]), 3))) : var_11))) - (~var_9)));
                var_14 += (!(((((min(var_6, 5559209713884571071))) ? (max(-5559209713884571071, 65535)) : (arr_3 [i_1 + 3])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_15 = (max((max((arr_4 [i_1 + 2] [i_1 + 2] [i_3 - 3]), (min(var_6, (arr_6 [i_2]))))), (((var_4 ? 5559209713884571056 : (arr_10 [i_1 + 2] [i_3 + 1] [i_2] [i_3 + 1] [i_2] [i_2]))))));
                            arr_11 [i_3 + 2] [15] [i_3] [i_1] [i_0] = (max((((min(-8311, var_11)))), (min((var_0 / var_5), -6090907584865898307))));
                        }
                    }
                }
                var_16 -= (((~var_1) ? ((var_0 ? (arr_10 [i_1 + 3] [21] [4] [i_1 - 1] [i_1 - 1] [i_1]) : (arr_10 [i_0] [i_0] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 3]))) : (max((~-901435348), ((109232485 ? var_2 : (arr_1 [i_1 + 1])))))));
                arr_12 [i_1 + 2] = ((~((+((var_11 ? (arr_3 [i_1]) : var_6))))));
            }
        }
    }
    #pragma endscop
}
