/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = var_7;
                var_16 = (min((((arr_0 [i_0]) ? (arr_1 [7] [i_0]) : (arr_0 [i_0]))), (arr_0 [i_0])));
                arr_6 [i_0] [i_0] [i_0] = ((((((arr_2 [i_0] [i_0]) * var_8))) ? (arr_0 [i_0]) : (((((((arr_1 [i_0] [i_0]) * -1))) ? (arr_1 [i_0] [i_0]) : (255 > 15))))));
                arr_7 [i_0] [i_0] = var_13;
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = ((min((((arr_14 [i_0] [i_0] [8] [i_4] [8] [1]) * var_8)), ((min(var_2, 10))))));
                                var_18 = ((min(255, (0 > 3810450623837142587))));
                                var_19 = (min((min(((((arr_0 [i_0]) * var_3))), (min((arr_9 [i_3 + 2] [1] [1]), -104)))), ((((min(113, -1940))) ? -3898 : (min((arr_9 [i_0] [i_3] [i_0]), (arr_14 [i_0] [i_1] [i_0] [i_3 + 1] [i_4] [i_1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 += ((var_12 * (var_6 > var_2)));
    #pragma endscop
}
