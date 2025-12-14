/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_13 ^= (((arr_1 [i_0 + 2] [i_0 - 1]) ? var_1 : var_5));
        arr_2 [i_0] = 26;
        var_14 = ((-(arr_1 [i_0] [i_0])));
        var_15 = (!-3371204088713607646);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_2] [4] [i_0] [4] [i_2] |= (arr_9 [i_0 - 1] [i_3]);
                        var_16 = (((((-44 ? (-127 - 1) : 1))) ? ((var_10 ? -108 : var_8)) : ((2962331461 ? var_2 : 61025))));
                    }
                }
            }
        }
    }
    var_17 = ((((min(((20 ? var_3 : var_4)), ((128 ? var_10 : var_9))))) ? (max((~-127), (max(2113929216, 120)))) : ((((~113736534) > -124)))));

    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_18 -= ((~(max(34, (arr_11 [i_4])))));
        arr_14 [i_4] [i_4] = -var_7;
    }
    var_19 ^= (max(2046014542, -124));
    #pragma endscop
}
