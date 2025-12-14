/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 -= (max((!var_0), var_7));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 *= (((arr_13 [i_3] [i_2 - 3] [i_2 + 1] [i_2 - 3] [i_2 - 3] [i_4]) / (((arr_11 [i_0] [i_2 - 1] [i_2 + 1] [i_2] [i_3] [i_4 - 1] [i_4 - 1]) / (arr_9 [i_2] [i_2 - 1] [i_2 - 3] [i_4] [i_4] [i_2])))));
                                var_16 = 0;
                                var_17 = (min(var_17, (arr_2 [i_0] [i_1])));
                                var_18 = (min(var_18, var_4));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 ^= var_4;
    var_20 |= ((-((var_9 ? 0 : (var_4 + var_4)))));
    var_21 = (min(var_21, (((((((((41672 ? var_2 : var_7))) / (var_10 * 32767)))) || (54268 - 3688891648370064237))))));
    #pragma endscop
}
