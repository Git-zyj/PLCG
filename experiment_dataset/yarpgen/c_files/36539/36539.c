/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_11, ((var_11 ? (((min(var_1, var_9)))) : ((var_6 ? var_13 : var_11))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (min((((~(arr_2 [i_1 + 3])))), (max(var_0, ((min(var_4, (arr_3 [i_2]))))))));
                    arr_9 [i_1] [7] = (max((min(((4473042254476225796 ? (arr_6 [10] [8] [i_2]) : (arr_0 [i_0] [15]))), (arr_6 [i_2] [3] [i_0]))), ((0 >> (-23097 + 23123)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            {
                var_16 = ((((max((arr_13 [i_4 - 2] [i_4 + 1]), 23091))) ? (min(((max(-10753, (arr_10 [i_3] [i_3])))), (max(var_2, (arr_13 [i_3] [i_3]))))) : var_5));
                arr_14 [i_3] [12] = (min(((min(64, var_2))), ((23091 ? ((-25491 ? (arr_11 [i_3] [8]) : var_13)) : (min(var_0, var_5))))));
                arr_15 [i_3] [i_4] = (max(467431357554808375, 17979312716154743240));
                var_17 = (max(11344, var_5));
            }
        }
    }
    var_18 = min((max(((max(var_8, var_12))), ((var_10 ? 2569150314 : 32765)))), ((((17979312716154743240 * var_0) ? var_10 : -var_9))));
    var_19 = (max(var_19, var_13));
    #pragma endscop
}
