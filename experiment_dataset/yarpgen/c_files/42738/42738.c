/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_10 = (max(var_10, (var_1 | var_8)));
                    arr_7 [i_0] = var_7;
                    var_11 = arr_2 [i_0];
                }
            }
        }
    }
    var_12 = ((var_7 ^ (~var_6)));
    var_13 *= ((var_3 << (var_6 - 53439)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            {
                arr_16 [i_4 + 2] [13] = var_4;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_14 = ((arr_18 [i_4 - 2] [i_4 - 1] [i_4 + 2]) ? ((((max(var_4, var_9))) ? ((max(var_7, var_7))) : (arr_0 [i_5]))) : ((max((arr_20 [i_5] [i_4 + 2]), (arr_1 [i_4 - 2] [i_4 - 1])))));
                            var_15 = (32768 % 65524);
                            var_16 = ((((((arr_3 [i_4 - 1] [i_4 - 1]) ? (arr_3 [i_4 + 2] [i_4 - 1]) : var_4))) < (arr_15 [i_4 + 2] [i_4 - 2] [i_4 + 2])));
                            arr_22 [i_5] [i_5] [9] [i_5] [3] [i_5] = (max((arr_19 [8] [8] [8] [6] [i_4 + 2]), (max(var_1, ((var_2 ? var_3 : var_7))))));
                        }
                    }
                }
                var_17 = ((~((var_9 ? (arr_18 [i_3] [i_3] [i_4 - 2]) : var_0))));
            }
        }
    }
    #pragma endscop
}
