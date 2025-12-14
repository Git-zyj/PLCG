/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [7] [i_1] [i_2] [8] [i_4] = ((-(max((((arr_12 [i_2] [i_1] [0]) ? (arr_9 [i_0] [i_0] [10] [10]) : var_7)), (arr_7 [7])))));
                                var_12 ^= (((((((arr_6 [12] [i_2] [i_2] [i_4]) ? var_1 : 3))) ? 10637215698058502061 : (arr_5 [i_0] [i_0] [i_0]))));
                            }
                        }
                    }
                }
                var_13 = ((((var_3 ? ((-377 % (arr_12 [0] [i_0] [i_0]))) : (((arr_10 [i_0] [i_0]) ? 388 : -223517172))))) ? ((((!(((20627 ? var_6 : var_0))))))) : 1);
                var_14 = arr_5 [i_0] [i_0] [1];
            }
        }
    }
    var_15 = (min((~var_1), -2133581346));
    var_16 = ((!(((min(1, 16394))))));
    #pragma endscop
}
