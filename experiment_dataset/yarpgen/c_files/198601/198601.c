/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] |= (((158 <= (arr_0 [i_0]))));
        arr_4 [3] [4] = (((max((min((arr_0 [0]), -9223372036854775804)), -32764))) ? (((-9223372036854775804 | 983203331) ? (((arr_2 [0]) ? 9223372036854775803 : 9223372036854775807)) : (((max(98, 136)))))) : 1);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_19 = (((arr_6 [18]) / ((min(var_10, var_12)))));
        var_20 = max(-8, (((arr_5 [i_1]) - (arr_5 [i_1]))));
        var_21 -= var_3;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_22 = ((((((arr_5 [i_2]) || (arr_10 [17])))) | 0));
        arr_11 [3] = (((((var_1 != (arr_5 [2])))) < (arr_5 [i_2])));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    arr_19 [5] [19] [8] = var_8;
                    arr_20 [i_3] [19] = 136;
                }
            }
        }
        arr_21 [i_3] = ((arr_8 [16]) ? ((-(arr_6 [i_3]))) : ((102 ? (arr_13 [3] [1]) : (~119))));
        var_23 = min((min(var_11, var_18)), var_1);
    }
    var_24 = (((var_6 << ((((var_0 ? var_11 : var_7)) - 46948)))));
    #pragma endscop
}
