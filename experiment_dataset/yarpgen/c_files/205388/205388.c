/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [3] [i_0] [i_0] [i_0] = (+((((((arr_3 [5] [9] [9]) ? (arr_5 [4]) : 32751))) ? ((min(431992758, 3310291268))) : (arr_6 [i_0] [i_1 + 2] [i_2 + 2]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [10] [2] [i_0] [i_4] [9] = max((((!(arr_11 [i_4 + 1] [0] [i_4 + 1] [i_4] [i_0] [i_4 - 4])))), var_5);
                                arr_15 [i_0] [i_0] [5] [i_3] [8] = (arr_13 [i_0] [2] [2] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 |= (!var_0);
    #pragma endscop
}
