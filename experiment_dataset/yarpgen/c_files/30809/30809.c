/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_11 / ((((min(253, 2147483647)))))));
    var_20 = -24631;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 = ((249 ? (((arr_4 [i_3 + 1]) ? ((0 ? 0 : 2507996989)) : ((((arr_11 [i_0] [2] [i_0] [i_3 - 1] [i_4] [i_1]) / (arr_9 [i_2])))))) : (arr_6 [6] [i_1] [14] [i_4])));
                                var_22 += (((-(arr_3 [i_4]))));
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = 253;
                            }
                        }
                    }
                }
                var_23 = ((((((var_18 ? 249 : -1677195286))) ? var_16 : 110)));
                var_24 = (min(var_24, (((((min(var_12, (arr_11 [i_0] [i_1] [i_0] [i_1] [i_1] [6])) + 1)))))));
                var_25 = (max(var_25, (arr_11 [i_0] [i_0] [i_0] [0] [i_0] [0])));
            }
        }
    }
    #pragma endscop
}
