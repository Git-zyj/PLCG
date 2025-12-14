/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (arr_4 [i_0] [i_1]);
                var_13 = 18297799495900730809;
                arr_6 [i_0] [i_1] [i_1] = var_2;
                var_14 = 18297799495900730809;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [9] [i_2] [i_3 + 1] [i_3] = var_4;
                            arr_12 [i_0] [i_1] [i_3] [i_3] = var_1;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                var_15 = var_3;
                var_16 = (min(var_16, 6465));
            }
        }
    }
    #pragma endscop
}
