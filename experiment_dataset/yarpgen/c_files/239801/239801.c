/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_10 = ((min((arr_2 [i_2 - 2] [i_2 + 3]), var_8)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_11 = ((min(var_8, (arr_6 [i_2 + 2]))));
                                var_12 = (arr_5 [i_2 + 2] [i_2 + 3]);
                                var_13 &= ((-(min((!1), 0))));
                            }
                        }
                    }
                    arr_12 [i_1] [10] [i_2] [i_1] = (arr_10 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    var_14 = (max(9645672559806640841, -1017809555));
    #pragma endscop
}
