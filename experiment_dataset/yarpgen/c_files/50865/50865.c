/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((((((arr_5 [7]) ? (((min((arr_6 [i_0]), (arr_1 [i_1 + 2]))))) : (((arr_0 [i_0]) >> (var_2 + 45835676597526179)))))) && (arr_3 [i_0]))))));
                arr_8 [i_0] = ((!((var_8 && (var_16 / var_5)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 = max(var_9, (((-(arr_15 [i_1] [i_1 + 2] [i_1] [i_4] [i_4])))));
                                arr_17 [i_0] = (((var_3 >= var_10) ? (((((arr_1 [i_0]) > ((((arr_3 [1]) ? (arr_7 [i_0] [i_0]) : (arr_1 [i_4])))))))) : (arr_4 [11])));
                                arr_18 [i_0] [i_0] [i_1 + 2] [i_1 + 2] [3] [i_3] [9] = ((((~(arr_15 [5] [i_0] [i_1 + 1] [2] [i_2]))) % ((((arr_12 [i_0] [i_1] [i_3] [i_3] [i_1 + 2] [i_3]) % ((min(-30085, 65535))))))));
                                var_20 = var_14;
                                arr_19 [i_0] [i_0] = ((~(((-499891364 && (arr_1 [i_1 + 1]))))));
                            }
                        }
                    }
                }
                arr_20 [i_0] = -4271;
            }
        }
    }
    #pragma endscop
}
