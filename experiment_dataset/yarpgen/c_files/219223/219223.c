/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_4 || ((min(-8107, var_13)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_6 [i_2] = (arr_2 [5]);
                    arr_7 [i_1] [i_1] = ((250 <= ((min(103, 152)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_12 [1] [i_3] [i_3] = ((-(max((min((arr_5 [i_1] [i_2] [i_4]), 6)), (15 + -33)))));
                                var_21 = ((((max((max((arr_0 [1] [i_1]), (arr_11 [i_3 - 2]))), 49))) & ((min(((((arr_11 [i_0]) || 108))), var_9)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (((((var_14 ? 8388608 : var_12)))) ? ((9569863336124914089 ? 0 : 0)) : ((~((min(var_15, 9371))))));
    #pragma endscop
}
