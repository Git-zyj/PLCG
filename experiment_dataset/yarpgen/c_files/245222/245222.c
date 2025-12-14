/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_3 ? (!var_12) : (min(var_9, 13586448930583625671)))));
    var_17 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = (~(4860295143125925945 < 4808553946217352010));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = (((var_8 & var_2) ? ((((arr_12 [i_0] [i_1] [i_2] [9] [1]) ? (arr_12 [i_1] [i_2] [i_4] [6] [i_0]) : (arr_12 [15] [i_1] [12] [i_3] [i_4])))) : var_1));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_13;
                            }
                        }
                    }
                }
                arr_16 [i_0] = ((~((var_9 ^ (arr_12 [10] [i_1] [i_0] [i_1] [12])))));
                var_20 = ((min(var_10, var_1)));
            }
        }
    }
    #pragma endscop
}
