/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max(471601883, 471601885)) <= (!var_1))));
    var_12 = (max(var_12, var_6));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (max(((min(((max((arr_0 [12]), (arr_0 [13])))), (min(3823365413, (arr_1 [i_0])))))), var_8));

        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            var_14 = (min(var_14, (((2 ? ((min(var_1, (arr_2 [i_1 - 2] [i_1 - 2])))) : (arr_0 [i_1]))))));
            arr_4 [12] [i_1] [i_1] = ((!(((((((arr_0 [14]) ? var_7 : var_6))) ? (arr_0 [i_0]) : (!var_3))))));
            arr_5 [i_0] [i_0] [i_0] = (((max(5105675877489075629, (((-(arr_2 [i_0] [14])))))) == (arr_2 [i_0] [i_1])));
            var_15 = var_5;
        }
        arr_6 [i_0] = ((var_4 ? var_10 : (((max((arr_3 [i_0] [i_0]), var_0))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] = ((176 ? 106 : (arr_13 [i_4] [i_3] [i_2])));
                        arr_19 [i_2] [i_3] [i_4] [i_5] [i_5] = var_2;
                        arr_20 [i_5] [i_5] [0] [i_4] &= (((arr_14 [i_2] [i_4 - 2] [i_4]) << (var_10 - 37921)));
                    }
                }
            }
        }
        arr_21 [3] = var_2;
        arr_22 [7] [i_2] = (arr_12 [i_2] [2] [i_2]);
    }
    #pragma endscop
}
