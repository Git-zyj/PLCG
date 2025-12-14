/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = ((((arr_10 [i_0] [i_1 - 2] [i_2] [i_3] [i_4]) + (!31135))));
                                arr_16 [8] [i_0] [i_2] [2] [i_4] [i_4 - 1] = 31135;
                                var_16 *= (0 / 255);
                            }
                        }
                    }
                    var_17 = ((246 ? 1 : 1424621643));
                }
            }
        }
    }
    #pragma endscop
}
