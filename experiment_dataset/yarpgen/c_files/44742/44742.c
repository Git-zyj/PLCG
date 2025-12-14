/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((2127158815 ? 2127158834 : 0)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [3] [i_1] [i_2] [i_2] [i_1] [3] = (((((var_6 ^ var_16) ? (((var_3 ? var_3 : var_3))) : ((var_0 ? var_15 : var_6)))) + ((max((var_10 ^ var_13), var_10)))));
                            arr_11 [i_2] [i_2] [i_2] [i_2] = ((63 ? 6 : (-32767 - 1)));
                            var_19 = ((((((var_14 ? var_0 : var_16)) + 2147483647)) << ((((var_9 ? var_16 : var_2)) - 3099))));
                        }
                    }
                }
                arr_12 [9] [9] = (min((max(var_0, var_10)), (var_11 > var_9)));
            }
        }
    }
    #pragma endscop
}
