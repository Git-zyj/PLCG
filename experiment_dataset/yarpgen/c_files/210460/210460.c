/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = (min((max((var_7 / var_5), var_1)), (var_4 != var_11)));
                    var_16 |= ((var_0 % (min(var_4, var_6))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_17 -= -50;

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_18 |= (((((((30 ? -80 : var_2)) > var_14))) % (((-4857904928338955453 / var_4) ? (((var_8 + 2147483647) >> (1023 - 1020))) : var_11))));
            var_19 = ((var_9 ? var_7 : var_7));
            arr_17 [i_3] [i_3] [i_4] = var_13;
        }
        var_20 = (max(var_20, ((var_10 - (var_10 / var_9)))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    {
                        var_21 ^= ((!(1260384545955338372 - var_14)));
                        arr_24 [6] [i_7 + 1] [3] [i_7] [i_3] [i_6] = var_7;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_22 = ((var_14 > (!var_11)));
        var_23 = (!var_12);
    }
    #pragma endscop
}
