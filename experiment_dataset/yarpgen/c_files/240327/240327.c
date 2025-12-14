/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_4 ? ((1125899906841600 ? -3719 : 5774)) : var_9))) ? var_5 : (((-1127187321615277413 > var_2) ? var_1 : (min(var_0, var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = (((((min(1663189611, -83)) + 2147483647)) >> (5774 - 5756)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, ((max(((((!(arr_8 [i_0] [i_1] [0] [i_3]))) ? (!1127187321615277413) : 59762)), ((((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_6 [i_0] [10] [i_0])))) ? (((arr_7 [13] [i_1] [i_1] [i_1]) & var_0)) : ((((arr_3 [i_2] [i_2] [i_0]) <= (arr_2 [i_2] [i_3])))))))))));
                            var_15 = (max(var_15, ((((arr_7 [16] [i_1] [3] [i_0 + 1]) < ((-(((arr_2 [i_3] [i_1]) ? 146 : (arr_6 [i_0] [i_1] [i_2]))))))))));
                        }
                    }
                }
                var_16 = (arr_2 [i_0 + 2] [i_1]);
                var_17 = (((((-(arr_10 [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 + 1])))) ? ((((((arr_0 [i_0]) - var_4))) ? (((arr_2 [i_0] [i_0]) + 5750)) : (((var_3 ? (arr_4 [i_1] [i_0] [i_0]) : var_3))))) : (arr_0 [i_0 + 1])));
            }
        }
    }
    #pragma endscop
}
