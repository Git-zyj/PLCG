/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_8, ((((1 + 1) == (var_7 | 1))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((!-319965512) != ((((var_11 > (arr_0 [i_1]))) ? (arr_4 [i_0] [i_0] [9]) : (((arr_1 [i_0 + 2]) ? 0 : (arr_2 [0])))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [11] [i_4] [i_4] [9] [14] = (max((arr_0 [i_1 - 1]), (min(var_11, (arr_0 [i_1 + 1])))));
                                var_20 = var_16;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 -= 1;
    #pragma endscop
}
