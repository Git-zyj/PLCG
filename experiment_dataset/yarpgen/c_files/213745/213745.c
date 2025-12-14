/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = ((-var_9 ? var_7 : (((var_4 ? ((var_7 ? var_2 : 38)) : var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] = (arr_3 [1] [i_0]);
                            var_13 = (min(var_13, var_1));
                            var_14 = var_6;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_15 = (!1);
                                arr_19 [i_1] [i_4] [i_5] = ((((61567 ? 1 : 1907771045)) / (((arr_3 [9] [i_5]) ? (arr_16 [i_6] [i_5] [1] [i_0]) : (arr_4 [3] [i_1])))));
                            }
                        }
                    }
                }
                arr_20 [i_1] [i_0] = (max((-74 + 0), (((((77 * (arr_0 [i_1])))) ? (arr_4 [i_0] [i_0]) : (max(var_0, var_7))))));
            }
        }
    }
    #pragma endscop
}
