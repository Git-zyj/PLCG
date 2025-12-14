/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= 133;
    var_11 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = max(109, (max(45, (66 > 184))));
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((~(((arr_9 [i_1] [i_3] [i_2] [i_1]) | var_8))));
                            arr_12 [i_3] [i_2] [i_1] [i_0] = arr_1 [i_2];
                        }
                    }
                }
                arr_13 [i_1] = var_7;
                arr_14 [i_1] [i_0] = var_2;
            }
        }
    }
    #pragma endscop
}
