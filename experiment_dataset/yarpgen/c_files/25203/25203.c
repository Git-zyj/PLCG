/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 |= 32750;
                                var_14 += ((((((arr_4 [i_3 + 1] [i_1 - 2]) & (arr_4 [i_3 + 1] [i_1 - 2])))) && ((((arr_4 [i_3 + 1] [i_1 - 2]) ? (arr_4 [i_3 + 1] [i_1 - 2]) : (arr_4 [i_3 + 1] [i_1 - 2]))))));
                                arr_15 [i_1] = var_9;
                                arr_16 [i_4] [i_3 + 1] [i_2] [i_1 - 2] [i_0] |= ((((min((arr_6 [i_2 + 2] [i_4] [i_4]), (arr_1 [i_3 + 1])))) + ((min((arr_1 [i_3 + 1]), var_5)))));
                            }
                        }
                    }
                }
                arr_17 [13] |= (arr_10 [i_0] [i_0] [i_0 - 2] [i_1 - 2] [i_1] [i_1]);
            }
        }
    }
    var_15 = (min(var_15, 46418));
    #pragma endscop
}
