/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_11 -= ((var_3 ? (((-((max(var_1, (arr_0 [i_0] [i_0]))))))) : var_7));
        arr_2 [i_0 + 1] [i_0 - 1] = ((((((((arr_0 [i_0] [6]) ? var_3 : var_9))) || -var_0)) ? var_0 : (min(((-1 ? var_2 : -1)), var_6))));
        var_12 = ((((arr_0 [15] [i_0]) ? var_9 : var_7)));
        var_13 = (-1 ? ((+((-1 ? (arr_0 [i_0 + 1] [i_0 + 2]) : var_9)))) : (arr_0 [i_0] [1]));
        var_14 = var_3;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] = (((((var_6 >> (-13 + 14)))) ^ var_0));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_1] = var_9;
                        arr_17 [i_1] [i_3] [i_1] [i_1] = (((((arr_3 [i_2]) == var_8))) * var_3);
                        var_15 = var_9;
                        var_16 -= (var_0 / var_10);
                        var_17 = 3;
                    }
                }
            }
        }
        var_18 -= (((var_4 || (arr_15 [20] [14] [i_1 - 1] [i_1]))) ? (((arr_14 [i_1] [i_1] [8] [i_1 - 1]) ? var_1 : -1)) : ((-(arr_5 [i_1]))));
        var_19 *= var_6;
    }
    var_20 = (max(var_20, var_2));
    #pragma endscop
}
