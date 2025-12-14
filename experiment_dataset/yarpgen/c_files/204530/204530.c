/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 = max(var_4, (((arr_5 [i_3 - 1] [i_1 + 1]) % (arr_5 [i_3 + 1] [i_1 - 1]))));
                                var_14 |= (arr_13 [i_2]);
                                var_15 = ((((arr_3 [i_2 + 1] [i_4 - 2]) ? 1 : 0)));
                                var_16 = (max((arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1]), -14309179607206633906));
                            }
                        }
                    }
                    var_17 = (((((~(arr_8 [i_1 + 1] [i_1] [19] [i_1] [i_0])))) ? var_4 : (arr_1 [i_0])));
                    var_18 = var_0;
                    var_19 = (max((var_0 & var_8), 13190991252972163895));
                }
            }
        }
    }
    var_20 = ((0 ? var_12 : var_8));
    var_21 = var_9;
    var_22 = 249;
    #pragma endscop
}
