/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min((((max(var_11, var_13)))), ((5439 ? (((var_2 ? (-127 - 1) : var_16))) : var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = (~1);
                arr_5 [i_1] [i_1] = var_15;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2] [i_4] = (((max((arr_2 [i_0] [i_1] [i_2]), ((~(arr_11 [i_4]))))) / ((~(~var_13)))));
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_2] = (((((var_14 || 8722120489540183560) || var_4)) || ((((arr_9 [i_3 - 1] [i_2] [i_3] [i_3 - 2] [i_3 - 2] [i_2]) ? (arr_9 [i_3 - 3] [i_3] [i_3] [i_3] [i_3 - 3] [i_2]) : var_2)))));
                                arr_14 [i_2] [i_3] [i_2] [i_2] = ((((((var_13 ? (arr_6 [i_0] [i_2] [i_2] [1]) : (arr_10 [i_0] [i_1] [i_2] [i_2] [i_4])))) & ((1 ? 1 : 7)))) * (max(var_14, ((min(-1842430792, 134))))));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_1] [i_1] = ((var_7 & ((min(32767, 1)))));
                arr_16 [i_0] [i_1] = (arr_0 [i_0]);
            }
        }
    }
    #pragma endscop
}
