/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((1235410430 ? var_2 : ((var_4 ? -1 : var_6)))), (((43436 ? 0 : 0)))));
    var_11 = ((~((var_0 ? var_8 : 0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1 - 2] = (~20);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((arr_3 [i_4]) ? var_2 : (-774516642 / -2403269600744578660)))) ? (var_3 / 226481377) : ((min(var_3, (arr_13 [i_1 + 1] [i_1 - 2]))))));
                                arr_16 [i_0] [i_1] [16] [i_3] [i_0] = (min(((((65535 ? 65535 : 1)) + 0)), (((-6545 == ((65535 ? 23 : 9)))))));
                                arr_17 [16] [i_1] [16] [i_3] [i_4] = var_1;
                                arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (min(((((var_0 & (arr_5 [i_2]))))), -1));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = var_6;
    #pragma endscop
}
