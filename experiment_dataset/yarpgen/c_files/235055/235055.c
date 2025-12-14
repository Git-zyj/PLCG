/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = (((((((arr_1 [i_0]) == (arr_0 [i_0]))) ? (arr_7 [i_2] [5]) : ((((-127 - 1) ? var_5 : 127))))) * (min((var_15 / var_10), var_13))));
                    var_22 = (min(var_22, (((max(((var_13 - (arr_4 [i_0]))), var_13))))));
                }
            }
        }
    }
    var_23 += (max(var_16, -var_19));

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_11 [i_3] = 127;
        arr_12 [i_3] = ((((((0 == (arr_6 [20]))) ? ((min((arr_7 [6] [6]), var_9))) : -102)) | (((arr_9 [i_3]) + (((arr_3 [i_3] [1]) ? -72 : var_11))))));
    }
    #pragma endscop
}
