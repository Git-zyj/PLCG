/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    var_13 = ((var_5 ? (((~-8300017966968283968) | 253)) : (0 ^ 223)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = (min(var_14, ((((((-(var_10 <= var_3)))) ^ (max((arr_1 [i_0] [0]), (arr_1 [i_0] [4]))))))));
        arr_2 [i_0] [i_0] = (max((arr_0 [i_0]), (max(var_9, var_4))));
        var_15 = ((var_6 ? ((max((arr_0 [i_0]), var_4))) : ((var_2 ? (arr_0 [i_0]) : (((arr_1 [i_0] [i_0]) ? var_0 : (arr_0 [i_0])))))));
        arr_3 [i_0] = (~var_7);
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_16 [i_2] [i_2] [i_3] [3] [9] = var_8;
                                arr_17 [i_5 - 1] [i_2] [i_2] [i_4] [i_5] [i_2] = (((((18 ? ((46432 ? 6 : var_9)) : 19098))) ? (max(var_11, -var_7)) : (((min((((arr_11 [i_2]) >= var_5)), (arr_14 [i_2] [i_3] [i_4] [i_4])))))));
                            }
                        }
                    }
                }
                arr_18 [i_1] [i_1] [i_2] = (arr_0 [i_2]);
                var_16 = (max((max(((max((arr_4 [i_1]), (arr_0 [i_2])))), (((arr_7 [i_1 + 1]) ? var_6 : var_8)))), ((((arr_11 [i_2]) / (arr_11 [i_2]))))));
            }
        }
    }
    #pragma endscop
}
