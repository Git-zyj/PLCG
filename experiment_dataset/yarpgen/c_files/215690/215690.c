/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = (min(var_18, var_12));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = 18014398492704768;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_20 = var_11;
            var_21 &= -var_8;
        }

        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            var_22 |= (min((((1073709056 ? (arr_3 [12] [i_2 - 1] [i_2 + 1]) : (arr_3 [1] [i_2 - 1] [i_2 + 1])))), ((((max(var_13, (arr_5 [8])))) ? (((arr_4 [i_0] [10]) | 9223372036854775807)) : 0))));
            var_23 = ((-18446744073709551607 ? (max((((var_10 ? var_10 : (arr_3 [i_0] [i_2] [i_2])))), (arr_7 [i_2 - 1] [i_0]))) : 29));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_24 = (max(var_24, ((((arr_5 [6]) ? (arr_5 [0]) : (arr_2 [12] [12]))))));
                var_25 = (((var_10 / var_7) ? (((arr_4 [i_2] [1]) * 18446744073709551607)) : (arr_1 [i_0])));
            }
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_26 = (max((((~(arr_5 [i_0])))), -var_4));
            var_27 &= (((((arr_3 [i_0] [i_0] [i_4]) ? (arr_1 [i_4]) : (max((arr_1 [i_4]), (arr_10 [i_4] [i_4]))))) * (((-(max((arr_9 [i_4] [12] [i_4]), (arr_12 [i_4] [i_4]))))))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_28 += ((arr_0 [i_0]) ^ var_4);
            var_29 = (max((0 >> 0), ((((arr_7 [i_0] [i_5]) << (((arr_7 [i_0] [i_5]) - 6318590210708097178)))))));

            /* vectorizable */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                var_30 = ((~(arr_16 [i_0])));
                var_31 |= (var_1 ? (arr_12 [i_6] [10]) : (arr_9 [i_6] [i_5] [12]));
                var_32 = (((arr_10 [i_0] [i_0]) / (arr_10 [i_0] [i_0])));
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_33 = var_5;
                var_34 &= (arr_0 [i_5]);
            }
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                var_35 = ((((((((arr_4 [i_0] [i_5]) + 9223372036854775807)) >> (((arr_4 [1] [i_5]) + 8829647939331706989))))) ? 1 : 1));
                var_36 |= var_13;
                var_37 = (min((max((max((arr_23 [i_0] [i_5] [i_0]), 699904600097149879)), (max(var_1, 0)))), (((arr_13 [i_8]) ? var_6 : ((1 ? (arr_22 [i_0]) : 0))))));
            }
        }
    }
    var_38 = (((((((1 ? var_0 : 508698247))) && var_10)) ? 1 : (min((((var_0 ? 1 : 2147483647))), (min(-92, var_8))))));
    #pragma endscop
}
