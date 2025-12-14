/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = var_13;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_1] [i_0] [i_0] [i_1] [i_0] = 6038839687399412256;
                                var_15 = var_5;
                                var_16 = (arr_9 [i_1] [i_2] [i_3] [i_4]);
                                var_17 ^= -39;
                                var_18 |= 49;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = 65;
    #pragma endscop
}
