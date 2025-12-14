/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((427852833 ? var_3 : ((1 ? var_8 : (max((arr_2 [i_0] [i_0] [i_1]), 11393269173854263540))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = (max((min((~11393269173854263540), 11393269173854263540)), (arr_10 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0] [i_0])));
                                var_18 = ((((((arr_6 [i_1]) ? (arr_6 [i_1]) : var_14))) ? (((+((min((arr_2 [i_0] [i_2] [i_1]), (arr_11 [i_3]))))))) : ((((-(arr_8 [i_0] [i_0] [i_0] [i_0] [i_1] [5]))) / (arr_7 [i_1])))));
                                arr_12 [i_0] [i_0] [10] [i_1] [i_0] [i_0] = (((((min(var_9, 127)))) ? var_9 : ((-var_15 ? ((15 ? var_3 : var_8)) : (arr_6 [i_1])))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] |= (arr_6 [i_4]);
                            }
                        }
                    }
                }
                arr_14 [i_1] [i_1] [3] = var_15;
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_5] [8] [i_7] [i_7] &= (max(((min(4294967274, var_0))), ((((arr_0 [i_5 + 1]) == (arr_17 [4] [i_1] [i_5] [i_0]))))));
                                var_19 = (min((~var_10), ((min((arr_2 [i_1] [0] [i_1]), var_12)))));
                                arr_24 [i_0] [i_0] [i_1] [i_0] [i_0] = 3;
                            }
                        }
                    }
                }
                var_20 = (max(var_20, (arr_11 [i_0])));
            }
        }
    }
    var_21 = (var_9 ? ((max(4294967274, var_0))) : var_10);
    var_22 ^= min((!var_2), (var_1 / -var_12));
    var_23 = ((var_10 & (((var_6 ? 11393269173854263543 : 31)))));
    #pragma endscop
}
