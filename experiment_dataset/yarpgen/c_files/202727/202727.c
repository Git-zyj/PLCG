/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_1] [i_3] [i_2 + 1] = (!((((0 ? var_7 : 24)))));
                            arr_14 [i_0] [i_1] [i_1] [i_3 - 3] [i_1] [i_1] = var_6;
                            var_12 = ((1 ? ((56490 ? var_4 : 1) : 150)));
                            arr_15 [i_0] [i_0] [i_1] [i_0] = var_9;
                            var_13 -= var_3;
                        }
                    }
                }
                arr_16 [i_1] = ((~(max(((var_3 ? var_4 : -33233079)), ((max(var_4, 89)))))));
            }
        }
    }
    var_14 = var_4;
    #pragma endscop
}
