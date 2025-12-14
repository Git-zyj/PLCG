/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_13, (-9223372036854775807 - 1)));
    var_18 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (min(var_19, var_13));
        arr_4 [i_0] |= ((!((((arr_0 [i_0] [i_0]) ? var_2 : var_4)))));
        arr_5 [6] [i_0] = (arr_2 [i_0]);
        arr_6 [8] = ((var_10 ? var_5 : (((-9223372036854775807 - 1) * var_6))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = ((((-(arr_1 [i_0])))) || -13771);
                    arr_11 [i_0] [i_2] = (15 + 7093374153314299703);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_21 |= (~0);
        var_22 = ((~(arr_13 [i_3] [i_3])));
    }
    #pragma endscop
}
