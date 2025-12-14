/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (max((!-2785218667), var_9));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 |= 0;
                                var_20 |= var_15;
                            }
                        }
                    }
                }
                arr_17 [i_1] = -910121038991396482;
                var_21 = ((((-(arr_3 [i_0 + 1] [i_0 - 2]))) / ((714308588 ? ((var_2 ? 120 : (arr_4 [i_0 + 2] [2] [i_1]))) : 11))));
                var_22 ^= var_7;
            }
        }
    }
    var_23 = (var_0 ? (((((var_4 ? -18910 : 3736908256))) ? 18446744073709551615 : var_1)) : 64);
    #pragma endscop
}
