/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (min(var_11, ((((arr_0 [4]) ? (((946925111526691265 == (arr_0 [4])))) : (var_1 == 946925111526691265))))));

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            var_12 = ((arr_3 [i_1 - 1] [i_1 - 1]) == var_5);
            arr_5 [i_0] = ((~(arr_4 [i_0])));
        }
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            var_13 = (min(var_13, (((var_2 * (((arr_8 [12]) / var_2)))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_14 = (~229);
                            var_15 -= ((~(arr_15 [i_0] [i_2 - 1])));
                            arr_18 [i_0] [14] [i_0] [i_3] [14] [i_0] &= (arr_16 [i_2] [i_2 - 2] [i_2] [i_2] [12]);
                        }
                    }
                }
            }
        }

        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            var_16 = (~0);
            var_17 = (((((8 ? 17499818962182860343 : var_3))) ? var_1 : (16097 | 3)));
        }
    }
    for (int i_7 = 2; i_7 < 8;i_7 += 1)
    {
        var_18 = (((min((arr_14 [i_7 - 2]), 243)) << ((((((~((var_3 ? 0 : (arr_4 [i_7]))))) + 28)) - 7))));
        var_19 -= ((((min(((~(arr_23 [i_7]))), (3 / var_6)))) ? ((max(9, (arr_19 [i_7 + 1] [i_7])))) : 1636515991));
        var_20 = ((22 << (9223372036854775807 - 242)));
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        var_21 = ((((var_1 ? -6491 : (arr_16 [i_8] [i_8] [i_8] [i_8] [6])))));
        var_22 *= ((((arr_17 [i_8] [i_8] [i_8] [i_8] [i_8]) < var_3)));
        var_23 = (((min((~17), 0)) & (~var_6)));
        var_24 -= ((+((((((var_3 << (((arr_15 [i_8] [i_8]) - 142))))) && 12610862721202761746)))));
        arr_29 [i_8] [i_8] = (((max(((1 / (arr_26 [i_8]))), ((max(var_3, var_6))))) | (min((~32), var_2))));
    }

    /* vectorizable */
    for (int i_9 = 3; i_9 < 22;i_9 += 1)
    {
        var_25 = (min(var_25, (((~(~var_2))))));
        var_26 = (min(var_26, ((((0 ? 1 : -103))))));
        var_27 = ((var_3 ? (arr_32 [i_9 + 3]) : (arr_32 [24])));
    }
    var_28 = var_5;
    #pragma endscop
}
