/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((82 ? var_10 : ((14533996044450213071 ? -94 : -83)))), ((((var_4 >> (var_12 + 157))) & var_0))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_17 = (max(var_17, var_0));
        arr_2 [i_0] = ((((((arr_1 [i_0 - 3] [i_0 + 1]) ? (arr_1 [i_0 - 2] [i_0 - 3]) : (arr_0 [i_0 - 3] [i_0 - 2])))) ? (((arr_0 [i_0 - 1] [i_0 + 1]) ? (arr_0 [i_0 - 2] [i_0 + 1]) : (arr_0 [i_0 - 3] [i_0 + 1]))) : (arr_1 [i_0 - 1] [i_0 - 1])));
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 22;i_3 += 1)
            {
                {
                    var_18 = (max(var_18, ((((-var_3 - -91) ? ((max((arr_11 [0] [16] [6] [20]), var_0))) : -99)))));
                    var_19 = ((82 >> (1740499426 - 1740499396)));
                }
            }
        }
        arr_14 [i_1] = 94;
    }
    #pragma endscop
}
