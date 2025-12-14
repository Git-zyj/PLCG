/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 1] [i_0] [i_0] = ((!((!((min((arr_1 [i_2]), var_7)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = (((arr_2 [i_1 - 1] [i_3 - 2]) ? var_16 : ((var_14 ? var_3 : (((arr_5 [i_1] [i_1] [i_1]) ? 4056091595 : (arr_14 [3] [i_1] [i_3] [1] [3] [i_4] [i_4])))))));
                                var_18 = ((-(max((((arr_12 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2] [i_0]) * var_16)), ((max(0, var_4)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_16;
    #pragma endscop
}
