/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((max(((-((max((arr_5 [i_0] [i_2]), 0))))), ((min(var_8, ((1 > (arr_5 [i_0] [i_0])))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] = max(((!(max(1, 1)))), ((((arr_6 [i_0] [i_1]) ? 1 : 0))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] &= (max((((((1 % (arr_0 [i_4])))) ? -var_11 : (0 ^ 0))), ((1 ? (1 + 1) : ((((arr_10 [1] [i_1] [i_1] [i_3] [1] [i_4] [i_4]) <= var_4)))))));
                                var_14 = var_7;
                                var_15 = (((max(1, (arr_9 [i_0] [i_1] [i_2] [i_3] [1]))) ? 1 : (~0)));
                            }
                        }
                    }
                    arr_16 [i_1] [i_0] &= 0;
                    arr_17 [1] [i_0] [i_1] = (((((arr_13 [i_2] [i_1] [i_1] [1] [i_0]) && (arr_13 [1] [i_1] [i_2] [i_2] [i_2]))) ? (((arr_13 [i_1] [i_1] [i_2] [1] [i_1]) ? (arr_10 [i_0] [0] [0] [1] [i_2] [i_2] [i_2]) : 0)) : ((1 ? 1 : 1))));
                }
            }
        }
    }
    var_16 = 1;
    var_17 = (max(((var_5 ? (var_12 < 1) : -1)), (min(0, (1 * var_3)))));
    var_18 -= ((var_10 ? 0 : var_10));
    var_19 &= 0;
    #pragma endscop
}
