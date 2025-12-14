/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min(4235468130, 59499165);
    var_11 = (min(var_11, var_0));
    var_12 ^= (min(59499152, -884175273));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_13 = (((((var_6 / (min(4235468130, 59499173))))) ? ((max((min(4235468126, var_4)), var_4))) : ((var_2 ? ((min(4235468121, var_0))) : var_4))));
                        var_14 -= var_2;
                    }
                    arr_12 [i_0] = ((4235468130 ? ((min(var_6, 59499169))) : (((((((arr_9 [i_0] [i_0]) ? var_2 : 56030))) < (max(59499181, var_2)))))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [5] [i_0] [i_0] = var_5;
                                arr_20 [i_0] [i_1 - 2] [i_2] [i_2] [1] = var_4;
                                var_15 = var_2;
                            }
                        }
                    }
                    arr_21 [2] [i_1 + 1] [i_0] = ((-(var_1 / var_2)));
                    var_16 = min((arr_13 [i_0 + 3] [i_1 + 1]), 9505);
                }
            }
        }
    }

    for (int i_6 = 3; i_6 < 23;i_6 += 1)
    {
        var_17 = (((((-var_6 / ((var_3 % (arr_22 [i_6])))))) ? (((!(arr_22 [i_6])))) : (((!var_0) % (arr_22 [i_6])))));
        arr_24 [i_6] = (var_0 ^ 4235468123);
        arr_25 [1] = ((((arr_23 [i_6 - 1]) / var_3)));
    }
    #pragma endscop
}
