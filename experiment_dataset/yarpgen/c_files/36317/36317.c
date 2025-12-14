/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((min((min(var_5, var_6)), var_18)), var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = (min((max(var_18, (arr_5 [i_2 - 1]))), ((min((arr_4 [i_2 + 3]), (arr_5 [i_2 + 3]))))));
                    arr_8 [i_0] [i_1] = (arr_5 [i_2 + 2]);
                    arr_9 [i_2] [i_2 - 4] [i_2] [i_2] = (min((arr_4 [i_2 + 1]), (max((arr_4 [i_1]), (arr_4 [i_0])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_21 = (max(-2, -32761));
                            var_22 *= (arr_21 [i_5]);
                            var_23 |= (min(((min((arr_19 [i_4 + 1] [i_4 + 1] [i_5] [i_4 + 1]), var_7))), (min(var_14, (arr_14 [i_4 + 1] [i_4 + 1])))));
                        }
                    }
                }
                var_24 = ((!(arr_6 [i_3 + 2] [i_4 + 1] [i_3 + 3])));
            }
        }
    }
    #pragma endscop
}
