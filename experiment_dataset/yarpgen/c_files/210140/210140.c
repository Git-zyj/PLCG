/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((((var_0 ^ var_9) >> 0))), var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [3] [3] = (((((var_10 * var_12) ? 1034010740334074611 : (var_5 >= 8503))) << (var_15 - 15595)));
                    var_21 += (-7442795188859273141 ? (((!(var_14 & var_7)))) : (!0));
                    arr_11 [i_1] [i_2 - 3] = (min(((((~var_3) >= (arr_3 [15])))), (arr_3 [i_1])));

                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_1] [i_1] [i_3] = (max((min((((var_18 + 9223372036854775807) << (var_5 - 38050))), var_13)), 526987421));
                        var_22 = 17412733333375476991;
                        arr_17 [2] [14] [i_2] [i_3 - 4] = (((-(min(-5194198329145371195, 0)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
