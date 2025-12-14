/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_18 -= (((arr_7 [i_2 - 4] [i_2 - 4] [i_2]) ^ ((((((~(arr_3 [i_2])))) ? (4294967274 && 4294967274) : 2147483635)))));
                            var_19 ^= (((arr_3 [i_2]) ? (min(-1, (arr_4 [i_2]))) : ((-(((arr_3 [i_2]) / 1))))));
                        }
                    }
                }
                var_20 -= (((((4294967266 ? (arr_4 [4]) : 15360))) ? ((max((arr_8 [i_0] [i_0]), (arr_8 [i_1] [i_1])))) : (((var_9 + 9223372036854775807) >> (((arr_4 [10]) - 52290))))));
                var_21 = ((~(((~0) ? (((arr_9 [i_0] [i_1]) ? 268431360 : var_6)) : (var_17 == 9148)))));
            }
        }
    }
    var_22 *= ((var_11 <= (((2147483614 > 50308) ? ((var_0 ? 268431360 : var_7)) : 4294967295))));

    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_23 ^= (arr_0 [6]);
        var_24 = ((32 ? 2147483647 : 2147483647));
        arr_13 [i_4] = (!var_4);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_25 = (~0);
        arr_17 [i_5] |= ((var_11 ? var_11 : (arr_15 [i_5] [i_5])));
        arr_18 [i_5] = (((arr_14 [i_5] [i_5]) ? (arr_6 [i_5] [i_5] [i_5]) : var_16));
    }
    #pragma endscop
}
