/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 = (min(var_14, (((420603338468697646 ? 58720256 : (min(58720256, (max(58720256, 4231244200)))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (min((arr_0 [i_1 - 1]), (arr_3 [i_2] [i_0])));

                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        var_15 -= (max(1, (((arr_5 [i_1] [i_1 - 1] [i_1]) - var_5))));
                        var_16 = (-66 / 1);
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_17 [i_1] [18] [18] &= ((min(28532, 5)));
                        arr_18 [i_0] [i_1] [i_1] [i_0] [10] [i_4] = ((5622 ? 1 : 108));
                    }
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        arr_22 [i_0] [i_1] [7] [i_0] [i_0] [i_5 - 1] = 108;

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_17 = 58720256;
                            arr_27 [14] [15] [i_0] = ((-(arr_23 [i_0 - 2])));
                            arr_28 [i_0] = -17548;
                        }
                        var_18 = -20;
                    }
                }
            }
        }
    }
    #pragma endscop
}
