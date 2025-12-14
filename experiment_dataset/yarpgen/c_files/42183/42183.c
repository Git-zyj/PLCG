/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((13815578081108188253 >> ((((~(~var_1))) - 39851))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 = ((min(4631165992601363383, var_13)));
                                var_15 -= ((var_5 || ((!(((arr_7 [i_0] [i_0] [i_0] [i_0]) && (arr_9 [i_0] [i_1] [i_2 + 2] [i_3])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = var_2;
    #pragma endscop
}
