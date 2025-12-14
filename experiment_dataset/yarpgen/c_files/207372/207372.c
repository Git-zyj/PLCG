/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_2;
    var_19 = (max(1, 392598757));
    var_20 -= var_13;
    var_21 = -1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_22 = (min(-1, (arr_13 [i_3 - 1] [i_1] [1] [i_2] [18] [1])));
                                var_23 = (((arr_4 [i_0] [i_0]) ? ((min((((var_15 ? 12514 : 1))), 4294967295))) : (((min(var_8, -8814973953824581257)) * (((var_13 | (arr_9 [i_1] [i_3] [i_2]))))))));
                                var_24 = var_5;
                            }
                        }
                    }
                    var_25 = ((36 ? 2150479215040074670 : var_0));
                    arr_14 [i_2] [i_2] [i_2] = 4294967295;
                    var_26 = ((var_8 | (arr_5 [6] [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
