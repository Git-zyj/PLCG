/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_12 = -var_4;
                            arr_8 [i_1] [i_1] [i_1] [i_3] = (max(1, (-962398561 ^ 1)));
                            arr_9 [i_1] [13] [i_1] [i_1] = -22372;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [i_0] [i_4] [i_1] = ((!((max(var_8, (-2147483647 - 1))))));
                            var_13 -= (max(var_9, var_9));
                            arr_18 [i_0] [i_0] [i_0] [i_1] [i_1] [i_5] = ((var_9 != (((!((min((-2147483647 - 1), 2147483647))))))));
                            arr_19 [i_1] [5] [i_4] [i_5 - 2] = var_0;
                        }
                    }
                }
            }
        }
    }
    var_14 = (max(-1806929729, var_10));
    #pragma endscop
}
