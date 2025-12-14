/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = (~-305034151);
        var_15 = (((((arr_0 [i_0]) * var_5)) >> ((var_0 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_16 *= (-29999 % 13407675604232602561);
        var_17 = -10668;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_18 = (1 <= var_11);
                    arr_9 [i_1] |= ((!(arr_1 [i_2 - 1] [i_2 + 1])));
                }
            }
        }
    }
    var_19 *= (144 | var_1);
    #pragma endscop
}
