/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((((!9) ? 49660 : var_7)));
    var_12 = (min(var_12, ((((((-(!var_0)))) ? var_4 : (var_7 / var_5))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] = ((var_4 ^ ((448 ? (((arr_9 [i_0]) ? var_2 : 9)) : (arr_0 [3])))));
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_2] [i_3] [i_3] = (((((arr_11 [i_2] [i_2] [i_2 + 1] [i_4]) ? (arr_11 [i_1] [i_1] [i_2 + 1] [i_2 + 1]) : var_3)) / 47706));
                                var_13 = (840029746355430832 < var_4);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_21 [i_6] = ((~(min((arr_14 [i_0] [i_0] [10] [i_0] [i_0]), var_9))));
                                arr_22 [i_0] [i_1] [i_1] [9] [i_6] [2] = ((var_10 ? (((var_9 || (arr_6 [i_1 + 1] [i_1 + 1])))) : ((((arr_13 [i_6] [i_5] [i_2 - 1] [i_2 - 1]) > 2312359277451602079)))));
                                var_14 = (max((arr_20 [i_6 - 1] [i_6 + 2] [i_6] [i_6 + 1] [i_6 + 2]), var_9));
                            }
                        }
                    }
                    arr_23 [i_0] [i_0] [i_0] = (min((288230376143323136 >= 48583), 1339820696900311597));
                }
            }
        }
    }
    #pragma endscop
}
