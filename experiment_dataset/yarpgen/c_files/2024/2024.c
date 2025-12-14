/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((((((((var_16 ? var_10 : var_15))) ? var_7 : var_13))) ? 1 : (max(var_3, var_1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_11 [i_1] [i_2] = (arr_6 [i_0] [9] [i_0]);
                        var_20 = ((((((arr_3 [i_1] [i_3]) ? var_11 : 15433550007941262353))) ? -var_7 : var_6));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_21 ^= (~var_18);
                                arr_16 [i_5] [i_5] [1] [i_4] [2] [i_2] = (!(arr_7 [i_4 + 1] [i_4 + 1] [i_4] [i_0]));
                                arr_17 [i_2] [i_2] [i_2] [i_1] [i_5] [i_2] [i_1] = var_8;
                                var_22 = ((((min((arr_12 [i_4] [i_4 - 1] [i_4] [i_4 + 1]), (arr_13 [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 1])))) ? (min((arr_10 [i_4] [i_4 + 1] [i_4 + 2] [i_4 - 1]), (arr_10 [i_4] [i_4 + 1] [i_4] [i_4 + 1]))) : (!-23)));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [3] [i_0] [i_2] = ((~(arr_1 [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (min(var_16, var_2));
    #pragma endscop
}
