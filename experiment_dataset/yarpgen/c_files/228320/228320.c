/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_5;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_16 = (0 - 615004607662541796);
                        arr_9 [i_0] [i_2] [i_2] = (min((arr_5 [i_0 - 1] [i_2] [i_2 + 1]), (min(18200927083409681060, ((max(var_10, var_6)))))));
                        var_17 = (max(var_17, -615004607662541796));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {

            for (int i_5 = 4; i_5 < 11;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_18 = (((arr_16 [i_0] [i_5 - 1] [i_6 + 2] [i_0 + 1]) - (arr_16 [i_0] [i_0] [i_6 - 1] [i_7 - 1])));
                            var_19 = (arr_8 [i_5 - 2] [i_4]);
                        }
                    }
                }
                var_20 |= ((var_1 ? var_12 : 16901));
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            arr_24 [i_0] [i_0] [5] [i_0] [i_9] [10] = 615004607662541795;
                            arr_25 [i_0] [i_0] [i_4] [i_4] [i_0] [i_8] [i_9] = (-(arr_23 [i_0 - 1] [i_5 + 2] [i_8] [9] [i_8] [i_8] [i_8 - 2]));
                            arr_26 [i_4] [i_5] [i_0] [i_9] = ((1 ^ (arr_11 [i_5 - 3] [i_8 - 2] [i_0 - 1])));
                        }
                    }
                }
            }
            var_21 += (((-9223372036854775807 - 1) ? -615004607662541813 : 0));
        }
    }
    var_22 = ((var_5 < (max((max(-15, -6147148728429324773)), -3))));
    #pragma endscop
}
