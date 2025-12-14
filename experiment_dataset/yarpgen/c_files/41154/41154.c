/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_7 ? var_3 : var_6))) & var_2));
    var_13 = min(var_10, (~var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_2] [i_1] [i_2] = (max(((var_10 ? var_8 : (max((arr_4 [i_2] [i_1]), -2108623113)))), (-2147483647 - 1)));
                    arr_7 [i_2] [i_2] [i_2] [i_0] = (((arr_5 [i_0] [i_2] [i_1] [i_2]) - ((((arr_5 [i_0] [i_2] [i_2] [i_0]) < (arr_5 [i_0] [i_2] [i_1] [i_2]))))));
                    arr_8 [i_2] [1] [i_2] = (((arr_4 [i_2] [5]) ? var_1 : ((((arr_0 [i_2]) ? 3581415518 : ((max(var_5, -566091006))))))));
                }
            }
        }
    }

    for (int i_3 = 4; i_3 < 7;i_3 += 1)
    {
        var_14 = var_8;
        arr_13 [i_3] = ((-((-(arr_10 [i_3 - 1])))));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_16 [i_4] = (((((max((arr_14 [i_4]), var_11))) && var_0)));
        arr_17 [i_4] = var_9;
        arr_18 [i_4] = (max((((arr_15 [i_4] [i_4]) < (arr_15 [i_4] [17]))), (((arr_15 [i_4] [i_4]) <= var_3))));
    }
    #pragma endscop
}
