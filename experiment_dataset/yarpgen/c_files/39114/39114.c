/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((143 ? 24946 : 113)) >= ((var_8 ? var_5 : var_2))));
    var_16 = ((-32606 ? 124 : -4159));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (124 && 251);
                                arr_14 [10] [i_1] [i_4] [i_3] [i_4] [i_0] = (max((arr_9 [19] [i_0] [i_0] [i_2 + 1]), (((arr_9 [i_1] [i_1] [i_1] [i_2 - 3]) ? (arr_9 [i_2] [i_2] [i_2] [i_2 - 2]) : var_0))));
                            }
                        }
                    }
                }
                arr_15 [18] [17] [i_1] = (arr_4 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
