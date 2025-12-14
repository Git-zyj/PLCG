/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = (min((~32751), var_8));
        var_18 = (((~294989826530694457) ? (arr_1 [i_0]) : (((((arr_3 [i_0]) / -8013610800769964164))))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_19 = arr_6 [i_1];
        arr_8 [i_1 + 2] = (arr_5 [i_1] [i_1]);

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_11 [i_2] = (max(4654, -4654));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_20 = ((!((min((((((arr_12 [6] [6] [i_3 - 1] [i_4]) + 9223372036854775807)) << (30 - 29))), (((!(arr_6 [i_4])))))))));
                        var_21 = ((((~-4654) ? (min((arr_16 [i_1 - 2] [i_1] [3] [3] [i_4]), var_16)) : (arr_13 [i_4] [i_2] [i_1]))));
                    }
                }
            }
            arr_17 [i_1] [i_1] [i_1] = (var_10 & ((9172245160732230553 >> (((~-4654) - 4605)))));
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            var_22 = (max(var_22, var_0));
            var_23 = ((((((arr_14 [i_5] [i_5] [i_6] [12]) ? 7161356389205997405 : (arr_12 [8] [8] [i_5] [i_5])))) ? -4654 : ((((arr_14 [10] [i_5] [i_6 - 1] [i_6]) * 4654)))));
            arr_26 [i_5] [i_5] |= var_2;
            var_24 = (min(var_24, ((-121 ? 121 : 18151754247178857159))));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_25 |= (arr_15 [i_5]);
            var_26 = 2088905381902170073;
        }
        var_27 = -27919;
    }
    var_28 |= var_8;
    var_29 = (min(var_29, (((var_6 && ((!((max(var_10, var_6))))))))));
    #pragma endscop
}
