/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] = 7675325112835639558;
                                var_14 = (max(var_14, var_0));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (~25854);
                                var_15 = (max((max(((max((arr_9 [i_0] [i_0] [i_1]), -2174))), -7675325112835639558)), (arr_17 [i_1])));
                                arr_21 [i_0] [i_1] [i_0] [i_6] [i_6] &= (((min(-659266213, var_12)) <= var_12));
                            }
                        }
                    }
                    arr_22 [i_0] [i_1] [i_2] = ((((max(7675325112835639570, 129))) ? (arr_1 [i_2]) : (max((min(504, 659266203)), 14))));
                    arr_23 [i_0] [i_1] [1] = (max(var_2, -7675325112835639536));
                }
            }
        }
    }
    var_16 = (max(var_16, var_2));
    var_17 *= ((var_7 ? (min(((var_2 ? var_0 : -30)), 9742)) : var_4));
    #pragma endscop
}
