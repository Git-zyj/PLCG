/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_1] [i_2] = ((8834 ? var_4 : 91));
                    arr_7 [i_0] [i_1 + 3] [i_1 + 3] [i_2] |= var_8;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_3] [i_1 + 1] [i_0] = (max((max((((arr_9 [i_4] [i_3] [i_3] [i_2] [i_4] [i_4]) ? (arr_12 [i_4] [i_0] [i_2] [i_0] [i_0]) : var_4)), (((var_10 ? 0 : var_4))))), (arr_8 [i_0] [i_0] [i_2] [i_3])));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((((!(!0))) ? ((((((var_9 / (arr_12 [i_0] [i_1] [i_0] [i_0] [i_1])))) ? 1023 : (1319230887 + -1427875056)))) : ((8819380549036538023 ? (arr_11 [i_0]) : 1))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = (max((((var_6 * var_1) ? (max(var_6, var_9)) : (((1 ? 1 : -100))))), -var_6));
    #pragma endscop
}
