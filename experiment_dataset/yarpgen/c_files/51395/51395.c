/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [8] = var_12;
                var_20 = (((((arr_3 [13] [i_0 + 3] [i_0 - 2]) ? 1 : (arr_3 [i_0] [i_0 - 1] [i_0 + 4]))) * (((arr_3 [i_0] [i_0 - 2] [i_0 + 1]) << (((arr_3 [i_0] [i_0 + 2] [i_0 + 1]) - 6914))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0 + 2] [i_0] = var_6;
                            var_21 = (arr_1 [i_3]);
                            var_22 = 1235376167;
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(var_23, (var_18 * var_9)));
    #pragma endscop
}
