/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_12 += min((arr_2 [i_0 - 2]), 1);
                var_13 = var_10;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 = (max((arr_8 [i_2 + 2] [i_1 - 2] [i_0 + 1] [i_0 - 2]), (arr_8 [i_2 - 1] [i_1 + 1] [i_0 - 1] [i_0 - 3])));
                                arr_15 [i_1] [i_2 - 1] [i_4] = (((var_7 & (((arr_4 [i_0] [i_3 + 1]) ? (arr_11 [i_0]) : (arr_6 [12] [i_1 - 1] [i_2]))))));
                                arr_16 [i_0 - 3] [i_1 + 3] [i_2] [i_1 + 3] [i_4] = (min((((-var_7 >= (max(var_4, var_5))))), ((32767 ? 123 : 11013))));
                                arr_17 [i_3] [i_3] [i_2 - 1] [14] [i_0] [i_0] = (min((((arr_3 [i_0] [i_1 + 1] [i_2]) ? (max((arr_13 [i_0] [11] [i_2] [i_3] [i_4]), var_10)) : (arr_9 [1] [1] [9]))), (((!((min((arr_11 [i_0 - 4]), var_10))))))));
                                var_15 = (arr_13 [i_2 + 2] [i_0 - 4] [i_1 + 3] [i_3 - 1] [i_1 + 3]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = var_2;
    var_17 = var_4;
    var_18 = (max(((((min(0, var_0))) ? ((-20 ? 29675 : var_10)) : var_8)), ((((max(var_10, var_3)) >= var_11)))));
    #pragma endscop
}
