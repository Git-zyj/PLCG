/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max((((arr_0 [i_1]) & 514128461)), (max((!var_2), (arr_3 [i_1] [3])))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, var_6));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = (max((arr_10 [i_3 - 1] [2] [i_3] [i_3 - 1] [i_4]), (arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [3])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = ((var_5 ? 0 : var_4));
    #pragma endscop
}
