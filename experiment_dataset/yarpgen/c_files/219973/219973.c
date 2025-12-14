/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = ((!((max((arr_3 [i_1] [i_2 + 1] [i_2 - 1]), (arr_3 [i_1] [i_2 + 1] [i_2 - 1]))))));
                    arr_7 [i_1] = max((arr_1 [i_0 - 2]), (arr_1 [i_0 - 2]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_16 ^= (((arr_10 [i_0] [i_1] [i_1] [i_3]) > ((((21280 <= ((((arr_12 [i_4] [i_4] [i_1] [i_3]) < (arr_11 [i_1] [i_1]))))))))));
                                var_17 *= ((((arr_9 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_4]) + (((arr_4 [i_0] [i_2] [i_2]) ? (arr_5 [i_3] [i_1]) : (arr_0 [i_0]))))));
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_2 - 2] = (max((arr_11 [i_0 - 2] [i_1]), (((arr_11 [i_0 - 1] [i_0 + 1]) / (arr_11 [i_0 - 3] [i_0 + 1])))));
                                var_18 = (((18289989805676939101 <= 140) << (min((arr_10 [i_0] [i_1] [i_3] [i_3]), (!17394)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (((((!-17395) ^ var_6)) > var_6));
    var_20 = ((((var_8 ^ (((max(var_0, -17395)))))) & ((min((-17395 + var_3), ((17395 ? -17395 : var_0)))))));
    #pragma endscop
}
