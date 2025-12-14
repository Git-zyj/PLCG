/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (max(var_17, (arr_0 [1] [i_0])));
        var_18 = (max(var_18, ((((-(arr_0 [i_0] [i_0])))))));
        var_19 = (max(var_19, ((((arr_0 [6] [i_0]) == (arr_1 [i_0]))))));
        arr_2 [i_0] = ((!var_4) ? (arr_1 [i_0]) : var_12);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_11 [i_2] = var_8;
                        arr_12 [12] [i_2] [1] [i_2] [7] = -25;
                        var_20 *= 92;
                        arr_13 [i_0] [12] [i_2] &= ((var_5 ? ((~(arr_6 [i_2] [i_1] [i_2]))) : (arr_6 [i_1 + 1] [i_1 + 1] [i_1 - 1])));
                    }
                }
            }
        }
    }
    var_21 = (~var_10);
    #pragma endscop
}
