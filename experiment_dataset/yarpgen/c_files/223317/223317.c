/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = (min(var_12, (((!(((var_9 * ((min(-83, var_5)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_13 = ((~((min(224, -17742)))));
                        arr_11 [i_1 + 1] [i_2] [i_2] = -13090;
                        arr_12 [i_2] [5] [i_2] [i_3 - 1] = (min((min((arr_4 [i_2]), (arr_4 [i_2]))), (!17741)));
                        arr_13 [i_0] [i_0] [i_2] = (max(((max(182, (min(var_0, var_0))))), (min(((243 ? var_4 : 4593671619917905920)), 194))));
                    }

                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        arr_17 [i_0 + 1] [i_2] [i_0 + 4] [i_0 + 4] [i_0] = ((var_6 ? (((113 ? (arr_6 [i_2] [11] [i_2 + 2]) : var_9))) : (-8 - 17741)));
                        var_14 = 0;
                    }
                    arr_18 [i_2] [i_1] [i_2] [i_2] = ((((max(((var_4 ? var_5 : var_10)), ((min(var_0, var_0)))))) + -4593671619917905913));
                    arr_19 [i_2] = (arr_15 [i_2] [i_1 + 1] [i_2 + 1] [i_2] [i_2 + 1]);
                }
            }
        }
    }
    var_15 = var_0;
    #pragma endscop
}
