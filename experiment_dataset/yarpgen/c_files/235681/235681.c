/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (1 ^ (((var_1 <= ((var_0 ? 661694372 : var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((((3129928571037531314 ? var_6 : var_6))) ? ((min(-661694372, ((var_4 ? var_1 : 419705900))))) : (((arr_1 [i_0]) ? 661694356 : ((-(arr_0 [i_0] [i_0]))))));
                var_11 = (arr_0 [i_0] [20]);
                var_12 = var_1;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_13 = (~((2238068960960680153 ? (arr_20 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2]) : (arr_20 [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]))));
                                var_14 = (--291274165);
                                arr_21 [i_2] [i_2] [21] [i_4] = arr_10 [i_3 + 1] [i_2 + 1] [i_4 - 1];
                            }
                        }
                    }
                }
                var_15 = min(176077479, -8281168091020491785);
                var_16 = 4;
                arr_22 [i_2] [i_3 + 3] = (arr_7 [i_3 + 3]);
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            var_17 ^= var_5;
                            arr_28 [i_2 - 1] [i_3 + 1] [i_7 + 1] [i_8] [i_8] = (min((min(215631391674891026, (16674 + 2238068960960680147))), var_5));
                        }
                    }
                }
            }
        }
    }
    var_18 = var_1;
    #pragma endscop
}
