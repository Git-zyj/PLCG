/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_20 = ((980036841 > (((arr_7 [i_3] [i_1] [i_0]) ? var_14 : (arr_2 [i_3] [i_2])))));
                        var_21 = var_3;
                        var_22 = var_14;
                    }
                }
            }
        }
        var_23 = var_4;
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        var_24 = 6776218039784955874;
        arr_14 [i_4] = var_14;
        var_25 -= (arr_3 [i_4] [i_4] [1]);
        var_26 = (((arr_9 [i_4] [i_4] [1] [i_4]) ? (min(var_17, (arr_9 [i_4] [i_4] [i_4] [10]))) : var_2));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_27 |= (arr_15 [i_5] [i_5]);
        var_28 = var_6;
    }
    #pragma endscop
}
