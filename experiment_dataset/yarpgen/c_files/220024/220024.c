/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = (~(((336759904 ? var_4 : var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [21] = ((var_0 ? ((1 ? 52874 : ((0 ? 9776758663004089557 : (arr_2 [8] [i_1]))))) : (max((~0), 9776758663004089557))));
                            arr_12 [i_3] [i_0] [i_1] [i_1] [i_0] [i_0] = ((23500 ? 1 : 1));
                            arr_13 [i_0] [i_0] [i_1] [1] [i_1] [18] = (9776758663004089557 / 4904700313857222797);
                        }
                    }
                }
                arr_14 [i_0] [i_1] [1] = ((((12659 > (arr_7 [i_0] [i_0] [8]))) ? ((+(((arr_3 [i_0]) ? var_8 : var_2)))) : 62));
                arr_15 [i_0] = (((2510099826792877 & (arr_9 [i_1] [i_1] [i_0] [i_0]))));
                arr_16 [11] [i_0] [i_1] = ((var_1 ? (arr_2 [i_0] [i_1]) : (min(9776758663004089567, -76))));
            }
        }
    }
    #pragma endscop
}
