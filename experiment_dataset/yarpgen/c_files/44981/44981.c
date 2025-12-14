/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= -var_7;
    var_14 = var_5;
    var_15 = ((((min((var_7 & 65244), var_6))) ? (max((65219 - var_11), ((min(var_8, var_12))))) : var_8));
    var_16 = var_10;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_14 [i_1] [i_2] [i_2] = min(((((arr_3 [3] [i_2] [2]) >= (arr_3 [i_2] [i_2 + 1] [i_1])))), (arr_13 [i_3 + 2] [i_2] [i_1] [i_2] [i_1]));
                        arr_15 [i_2] [i_1] [i_1] [i_2] = (i_2 % 2 == 0) ? (((~0) + (((arr_12 [i_2] [i_2] [i_2]) << (((arr_12 [i_2] [i_2] [i_2 + 3]) - 43241)))))) : (((~0) + (((arr_12 [i_2] [i_2] [i_2]) << (((((arr_12 [i_2] [i_2] [i_2 + 3]) - 43241)) + 19728))))));
                        var_17 = (min(var_0, (min((arr_9 [i_2] [i_0] [i_0] [i_0]), ((var_10 ? (arr_6 [i_0]) : var_9))))));
                        var_18 = (((65250 ? (arr_3 [i_3] [i_3 + 1] [3]) : ((min(1, var_4))))));
                        arr_16 [i_2] [i_1] [i_2] = -1554332805;
                    }
                }
            }
        }
        arr_17 [i_0] [i_0] = var_5;
    }
    #pragma endscop
}
