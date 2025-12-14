/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= 65535;
    var_11 -= ((-(--504277369397919969)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1] = (min((((!(arr_3 [i_1 + 1] [i_0])))), (arr_2 [i_1] [i_1] [i_1 + 2])));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 = (65535 * 0);
                                var_13 = (((65535 ? 2106602031 : (-1889061708402210519 / -1889061708402210519))) <= (-2147483647 - 1));
                                var_14 = ((((min(1, 0))) ? ((((((arr_15 [7] [i_4] [i_3 - 3] [i_2] [15] [i_0] [i_0]) / 2124521576))) ? var_2 : ((var_9 * (arr_4 [i_1]))))) : ((-((-(arr_8 [1] [i_3])))))));
                            }
                        }
                    }
                }
                var_15 ^= ((((-(1 > var_0))) < (max(-14224, 0))));
            }
        }
    }
    var_16 = (((!-var_3) ? (((824704383 && (((6845742689486622666 ? -641377063 : 0)))))) : ((~((min(65535, var_3)))))));
    #pragma endscop
}
