/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] [i_1] [i_3] [i_0 + 1] = (((((var_3 * 249) ? (arr_13 [i_0 + 1] [i_2] [i_2] [i_2 + 1]) : 4294967295)) >= ((((var_2 ? (arr_0 [i_3]) : 2147483647))))));
                                arr_16 [i_0] [11] [i_3] [i_0] [i_3] = 126;
                                arr_17 [i_1] [i_1] [8] |= (max(2508408544, 150));
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] [i_1] = (!150);
                    arr_19 [i_0] [i_1] [i_0] = ((((((arr_9 [i_2 + 1] [i_2 + 1] [i_0] [i_0] [i_0 - 1] [i_0 + 1]) ? var_9 : (arr_9 [i_0] [i_0 - 1] [i_0] [i_2 - 1] [i_0] [i_2 - 2])))) || (!1)));
                    arr_20 [i_0] [i_0] = (arr_14 [i_2] [i_2] [i_2] [i_2 + 1] [i_2] [i_2] [i_2]);
                }
            }
        }
    }
    var_10 = var_0;
    var_11 = -1104911241;
    #pragma endscop
}
