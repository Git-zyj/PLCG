/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-62 % (max(var_8, ((25126 ? var_1 : var_5))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] [i_3] = (((((!(25134 % var_1)))) | 0));
                                arr_15 [i_3] [i_1] [i_1] [3] = var_6;
                                arr_16 [i_0] [i_1] [i_3] [i_3 - 1] [i_4] [i_2] = (((max(var_2, -64))) ? (4 % -9574) : ((max(4, -32535))));
                                arr_17 [10] [i_1] [i_2] [i_3 + 1] [5] [i_4] = var_4;
                            }
                        }
                    }
                    arr_18 [i_2] [i_1] [i_1] [i_0] = ((~(~var_3)));
                    arr_19 [i_0] [i_1] [i_1] = (((max(var_3, var_9)) >> (((max((((var_2 + 2147483647) >> (var_6 + 718988353))), (arr_0 [i_1]))) - 1048554))));
                    var_11 -= var_5;
                }
            }
        }
    }
    var_12 = var_2;
    #pragma endscop
}
