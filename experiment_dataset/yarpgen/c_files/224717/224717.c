/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_4 ? (-1 - 25) : ((max(var_3, var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 -= 48;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_12 = (((((min(51, 51)))) - -22));
                            arr_14 [21] [i_0] [i_2] [i_2 + 2] [i_0] = (min(-59, (arr_9 [i_2] [i_3] [i_2] [i_3])));
                            arr_15 [i_0] [i_2] [i_1] [i_3 + 3] [i_2] = ((((min(9362026283279676379, 1023))) ? var_8 : 3811409737723951541));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_13 ^= var_0;
                    var_14 = (arr_5 [i_4]);
                    arr_18 [i_0] [18] [i_1] [i_4] = (var_6 ? var_4 : (((((arr_11 [i_1] [i_1] [i_1] [i_4]) ? (arr_1 [i_1]) : var_1)))));
                    var_15 = ((-(((min(var_9, 63)) + 2065589977))));
                }
            }
        }
    }
    var_16 = var_7;
    var_17 = ((var_0 > var_1) > var_6);
    #pragma endscop
}
