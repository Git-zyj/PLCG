/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_17 ? ((var_8 ? (((var_13 ? var_8 : var_9))) : ((var_3 ? var_12 : var_2)))) : var_9));
    var_20 = var_0;
    var_21 = ((var_15 ? (max(((min(var_1, var_1))), (min(var_0, var_15)))) : var_4));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_22 &= (((arr_2 [i_0 - 3] [i_0 - 2]) ? ((min(0, (arr_2 [i_0 - 3] [i_0 - 3])))) : (((arr_2 [i_0 + 1] [i_0 - 1]) ? (arr_2 [i_0 + 1] [i_0 - 2]) : (arr_2 [i_0 - 3] [i_0 - 3])))));
                var_23 = (arr_1 [i_0 - 2]);
                var_24 = (max(var_24, ((((arr_1 [i_1 - 2]) ? (((arr_2 [i_1 - 1] [i_1 - 1]) ? (arr_4 [i_1 - 1] [i_1 - 3] [i_1 - 2]) : (arr_2 [i_1 + 1] [i_1]))) : (arr_4 [i_0 - 1] [i_0 - 1] [i_1 - 1]))))));
                arr_5 [i_0] [i_0] [i_1] = (max((((arr_0 [i_0 - 3]) ? ((max((arr_2 [i_0] [0]), (arr_2 [i_0] [i_1])))) : ((max((arr_0 [i_1]), (arr_2 [i_0 - 3] [i_1 - 3])))))), (max((arr_3 [i_1 - 2]), (((arr_3 [i_0 - 2]) ? (arr_0 [i_0]) : (arr_0 [i_1 + 1])))))));
            }
        }
    }
    #pragma endscop
}
