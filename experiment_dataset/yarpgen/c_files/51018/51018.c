/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [21] = 24260;
        var_17 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_18 |= (!255);
                    arr_11 [i_2] [i_3] = arr_2 [i_2];
                }
            }
        }
        var_19 = ((~((9223372036854775807 >> (((((-9223372036854775807 - 1) - -9223372036854775805)) + 62))))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        var_20 = var_11;
        var_21 = ((4294967295 ? (arr_5 [i_4 + 2]) : (arr_5 [i_4 - 1])));
    }
    var_22 = 1073741824;
    var_23 = ((-411956765 & (((min(-108, 15))))));
    var_24 = -1073741825;
    #pragma endscop
}
