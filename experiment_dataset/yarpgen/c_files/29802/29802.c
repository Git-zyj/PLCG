/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((~(-1381965249 & -1381965220))), ((~(max(-1056791706, var_6))))));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_15 = (((1381965248 > 2750019022) ^ (arr_0 [i_2])));
                    arr_7 [i_1] = ((0 ? (2750019022 ^ 3248709730) : ((max(1381965249, 1381965248)))));
                }
            }
        }
        var_16 = (((((arr_4 [i_0 + 1]) ? (arr_4 [i_0 - 1]) : var_3)) % var_0));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_10 [3] [3] = (((-9223372036854775807 - 1) | 64));

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_15 [i_3] [i_4] = 1;
            var_17 = (((1544948284 << (326296217 - 326296206))));
            arr_16 [i_3] = (!((((arr_3 [i_3] [i_4]) ? -326296218 : (arr_11 [i_4])))));
        }
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            var_18 = ((((var_4 ^ (arr_0 [i_3]))) >> (((arr_14 [14] [i_5 - 2] [i_5]) + 2102964135))));
            var_19 = (min(var_19, ((((arr_6 [i_5 - 2] [i_5] [i_5 + 1] [i_5 - 2]) / (((arr_8 [i_3]) ? var_10 : var_12)))))));
        }
    }
    #pragma endscop
}
