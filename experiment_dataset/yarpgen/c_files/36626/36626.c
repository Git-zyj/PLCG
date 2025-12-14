/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 = (((max(3303811707, (arr_12 [i_0] [i_0] [i_0 + 2] [4] [i_4 - 2]))) > (~65535)));
                                var_15 = (max((arr_9 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 + 4]), ((max(var_9, (arr_8 [i_3] [i_0]))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = max((((((max(0, 0)))) | -991155589)), 70);
                                arr_15 [13] [i_1] [i_2] [13] = 59177;
                            }
                        }
                    }
                    arr_16 [i_0 + 3] [14] [i_2] [i_1] = (max((arr_1 [i_0 + 4]), (!9223372036854775807)));
                    arr_17 [i_0] [3] = ((var_3 ? var_6 : (((((arr_6 [i_0 + 2] [i_2] [i_2] [i_0 + 1]) + 9223372036854775807)) << (((((arr_6 [i_1] [i_1] [i_1] [i_0 + 1]) + 301215226910147558)) - 25))))));
                    arr_18 [i_2] = (max((((arr_7 [i_0 + 3] [i_0 + 3] [i_0 + 1] [i_0]) ? 9223372036854775807 : (arr_3 [i_0 - 2] [i_0]))), (max((arr_7 [i_0 + 4] [i_0] [i_0 + 3] [i_0 + 3]), (arr_3 [i_0 - 1] [16])))));
                }
            }
        }
    }
    var_16 = (!var_6);
    #pragma endscop
}
