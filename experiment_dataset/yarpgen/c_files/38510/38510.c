/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (min((((arr_0 [i_0]) ? ((38 ? 2538644654 : 246)) : ((((-39 < (arr_1 [i_0]))))))), (arr_0 [i_0])));
        arr_2 [i_0] = 49800;
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_17 = -var_12;
                    arr_11 [i_1] [i_2] |= (((((((((arr_8 [8] [i_2] [i_3] [i_1]) ? 6899917199502275206 : (arr_6 [i_1] [i_2] [i_3])))) ? (arr_8 [10] [14] [14] [i_3]) : (arr_7 [i_2] [i_3])))) ? (-66 < 21715) : -45));
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_18 += var_4;
        var_19 = (var_13 | 2147483647);
        arr_15 [i_4] = ((-(var_6 % 13926)));
    }

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    {
                        var_20 *= (((max((arr_12 [i_5]), 18420256866655028693)) - (var_5 >= 199)));
                        arr_26 [i_5] [i_5] [i_7] [i_8] = -51;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 17;i_10 += 1)
            {
                {
                    arr_32 [i_5] [i_5] [i_10] = (min(108, 11497685997662968963));
                    var_21 = (((var_0 || 1385013963) == (!-1)));
                    var_22 = (((arr_25 [i_10] [i_10 - 1] [i_5] [i_10]) ? (((-((-(arr_30 [i_5] [i_9] [i_5] [i_5])))))) : (arr_1 [9])));
                }
            }
        }
    }
    #pragma endscop
}
