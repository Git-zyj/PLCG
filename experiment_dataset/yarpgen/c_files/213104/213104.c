/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_18 -= (((((arr_1 [i_1 + 1] [i_1 - 1]) != 8)) ? (arr_1 [i_1 - 1] [i_1 + 1]) : (max((arr_1 [i_1 + 1] [i_1 - 1]), 4294967295))));

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    arr_8 [i_1] [i_1 - 1] [i_1] [i_2] = (max((min((arr_3 [i_2 + 2] [i_2 - 1] [i_1]), (arr_3 [i_2 - 2] [i_2 - 1] [i_2 - 2]))), 255));
                    arr_9 [i_1] [i_1] [i_2] = (((((255 - (~var_11)))) && (((~(arr_7 [i_1 + 1] [i_1] [i_1]))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    arr_12 [i_0] [i_3] [i_1] = ((239 ? 2147483647 : 6));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_3] [1] [i_1] [i_1] [i_1] = (arr_6 [i_3] [i_5 - 1]);
                                arr_18 [i_1] [i_3] [i_1] = (arr_13 [i_3] [i_3]);
                                var_19 -= (arr_15 [i_5 - 3] [i_1] [i_1] [i_1 + 1] [i_5 - 3] [i_5]);
                                var_20 -= 17;
                            }
                        }
                    }
                }
                arr_19 [i_1] = -2147483647;
            }
        }
    }
    var_21 = var_2;
    #pragma endscop
}
