/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((3283 ? 218 : ((((max(13626, var_9)) != 1716309492)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_19 = var_3;
                                arr_15 [i_4 + 1] [i_0] [i_2] [8] [i_1] [i_0] [i_0] = (-1716309514 & -1716309472);
                                arr_16 [i_0] [i_1] [i_0] [i_1] [i_3 + 3] [9] [i_1] = (~1334373839);
                            }
                        }
                    }
                }
                var_20 *= ((!(((13618 << (((-31198 + 31219) - 14)))))));
            }
        }
    }
    #pragma endscop
}
