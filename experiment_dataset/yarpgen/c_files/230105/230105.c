/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = var_15;
        arr_4 [i_0] |= (((var_7 > 17001647747296903395) || (((-(arr_1 [i_0]))))));
        var_17 = (max(-var_3, 1391823225791909538));
        var_18 = (!16606);
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_19 = ((~-97) ? (((120 ? var_16 : 120))) : (((arr_10 [i_1] [i_2]) + (arr_0 [i_1] [i_1]))));
            var_20 = ((var_12 ? ((2190670518326333057 ? 211106232532992 : (arr_10 [i_1] [i_1]))) : (~var_2)));
            arr_11 [i_1] = ((32767 > (arr_9 [i_1 + 1])));
        }

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_21 |= (-((((min(var_8, 23))) & ((min(var_1, (arr_9 [i_3])))))));

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                arr_17 [i_1] [i_1] [i_1] = -97;
                var_22 = (min((arr_8 [i_4] [1]), (((!(var_0 && var_6))))));
            }
        }
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            arr_22 [i_1] = min((arr_12 [i_1 + 1]), var_0);
            arr_23 [i_1] = var_5;
            arr_24 [i_1] = ((var_11 ? ((((((12434260487381043024 > (arr_18 [i_1] [i_1])))) > (~23)))) : (((arr_2 [i_1 + 1]) * ((((arr_10 [i_5 - 1] [i_1]) > 9223372036854775782)))))));
        }
        arr_25 [0] [2] |= var_2;
    }

    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_23 |= 1;
        arr_29 [i_6] = ((+(((arr_26 [i_6] [i_6]) & (arr_26 [i_6] [i_6])))));
        var_24 = ((((min((max(23241, -9223372036854775783)), var_11))) ? (var_2 < 56447) : (max((((var_2 <= (arr_27 [i_6])))), ((~(arr_27 [i_6])))))));
    }
    for (int i_7 = 2; i_7 < 23;i_7 += 1)
    {
        var_25 ^= var_2;
        var_26 = ((-((((arr_32 [i_7 - 2] [i_7]) != var_10)))));
        var_27 *= 16256;
        arr_34 [i_7] = ((((var_5 & (arr_30 [i_7]))) | (((arr_30 [i_7]) ? 9223372036854775782 : (arr_30 [i_7])))));
    }
    #pragma endscop
}
