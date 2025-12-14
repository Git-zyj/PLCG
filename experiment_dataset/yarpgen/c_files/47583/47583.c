/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = ((-((~(arr_12 [i_4] [i_4] [i_4] [i_4])))));
                                var_18 = ((((-360732843177510844 | (arr_0 [i_0] [i_0]))) % (((-(((arr_1 [0]) ? (arr_10 [i_3]) : (arr_0 [i_0] [i_2]))))))));
                                var_19 = (((min((arr_3 [i_0]), (arr_3 [i_0]))) % var_6));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_20 = (arr_14 [i_0] [i_1] [13] [i_2] [i_1]);
                        arr_18 [i_0] [i_0] [10] [i_0] = ((-(arr_5 [i_1])));
                        arr_19 [i_0] [i_0] = (max(-94256148, -94256148));
                    }
                    var_21 = (max(var_12, ((((arr_17 [i_0 + 2]) << (((arr_17 [i_0 + 3]) - 1732986897)))))));
                    arr_20 [i_0] [6] [i_1] [i_2] = ((-94256148 ^ (max((min(var_5, var_14)), (arr_10 [i_2])))));
                    var_22 = 1104323648;
                }
            }
        }
    }
    var_23 = ((var_11 - (((!(((var_14 ? var_5 : var_2))))))));
    #pragma endscop
}
