/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_8 [i_1] = (((min(((var_5 ? (arr_1 [i_0] [i_1]) : var_6)), (arr_0 [i_0] [i_1 + 1]))) - (max(((-(arr_3 [i_0 + 3] [i_1]))), ((var_4 ? (arr_3 [i_0] [i_1 + 1]) : (arr_1 [1] [i_1])))))));
                var_19 = (max(var_19, ((((((-((0 ? 1 : 0))))) ? (min(((-(arr_2 [3] [i_1]))), var_15)) : (((max(var_3, var_18)))))))));
                var_20 = var_17;
                var_21 += ((~((min(var_2, var_14)))));
                var_22 = (arr_2 [i_1] [i_1]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    arr_17 [i_4] &= (min((arr_15 [i_2] [i_4] [i_2] [i_4]), (min(((max(0, -121))), var_0))));
                    var_23 = (-1 & 34);
                    var_24 = (min(var_24, (((-(((arr_13 [i_2] [10] [i_2]) + (arr_13 [i_4] [24] [i_2]))))))));
                    var_25 = -241560598506810660;
                }
            }
        }
    }
    var_26 = var_1;
    #pragma endscop
}
