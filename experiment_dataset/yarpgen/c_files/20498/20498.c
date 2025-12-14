/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_8 [i_3] [16] = ((var_0 ? (arr_7 [i_2] [i_2] [i_2 + 1] [i_2 + 2]) : (max((arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_3]), var_7))));
                            arr_9 [14] [i_1] [i_1] [i_0] = var_15;
                            arr_10 [i_3] [i_3] [i_1] [i_1] [i_1] [i_0] = ((1991655407 + (max((min(var_6, var_4)), (arr_1 [i_2 + 1])))));
                        }
                    }
                }
                arr_11 [1] = var_7;
                arr_12 [i_0] [i_1] = (-(((arr_4 [i_0] [i_1] [i_0] [i_1]) ? var_2 : ((((arr_0 [i_0]) <= 65297))))));
            }
        }
    }
    #pragma endscop
}
