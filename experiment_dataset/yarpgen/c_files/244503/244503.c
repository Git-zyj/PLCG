/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_12 -= (((71 ^ (arr_6 [i_0 - 1] [i_0 - 1] [i_1 - 1] [i_3]))));
                            arr_9 [i_0] [i_0] [5] [i_0] = ((~(arr_4 [i_1 - 1] [i_0 + 3])));
                            arr_10 [i_0 - 1] [i_1] [i_2] [2] &= var_2;
                        }
                    }
                }
                arr_11 [i_0] [i_1] = (max(-31, ((~(arr_8 [i_0] [i_1] [i_1 + 1] [i_1 + 1] [i_0] [i_1 + 1])))));
                var_13 = ((0 ? 10688945706156447513 : (arr_3 [i_1] [i_1])));
                arr_12 [i_0] [i_0] = (((~0) ? (arr_1 [i_0 - 2]) : (((arr_1 [i_0 - 1]) ? 4095 : (arr_1 [i_0 + 1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_14 = ((var_6 ? (((~((min(63978, var_2)))))) : (arr_22 [i_4] [i_5] [i_7] [i_4])));
                                var_15 = (-(arr_24 [i_8] [i_7] [i_4] [i_4] [i_5] [i_4] [i_4]));
                            }
                        }
                    }
                }
                var_16 = (max((arr_22 [i_4] [i_4] [i_5] [i_5]), (7757798367553104101 || 1558)));
            }
        }
    }
    var_17 -= (min(var_7, (((~((var_1 ? var_6 : 1733875065)))))));
    #pragma endscop
}
