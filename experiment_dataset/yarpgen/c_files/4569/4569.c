/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 1;
        arr_4 [1] = (((var_11 * var_8) ? (((~(arr_1 [i_0])))) : (arr_2 [i_0] [i_0])));
        arr_5 [i_0] [i_0] = var_9;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 = (max(var_15, (((var_3 ? 27 : (arr_1 [i_1]))))));
        var_16 = var_6;
        var_17 -= var_1;
        var_18 = ((var_0 ? 3664515414281238064 : (arr_1 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_19 *= 3824741356;
                        var_20 |= (arr_7 [2]);
                    }
                }
            }
        }
    }
    var_21 = ((-((var_14 ? var_2 : var_8))));
    #pragma endscop
}
