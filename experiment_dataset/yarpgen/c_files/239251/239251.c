/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((~(min(((var_9 ? 16930 : var_15)), ((min(var_3, var_16)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0] [8] = var_2;
                            var_20 = (min(var_20, ((((((arr_4 [i_0 - 2] [i_0 - 2] [i_2 - 1] [i_2]) ? var_8 : (var_7 - var_3))) + (var_9 - var_7))))));
                            var_21 += var_15;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((((((arr_17 [6] [6]) ^ (arr_12 [i_0 + 2] [i_0 + 2] [16] [i_0 + 2]))) > (arr_7 [i_0] [10]))))));
                                arr_18 [i_6] [i_6] [i_0] [i_5] [i_6] = ((var_15 ? (((arr_0 [i_0 + 2] [i_0]) ? (arr_11 [i_0]) : -var_9)) : -339));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 3; i_7 < 8;i_7 += 1)
    {
        var_23 |= (min((var_2 && -30218), ((~(arr_11 [2])))));
        arr_22 [i_7] = (((~(arr_16 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 - 2] [17]))));
    }
    #pragma endscop
}
