/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (~var_7);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_2] = (((arr_7 [i_2 - 1] [i_2 - 1]) ? 2022475608 : (arr_2 [i_0] [2])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 -= var_15;
                                var_21 = (((arr_12 [0] [i_2 - 1] [i_3 - 1] [i_3] [i_4 - 1] [i_4 + 1]) || (arr_12 [i_2 - 1] [i_2 - 1] [i_3 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 2])));
                            }
                        }
                    }
                    var_22 = (min(var_22, 24128));
                    arr_15 [i_2] [i_2] [i_1] [i_2] = var_16;
                }
            }
        }
        var_23 = (175 / (arr_3 [i_0]));
    }
    var_24 = var_16;
    #pragma endscop
}
