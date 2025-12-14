/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = 4095;
        arr_3 [i_0 + 1] [i_0] = ((var_12 ? (((!(arr_0 [i_0 + 2])))) : ((((arr_1 [i_0 + 2] [i_0]) || 18446744073709551601)))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    arr_13 [i_1] [10] [i_3] = (~4097);
                    arr_14 [i_2 + 2] [13] [i_3] = (((((arr_12 [i_2 + 2] [i_1]) ^ 4337270376183558140)) == 4119));
                    arr_15 [i_1] [i_2 - 2] [i_3] [i_1] = 1;
                    arr_16 [i_1] [5] [i_3] = ((((((~(~-536870912))) + 2147483647)) >> (((((min(1040187392, (arr_9 [i_2] [0]))) ^ (~var_4))) - 1040197195))));
                }
            }
        }
        arr_17 [i_1] = (max((var_2 / 63686), var_7));
        arr_18 [i_1] = (((((arr_1 [1] [i_1]) && var_2)) ? ((var_7 ? var_7 : var_5)) : ((-29 ? (arr_1 [i_1] [i_1]) : 536870890))));
        arr_19 [1] = ((-(+-1)));
        arr_20 [i_1] = (((!60) ? var_10 : ((max(24, -10)))));
    }
    var_14 = ((((var_4 ? 4 : var_2))) ? ((max(2192340560, var_7))) : (((((-1 + 2147483647) << (((-536870914 + 536870915) - 1)))) / var_9)));
    var_15 = ((14109473697525993476 ? (min((1 > 118), ((1920 ? 5 : -12)))) : -77));
    var_16 = var_11;
    var_17 = (min(var_0, -var_11));
    #pragma endscop
}
