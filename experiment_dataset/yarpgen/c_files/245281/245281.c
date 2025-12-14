/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (((12044857682509117677 / var_5) * (var_8 == var_1)));
    var_14 ^= ((-(~13423276493306949115)));
    var_15 = ((((!(!1)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_3] [i_2] [i_3 - 1] [i_4 + 1] = 2631776225;
                                var_16 ^= (((288404441 ? 14 : 6)));
                                arr_13 [i_3] [i_2] [6] [i_2] [i_2 - 2] = ((-58836 < (!32750)));
                                arr_14 [i_0] [i_0] [11] [i_3] [2] = ((4881974175045741075 << (46 == 3324007433)));
                            }
                        }
                    }
                }
                var_17 = 25729;
            }
        }
    }
    #pragma endscop
}
