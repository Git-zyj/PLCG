/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = -8134371293681865377;
        var_15 |= 3367375901742210529;
    }
    var_16 = 650718715;
    var_17 = var_8;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_18 = (var_12 > -3367375901742210529);
                arr_7 [i_1] [2] [8] = ((((max(11121297896564022494, var_3))) + (arr_5 [i_1] [i_2])));
                var_19 -= (arr_6 [i_1] [i_1] [i_1]);
                var_20 = (min(var_20, 3367375901742210529));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_12 [i_1] [i_3] [i_3] [i_3] = (((arr_0 [i_3]) ? (arr_0 [i_2]) : 1));
                    var_21 &= ((0 ? (arr_2 [i_1]) : var_0));
                    arr_13 [i_1] = (arr_11 [i_1] [i_2] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
