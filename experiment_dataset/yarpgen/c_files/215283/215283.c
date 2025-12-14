/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 = min(-2, var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = var_4;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] = (37 || -18);
                                arr_15 [i_4] [i_2] [8] [i_2] [i_2] [i_0] = ((4 > (((arr_4 [i_0] [i_1] [6]) ? (((arr_10 [i_2] [i_2]) ? 19646 : 16922480090546763502)) : (((((arr_3 [i_0] [i_4]) && (arr_6 [i_2] [i_0])))))))));
                                arr_16 [i_0] [i_2] = var_5;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        {
                            var_16 = (arr_12 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 2] [i_6 + 2]);
                            var_17 = arr_23 [6];
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
