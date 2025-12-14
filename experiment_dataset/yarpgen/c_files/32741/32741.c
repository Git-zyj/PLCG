/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 = ((var_4 ? var_2 : var_5));
        var_12 = (((arr_0 [i_0]) ? var_4 : var_10));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_13 *= ((((var_1 ? -1094644961262310459 : (arr_6 [i_1] [i_1] [12]))) & (((((arr_6 [i_1] [i_1] [2]) != -1094644961262310479))))));
                    var_14 = (max(var_14, ((min((((1094644961262310453 ? ((min((arr_9 [10] [i_2] [i_2]), var_5))) : var_5))), (((((var_4 ? var_0 : var_9))) | (arr_2 [i_2 - 2] [i_2 + 2]))))))));
                    var_15 = var_1;
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                arr_16 [8] [i_2] [11] [i_2] [i_2] [8] = (((~var_10) ? (((var_4 ? (min(-102, 1351697408)) : ((var_7 ? var_7 : var_6))))) : (min(210, (var_9 | var_3)))));
                                var_16 -= ((min((var_0 ^ var_4), (arr_14 [i_4] [1] [i_4 + 2] [1] [i_4 + 2]))));
                                var_17 = (((min((arr_10 [i_4 + 2] [i_4] [i_4 - 1] [i_2]), (~var_10)))) ? var_1 : ((((((max((arr_10 [i_2] [2] [i_2 - 3] [i_2]), 154)))) == (arr_6 [i_3] [i_4] [i_2])))));
                                arr_17 [i_2] [i_2] = ((((min(46, 37))) >= ((((arr_10 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_2]) && var_5)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
