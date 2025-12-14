/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((!252), ((var_11 || ((min(var_4, var_7)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (arr_3 [i_1 + 2] [i_1 - 3]);
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = (arr_0 [i_0] [i_4]);
                                var_15 = (((((~var_1) < (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((((arr_0 [i_4 - 1] [i_1 - 3]) <= (arr_9 [i_2]))) ? (arr_6 [i_4 - 1] [i_2] [i_0]) : (((arr_1 [i_2 + 2]) ? var_1 : (arr_8 [i_1] [i_2 + 2] [i_3] [i_4]))))) : (arr_10 [i_4 - 1] [i_3] [i_2 - 3] [i_1 + 4] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
