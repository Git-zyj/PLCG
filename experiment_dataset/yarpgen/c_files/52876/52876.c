/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [3] [i_0] = ((4310630614424282437 - (((1 ? 32231 : (~1))))));
                var_11 = ((~((max((arr_0 [i_0]), 1)))));
            }
        }
    }
    var_12 = var_0;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                {
                    var_13 = 102911702;
                    var_14 = -var_10;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_15 = (max(((-((max(var_0, var_4))))), (arr_18 [i_2] [i_3 + 3] [i_4] [i_5])));
                                var_16 = (max(var_16, ((((((((((arr_8 [1]) || 0))) != (arr_17 [1] [i_3] [i_4 + 1])))) >> (((arr_12 [i_2] [i_3 + 1]) - 5952)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (((-88 && (var_0 > 1))));
    #pragma endscop
}
