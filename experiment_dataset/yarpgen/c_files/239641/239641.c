/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] |= ((~(min((var_1 ^ var_1), (min((arr_9 [i_0] [i_1] [i_1] [i_1]), (arr_0 [i_1] [i_0])))))));
                    var_12 = (min(((var_6 - (arr_7 [i_2 - 1] [i_0 + 1]))), (max((arr_8 [i_0] [i_1] [i_2 - 1]), (0 ^ var_4)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_4] [i_2 - 1] [i_3] [i_4] = (min((!1), (((-1 >= 1) - (arr_13 [i_1] [i_1])))));
                                var_13 = arr_15 [i_0] [i_1] [i_1];
                                arr_17 [i_1] [i_1] [i_3 - 1] [i_4] &= (min((((arr_14 [i_1] [i_2 - 2] [i_2] [i_2] [i_2 - 1] [i_3 - 1] [i_1]) * (var_7 && var_2))), (arr_7 [i_0 - 1] [i_0 - 1])));
                                arr_18 [i_0 - 1] [i_1] [i_2] [0] [i_2] &= (((arr_8 [i_3 - 1] [i_2 - 2] [i_0 - 1]) ? (((arr_13 [i_0 + 1] [i_0 - 1]) - (arr_2 [i_2 - 2]))) : (((min((arr_2 [i_2 - 1]), (arr_8 [i_3 + 1] [i_2 - 1] [i_0 - 1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (max(var_14, ((max(var_5, (max((max(var_1, var_7)), (!var_10))))))));
    var_15 = (max(1, ((var_7 ? (var_6 ^ var_2) : var_7))));
    #pragma endscop
}
