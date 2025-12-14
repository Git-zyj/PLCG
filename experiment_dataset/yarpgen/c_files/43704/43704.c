/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((!1) * var_7));
    var_15 = ((var_7 & ((154 - ((128 ? var_7 : var_11))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 -= (-2147483647 - 1);
                    arr_9 [i_0] [8] [8] [4] = -159;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 -= var_0;
                                arr_16 [i_3] [i_3] [5] [6] [6] = 102;
                                arr_17 [4] [9] [3] [i_2 + 2] [i_3] [i_4 - 1] = (min(((155 ? (min((arr_8 [1] [11] [1] [1]), (arr_2 [i_4 - 1] [i_1]))) : 154)), (~1985646269)));
                            }
                        }
                    }
                    arr_18 [1] [11] [11] |= max(4252816122, 3);
                    var_18 ^= (~(~1));
                }
            }
        }
    }
    #pragma endscop
}
