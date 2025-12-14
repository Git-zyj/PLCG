/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (min(var_12, (((((((arr_0 [i_0] [i_0]) ? var_4 : var_9))) ? (arr_0 [i_0] [i_0]) : (((var_5 ? -110 : var_10))))))));
        var_13 = (var_3 || var_8);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = var_9;
                    var_15 = (var_8 / ((-1 ? var_1 : -94)));

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        var_16 = (max(var_16, -8584227171997745186));
                        arr_10 [i_0] [i_0] [11] [i_0] [11] [3] = ((((((arr_2 [i_0] [i_0] [i_0]) < var_6))) == (arr_0 [i_0] [i_0])));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_17 += (arr_9 [i_2 - 3] [i_2 - 4] [i_4 - 1] [i_4 - 1]);
                        arr_13 [i_4 - 1] [i_4] [i_4] [i_4] = (((arr_2 [i_4] [i_4 - 1] [i_2 - 2]) ? var_4 : (arr_9 [4] [i_2 + 1] [i_4 - 1] [i_2 + 1])));
                    }
                }
            }
        }
        var_18 = var_10;
    }
    #pragma endscop
}
