/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_16 = ((var_14 & (min(((4294967295 ? 18240 : 61505)), 18240))));
                    arr_6 [i_1] [i_0] = (max(((((max(18240, 18230))) ? ((max((arr_0 [i_2 - 1]), (arr_5 [i_0] [i_1] [2] [i_0])))) : -782085404)), (!18207)));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_17 = (min(-782085404, var_0));
                        arr_10 [i_2] = 0;
                    }
                }
            }
        }
        var_18 &= (min((max((~var_6), (arr_5 [i_0] [i_0] [i_0] [i_0]))), (((arr_9 [5] [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0] [i_0] [6])))));
        var_19 = (min(var_19, var_7));
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 12;i_4 += 1)
    {
        var_20 = (((var_13 | (arr_12 [i_4] [1]))));
        var_21 = var_4;
        arr_14 [i_4] = var_0;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_22 = (min(var_22, (((((((arr_16 [6] [0]) ? (arr_15 [i_5]) : var_2))) ^ ((3074658955 & (arr_16 [8] [8]))))))));
        var_23 |= -18239;
        var_24 = (min(var_24, (((1677 >= (arr_16 [10] [i_5]))))));
    }
    var_25 = ((var_10 ? (((min(-28, var_15)))) : (min(((min(var_8, -18221))), (min(3283154144, 31))))));
    #pragma endscop
}
