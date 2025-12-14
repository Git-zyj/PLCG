/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0 + 1] [i_0] [i_1 + 1] [i_2] = (((arr_2 [i_2 + 1]) * (arr_1 [i_0 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_3] [3] [i_1 - 2] [3] [i_2] = ((((min(((((arr_6 [i_4] [i_2] [i_2] [i_1 - 1]) ? -59 : (arr_10 [i_2] [i_3 - 1] [i_2 - 4] [i_1 - 3] [i_2])))), ((0 ? var_8 : (arr_2 [i_1])))))) ? var_0 : (((arr_6 [i_0] [i_0] [i_2] [10]) ? var_0 : ((1792 ? -2892 : var_14))))));
                                arr_13 [i_2] [i_1 - 1] [i_2 - 2] [i_3] [i_0 - 1] [i_0 - 1] [i_2] = (arr_3 [2] [6] [i_2 + 1]);
                                var_19 += (min((((((var_4 & (arr_10 [i_0 - 1] [i_1] [i_2 - 1] [i_3 - 1] [i_0]))) <= ((641022796670872929 ? (arr_4 [i_3]) : var_5))))), 2));
                                var_20 = ((((var_18 ? (arr_11 [i_2] [i_1 - 2] [i_2]) : ((9223372036854775807 ? 119 : -2904)))) - (min(((var_4 ? var_12 : (arr_11 [i_2] [i_2] [i_3 - 1]))), (((arr_11 [i_2] [i_1 - 3] [i_4]) ? var_10 : 46603))))));
                            }
                        }
                    }
                    arr_14 [i_1 - 3] [i_2] [i_2 - 3] [i_1 - 3] = var_8;
                }
            }
        }
    }
    var_21 = ((var_18 ? -var_10 : var_2));
    var_22 = (min((((0 ? ((var_8 ? var_18 : 1)) : 72))), (min(var_2, var_13))));
    #pragma endscop
}
