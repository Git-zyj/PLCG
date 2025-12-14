/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (min(var_4, -2775862952459780233));
    var_21 = ((!((min(2263592295204135185, -1844279331)))));
    var_22 = (~-14554);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [1] = ((97 >= (((arr_6 [i_0] [2] [i_0]) ? (arr_7 [i_0 - 1]) : (((!(arr_0 [i_2]))))))));
                                arr_13 [i_0] [1] [i_0] [7] [i_2] = ((!(!0)));
                            }
                        }
                    }
                }
                arr_14 [i_0 + 1] [1] [i_0] = (max(-4657627225797890932, ((min((arr_10 [i_1 + 3] [i_1 + 3] [i_1 + 3]), (arr_10 [i_1 + 3] [9] [i_1 + 1]))))));
                arr_15 [10] [10] [i_1 + 2] = ((-(((arr_6 [i_1 + 1] [12] [i_1]) ? 0 : 6825354183895168639))));
                arr_16 [i_0] = (((arr_6 [i_0] [i_0] [i_0]) | (!var_15)));
            }
        }
    }
    #pragma endscop
}
