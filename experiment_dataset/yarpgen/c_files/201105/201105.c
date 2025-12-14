/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((((((var_9 ? var_9 : var_7)) - (min(var_0, var_8))))), (((((min(54253, var_7)))) / var_9))));
    var_14 = (min(((((var_0 <= var_5) + (min(48382, var_9))))), var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] [4] = -447459334;
                var_15 = (max(var_15, (((!((((((54257 ? 1 : 0))) ? ((min((arr_1 [i_0]), 1))) : (arr_1 [21])))))))));
                arr_6 [i_0] [i_0] = 4265199094;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 = ((((((arr_0 [i_2 + 2]) + (arr_0 [i_2 + 1])))) ? ((~(arr_0 [i_2 - 1]))) : (arr_0 [i_2 + 1])));
                                var_17 = (((((~(arr_11 [i_0] [i_2] [i_2 - 1] [i_4 + 4])))) ? (((54251 && 18857) ? ((min(var_8, 1536))) : ((1 ? (arr_4 [5] [1] [1]) : 2096640)))) : 1));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(((((min(1, -816782611))) + ((var_9 ? var_1 : var_7)))), 1303772352));
    #pragma endscop
}
