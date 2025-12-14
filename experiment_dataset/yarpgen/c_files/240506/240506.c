/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((((((!(((var_13 ? var_13 : var_4)))))) * var_14)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((max((arr_0 [i_0] [i_0]), 977))) ? var_13 : ((var_2 - ((((arr_1 [i_0]) <= (arr_0 [i_0] [i_0]))))))));
        var_16 = (min(var_16, ((((((arr_1 [10]) <= ((min(32767, var_3))))) ? (((!(((arr_1 [12]) != var_0))))) : (arr_1 [10]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = var_9;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                {
                    var_17 |= (arr_4 [i_2] [i_3 + 1]);
                    var_18 = (max(var_18, ((((arr_10 [i_1] [i_2]) ? (arr_10 [i_1] [i_1]) : (arr_10 [i_3] [i_3 + 3]))))));
                    var_19 -= -34359738367;
                }
            }
        }
    }
    #pragma endscop
}
