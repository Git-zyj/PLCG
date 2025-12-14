/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((-((((var_15 ? 4294967295 : var_6)) >> (127 - 96)))));
    var_18 = var_2;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 |= (((~(arr_6 [i_0 - 1]))));
                    var_20 = (max(((((~var_3) ? -113 : (((arr_5 [i_1] [i_0]) ? -118 : 31636))))), (arr_3 [i_1])));
                    var_21 = 14;
                }
            }
        }
        var_22 = ((-(4206530012 | 88437284)));
        var_23 = ((((max((arr_4 [i_0 + 2]), (arr_4 [i_0 - 1])))) > var_11));
        var_24 = 54159;
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {
        var_25 = 53;
        var_26 = (((((((arr_10 [i_3]) || 1708166639298145134)))) - var_6));
    }
    #pragma endscop
}
