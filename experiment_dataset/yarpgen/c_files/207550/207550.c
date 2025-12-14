/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] &= (min((var_11 & var_9), (arr_8 [i_0] [i_1] [i_2] [i_0] [i_4] [i_1])));
                                var_15 = (max(var_15, (arr_1 [1] [i_0])));
                                arr_15 [i_4] [i_2] [i_3] [i_2] [i_2] [i_0] = (~(((var_2 < (arr_12 [i_4] [i_1] [i_3 + 2] [i_3])))));
                            }
                        }
                    }
                    var_16 = (max(var_16, (65 + 2600437293)));
                }
            }
        }
    }
    var_17 = var_7;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            {
                var_18 ^= var_12;
                arr_20 [i_6] = (((arr_13 [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1]) || ((max((arr_13 [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1]), (arr_13 [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1]))))));
            }
        }
    }
    var_19 ^= ((32665 ? -256 : (32868 - 2147483647)));
    #pragma endscop
}
