/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 += ((((!(arr_2 [i_1] [i_1 - 1] [i_1 - 1]))) ? var_14 : (((28672 ? (arr_2 [i_0] [i_1 - 1] [i_2]) : (arr_2 [i_1] [i_1 - 1] [i_2]))))));
                    var_21 += (-2147483647 - 1);
                    arr_7 [i_1] = (((min(var_8, (arr_1 [i_1 + 1] [9]))) - var_2));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                arr_15 [i_3] [17] = (arr_9 [i_4]);
                var_22 -= (arr_8 [i_3] [i_4]);
                var_23 = (min(var_23, var_8));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_24 = ((~((~(arr_18 [i_6 - 1] [i_6 - 1] [i_6 - 2] [i_7])))));
                                var_25 = (-((-(arr_21 [i_7]))));
                                var_26 = (max(var_26, (((((((arr_19 [i_6 - 1] [i_6 - 2] [i_6 + 1] [7]) ? (arr_16 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]) : var_0))) ? (max((arr_19 [i_6 - 2] [i_6 + 1] [i_6 - 1] [i_6]), var_15)) : (~var_13))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
