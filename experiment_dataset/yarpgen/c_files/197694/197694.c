/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = (arr_8 [i_0] [i_1] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = var_7;
                                var_18 = (min(((min(var_2, -1761012597))), (arr_9 [i_0] [i_1] [i_1 - 2] [i_3])));
                                arr_13 [i_0] [i_0] [6] [i_3] [i_0] = ((-(max(var_1, var_10))));
                                arr_14 [i_0] [i_0] [i_2] [i_2] [10] = var_11;
                            }
                        }
                    }
                    var_19 = (min((min(-1451726679, (arr_11 [i_1 - 2] [i_2] [i_1 - 2] [i_1 + 2] [i_1 - 2]))), (((arr_11 [10] [i_2] [i_1 - 1] [i_1] [i_1 - 1]) | (arr_11 [i_1] [i_1] [i_1 - 1] [i_1 + 2] [i_1])))));
                    var_20 = (min((~0), (max((min(var_5, var_8)), var_6))));
                }
            }
        }
    }
    var_21 = var_10;
    var_22 = var_14;
    #pragma endscop
}
