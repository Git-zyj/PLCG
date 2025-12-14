/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((3971262849 ? (min(12482, 2110390518)) : var_7));
                arr_7 [i_0] [i_0] [i_0] = (arr_3 [i_0 - 1]);
                var_17 = var_13;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (((~(min((arr_5 [i_1 - 1] [i_3 - 1]), (arr_2 [i_0 + 2] [i_1 - 2]))))))));
                                var_19 += (-(max(12482, (747738491181869689 / -8))));
                                arr_15 [i_0] [i_4] [i_2] [i_4] [i_4] |= (((max((arr_2 [i_3 + 1] [i_0 + 2]), (arr_2 [i_0 + 1] [i_0 + 1]))) * (((arr_2 [i_1] [i_1 + 1]) ? (arr_2 [i_0 + 3] [i_1]) : (arr_2 [i_0] [i_1 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_16;
    #pragma endscop
}
