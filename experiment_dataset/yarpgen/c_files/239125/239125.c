/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, ((((arr_9 [i_3] [i_3] [i_2 + 4] [17] [i_3]) <= ((var_4 ^ (arr_1 [i_2 - 2] [i_4 + 3]))))))));
                                var_14 = (min(-17191, 1761861992788376538));
                                arr_12 [i_0] [i_0] [i_0] = 1;
                                arr_13 [i_0] [9] [i_0] [13] [16] = (!-985513056);
                                arr_14 [i_0] [i_1] [11] [i_3] [i_2 + 2] = (min((max(-985513056, 0)), (!-1761861992788376539)));
                            }
                        }
                    }
                }
                var_15 -= (-var_2 + -1923189742);
                var_16 = (min(var_16, ((max(-17190, 1761861992788376538)))));
            }
        }
    }
    var_17 &= -1433580372;
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            {
                arr_21 [6] |= -var_5;
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_18 = (min(var_18, var_4));
                            arr_28 [i_6] = (arr_19 [i_8] [i_5]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
