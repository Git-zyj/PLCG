/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = (max(var_15, var_7));
    var_16 = 83;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (!var_8);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_11 [i_0 + 1] [i_0 + 1] [8] [i_0 - 1] = var_7;
                    arr_12 [0] [i_0] [i_0] [i_0] = (arr_10 [i_0 + 1] [i_0 + 1] [i_2] [i_0 + 1]);
                }
            }
        }
        var_17 = (((arr_5 [i_0]) ? (((((var_5 ? var_10 : 10))) ? (arr_10 [i_0] [i_0 - 1] [i_0] [i_0]) : (arr_5 [5]))) : var_10));
        arr_13 [5] [7] = ((!(((((!(arr_7 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]))) ? ((var_2 ? var_12 : (arr_5 [i_0]))) : (((var_6 ? 3397003737 : 897963562))))))));
        var_18 = var_7;
    }
    var_19 = var_13;
    #pragma endscop
}
