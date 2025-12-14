/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = 45490;
        var_15 = (min(var_15, ((((-9223372036854775807 - 1) ? 5794896171645111743 : 51)))));
        var_16 = (max(var_16, 0));
        var_17 = ((204 ? ((((arr_1 [i_0]) && (arr_0 [i_0])))) : (!51)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_18 = ((-((44 + (arr_7 [i_3] [i_2 + 1] [i_1] [i_0])))));
                        arr_11 [i_0] [i_0] = var_1;
                    }
                }
            }
        }
    }
    for (int i_4 = 3; i_4 < 15;i_4 += 1)
    {
        arr_14 [i_4] = (((-(!51))));
        arr_15 [i_4 - 1] [i_4] = (((min((arr_7 [i_4 - 2] [i_4 - 3] [i_4] [i_4]), 0)) != (((-(arr_6 [i_4] [i_4 - 3] [i_4]))))));
        var_19 += 124;
        var_20 = ((arr_1 [i_4]) ? 5 : (((arr_13 [i_4 - 2] [i_4 - 2]) ? var_2 : var_1)));
        var_21 += 203;
    }
    var_22 = (max(var_22, (((~(min(49976, var_1)))))));
    #pragma endscop
}
