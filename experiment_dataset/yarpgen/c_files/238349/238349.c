/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-var_1 & (var_3 | var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [12] [12] [i_1] [i_1] [i_2] [i_3] [i_4] = (((min(var_16, (arr_2 [i_1 + 1])))) ? ((((!((min(var_15, (arr_2 [i_4])))))))) : (((arr_7 [i_2 + 2] [i_2] [i_2 + 2] [i_2] [i_2]) ? (((arr_2 [i_0]) ? (arr_4 [i_1]) : var_5)) : (arr_6 [i_2 + 1] [i_1] [i_1] [i_1 - 1]))));
                                arr_12 [9] [i_1] [8] [i_1] [8] = (arr_5 [i_0] [i_1] [i_2] [i_2]);
                                var_18 = (max(var_18, ((min(((min((min(var_14, var_6)), (arr_1 [i_1 - 1])))), (((((~(arr_7 [i_0] [i_1 - 1] [i_2 - 2] [i_1 - 1] [i_4])))) ? (var_12 - var_15) : (arr_7 [i_1] [i_1 - 1] [i_1] [i_2 + 1] [i_4]))))))));
                            }
                        }
                    }
                }
                var_19 = (((arr_7 [i_0] [6] [i_1] [5] [7]) + ((-((var_0 ? (arr_4 [i_1]) : var_5))))));
                var_20 = ((-(min((arr_3 [i_1] [i_1] [i_1]), (arr_9 [i_1] [i_1] [5] [i_1] [i_1])))));
                arr_13 [i_1] [i_1] = ((~((((min(var_10, var_6))) ? (var_15 ^ var_4) : (min((arr_8 [i_1] [i_1]), var_2))))));
            }
        }
    }
    #pragma endscop
}
