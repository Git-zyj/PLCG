/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [16] [i_1] [11] = (!-2714911433467655244);
                                arr_15 [i_0] [i_1] = var_1;
                            }
                        }
                    }
                }
                arr_16 [3] [i_1] [i_1] = (((arr_13 [i_0] [i_1] [i_0] [i_1]) ? (arr_3 [i_0 - 4] [i_1] [i_1]) : (arr_3 [6] [i_1] [i_0])));
                arr_17 [i_0 - 2] [i_1] = (min((arr_2 [i_0 - 1]), var_0));
                arr_18 [i_1] [i_1] [i_1] = min(((var_3 ? var_9 : (arr_3 [i_0 - 4] [i_1] [i_1]))), var_1);
            }
        }
    }
    var_14 = var_8;
    var_15 |= (((max((min(var_5, var_7)), var_8)) << (var_5 - 901150896)));
    var_16 = var_12;
    #pragma endscop
}
