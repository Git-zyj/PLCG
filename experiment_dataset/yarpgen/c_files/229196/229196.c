/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] = (((arr_0 [i_1]) > ((((((var_3 || (arr_6 [i_0 + 1] [3] [0] [12])))) | (arr_2 [i_0]))))));
                    arr_8 [i_0] [i_0] [i_2] = (arr_6 [i_0] [i_0] [i_2] [0]);
                    var_10 ^= 1802190530;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 *= ((62933 ? (((1802190530 & (arr_11 [i_3 + 4] [i_0 - 2] [i_2])))) : (max(-3703783119514838141, -1802190530))));
                                var_12 = (arr_9 [i_0] [i_3] [i_0]);
                            }
                        }
                    }
                    var_13 = (arr_6 [4] [4] [i_2] [4]);
                }
            }
        }
    }
    var_14 = var_7;
    var_15 ^= var_5;

    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_16 = var_6;
        arr_20 [i_5] = arr_19 [i_5];
        var_17 = var_3;
    }
    var_18 = (min(var_18, var_1));
    #pragma endscop
}
