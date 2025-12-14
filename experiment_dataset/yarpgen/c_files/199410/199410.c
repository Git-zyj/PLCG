/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [0] [i_0] [i_0] [i_0] = (~((((arr_2 [0]) & (arr_0 [i_0] [i_0])))));
                    arr_9 [8] [i_0] [i_0] [i_0] = (max(((((2578428132 ? var_3 : var_2)) / 3439623317)), 2578428112));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, 1716539195));
                                arr_15 [i_0] [i_2] [i_0] [i_3 - 1] [i_4] = var_3;
                                arr_16 [i_0] [i_0] [i_2] = (arr_13 [i_0] [i_1] [i_2] [i_1] [i_4]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_16 += (((142 | 55089637688416294) % ((((min(var_9, 17384)))))));
                                var_17 = var_12;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_4;
    #pragma endscop
}
