/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max(18215, 47321))) || ((max(var_7, var_8)))));
    var_16 = (min(47335, var_11));
    var_17 = var_11;
    var_18 = ((((((((1 ? var_3 : var_9))) ? ((var_12 ? 18214 : 1)) : ((1 ? 18215 : 76))))) ? (min((~var_11), 1)) : 1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 = (-645 / 1562046006483814485);
                                arr_11 [i_2] [i_1] [i_2] [i_4 + 1] [i_2] = arr_10 [i_4] [i_4] [i_3 - 1] [i_2] [i_1] [i_0];
                            }
                        }
                    }
                    var_20 = (min(var_20, (((((((-645 && (arr_2 [i_2 + 1] [i_1]))))) >= ((60397 ? 0 : (arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_1]))))))));
                    arr_12 [i_2] [i_1] [i_2] = var_13;
                    arr_13 [3] [i_2] = (((((((arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [5]) != (arr_0 [i_0] [i_1]))) ? (47321 >= 47322) : (arr_2 [i_0] [i_0]))) >= 47386));
                    var_21 = (min((0 & var_9), (((((1764775502 ? (arr_6 [i_0] [i_2] [i_1] [i_0] [i_1] [i_0]) : (arr_4 [i_2])))) ? ((11708920993526461403 >> (var_9 - 7297))) : var_2))));
                }
            }
        }
    }
    #pragma endscop
}
