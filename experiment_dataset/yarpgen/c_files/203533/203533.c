/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((((max(3462, var_9))) ? var_9 : 205));
    var_16 *= max((var_9 / 3393931102158604460), (!var_7));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 -= ((!(~7)));
                    var_18 -= 1;
                    var_19 = ((-(var_8 || 7)));
                }
            }
        }
        arr_10 [i_0] = (arr_9 [1] [10] [i_0 - 1]);
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        var_20 ^= ((1 * (arr_4 [i_3 + 1])));
        var_21 = var_13;

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_22 = (min(var_22, var_7));
            arr_15 [i_3] [i_4] [2] = ((8493 ? (arr_4 [i_3 - 1]) : ((((arr_6 [i_4]) ^ 1)))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {
                    {
                        var_23 -= var_1;
                        arr_21 [i_3] [i_4] [12] [i_6] = 1;
                    }
                }
            }
        }
        for (int i_7 = 2; i_7 < 20;i_7 += 1)
        {
            var_24 = (arr_20 [i_7] [i_3 + 1] [i_3 + 1] [i_3]);
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    {
                        var_25 = (min(var_25, (arr_18 [2] [i_8 - 2] [i_7 - 2] [0] [2])));
                        arr_29 [i_8] = (i_8 % 2 == zero) ? ((((arr_25 [i_8] [i_9]) >> (-32383 + 32399)))) : ((((((arr_25 [i_8] [i_9]) + 9223372036854775807)) >> (-32383 + 32399))));
                        arr_30 [i_9] [16] [i_7] [i_7 + 1] [i_3 - 1] |= (arr_28 [i_3] [i_7] [i_8 + 2] [i_8 + 2] [i_8] [i_9]);
                        arr_31 [18] [i_8] [i_8] [i_9] = -3393931102158604461;
                    }
                }
            }
            var_26 = var_7;
        }
        var_27 = arr_5 [i_3 - 1] [i_3 - 1] [i_3 + 1];
    }
    #pragma endscop
}
