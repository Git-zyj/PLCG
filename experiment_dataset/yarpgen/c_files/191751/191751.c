/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = ((((arr_4 [i_0 + 3]) ? (arr_6 [i_2] [i_0 + 3] [4]) : (((arr_1 [i_2] [i_2]) & 45300)))));

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_16 = (max(var_16, (((+((((arr_9 [i_0] [1] [0] [i_3]) != var_8))))))));
                        var_17 -= (arr_3 [i_3] [i_1] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_18 *= 20232;
                                var_19 = (-100 != 0);
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (min((~var_13), var_6));
    #pragma endscop
}
