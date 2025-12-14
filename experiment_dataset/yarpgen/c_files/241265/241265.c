/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (min(139, (((((min(var_12, var_6))) < ((var_0 % (-2147483647 - 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((-24440 == ((min(60996, (arr_1 [7] [10]))))))) <= (1 - var_7)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 *= (max(((((max(var_2, 117))) ? (1 ^ 104) : 104)), var_12));
                                var_15 *= (((-((var_5 ? var_7 : (arr_11 [i_0] [i_0] [i_0] [i_0] [7]))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((((((max((arr_4 [0]), (arr_10 [i_4] [6] [i_2] [i_1] [1] [3])))) & (((arr_10 [i_4] [i_3] [i_2] [i_0] [i_1] [i_0]) / -869)))) - (min(((var_4 / (arr_12 [i_3] [i_1] [i_2] [9] [i_0]))), (((arr_8 [i_0] [i_1] [i_3]) ? 188 : (arr_11 [i_0] [0] [7] [i_3] [i_4])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
