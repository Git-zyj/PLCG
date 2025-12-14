/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((((((min((arr_8 [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 1]), var_3)))) <= (var_9 * var_5))))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_4 + 1] = (min(((max((arr_12 [0] [2] [i_1 + 2] [1] [i_4 + 2]), (arr_12 [i_0] [i_0] [i_1 + 2] [i_2] [i_4 + 3])))), (min((-9223372036854775807 - 1), (arr_6 [i_4 + 1] [i_1 + 1])))));
                                var_16 = (var_2 / 46351);
                            }
                        }
                    }
                    var_17 = (min(((43 / (((arr_7 [i_0] [i_1] [i_1] [i_0]) / var_12)))), (arr_3 [i_2])));
                }
            }
        }
    }
    var_18 = (max(var_18, (((var_0 < 56) > -var_9))));
    #pragma endscop
}
