/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_17 = (arr_0 [i_0]);
        var_18 += (max((max((var_10 | 0), (arr_2 [i_0] [i_0]))), (arr_0 [2])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (min(((max(((max(-75, 1))), (arr_0 [i_0])))), (min(((max(239, 1))), (((arr_1 [i_2]) ? (arr_3 [i_0] [i_1]) : var_5))))));
                    var_19 = arr_6 [i_0] [i_0] [i_2];
                }
            }
        }
        arr_10 [1] &= ((((max((arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1]), (arr_0 [10])))) << (((arr_0 [20]) - 58508))));
        var_20 = (((((~(arr_0 [i_0])))) ? (((arr_8 [i_0] [i_0] [i_0] [i_0 - 1]) ? 1 : -56)) : ((((var_5 ? 1 : (arr_1 [i_0]))) & -15))));
    }
    var_21 = (min((((!(((12335 ? var_8 : var_12)))))), var_15));
    var_22 = (max(var_2, ((((min(19609, var_10))) ? var_6 : 1))));
    var_23 = (((((var_4 ? (var_5 / 1) : var_1))) ? ((max(var_8, var_13))) : ((((max(1, 62))) - ((var_13 ? 218 : var_10))))));
    #pragma endscop
}
