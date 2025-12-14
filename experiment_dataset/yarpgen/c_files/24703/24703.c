/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 - 1] [i_2] [i_2] [i_3] [i_2] = (((((~(arr_11 [i_0 - 1] [i_0] [i_0 - 1] [11] [i_0] [i_0 - 2] [i_0 - 2])))) < (55 == 61883)));
                                var_11 += (max(var_7, ((((arr_11 [i_0] [i_0] [i_2] [i_3] [i_4] [i_0] [i_0]) / 201)))));
                                var_12 += (max((((arr_6 [i_0 - 2] [i_0 + 1]) - (arr_6 [i_0 - 1] [i_0 + 1]))), (~33835)));
                            }
                        }
                    }
                }
                var_13 = 241;
                var_14 |= 31693;
                var_15 &= 6133;
            }
        }
    }
    var_16 = var_9;
    #pragma endscop
}
