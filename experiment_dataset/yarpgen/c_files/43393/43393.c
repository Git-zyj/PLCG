/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_12 = (max((arr_6 [i_0] [i_1 + 2]), 161));
                            var_13 -= (max((4202300194 != 110), ((var_7 ? (arr_2 [3]) : var_7))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_12 [i_4] [i_1 + 3] [4] [i_2 - 1] [1] [i_2 - 1] = ((var_4 | (arr_1 [i_0])));
                                arr_13 [i_3] [i_3] [13] [i_3] [14] [i_3] [13] = 146;
                            }
                            var_14 = ((6825975002374332719 ? (((((2644962152675708160 ? 149 : var_5))) ? var_5 : var_2)) : (min((arr_9 [i_3] [i_3] [i_2] [15] [i_0] [i_0]), 506373602))));
                        }
                    }
                }
                var_15 = (-((~(arr_6 [i_1 + 3] [i_1 + 3]))));
            }
        }
    }
    #pragma endscop
}
