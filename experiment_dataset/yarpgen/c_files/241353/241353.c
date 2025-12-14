/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_13 != var_3) ? ((0 ? 0 : 110)) : var_9)) - (((((18446744073709551615 ? -14 : var_6))) ? -var_10 : -10684)));
    var_16 = (min(var_16, ((((((max(var_1, var_4)))) && var_12)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_17 = (((0 << 1) ? (arr_0 [i_0 - 1]) : (arr_1 [i_0 - 1])));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_18 ^= ((~(arr_3 [i_0] [i_0] [i_0 + 1])));
            var_19 ^= 84;
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    arr_15 [i_0] [i_3] [i_0] [14] [i_0 + 2] [i_0] = (arr_14 [i_0] [i_0] [i_0 + 1] [i_0]);
                    var_20 = (max(var_20, (((107 ? 1792 : (((arr_0 [i_3]) ? 115 : -21751)))))));
                    var_21 = ((-(!3232293309)));
                }
                arr_16 [i_3] [i_2] [i_2] = ((((!(arr_12 [i_0 + 2] [i_2] [i_2] [0]))) ? (arr_9 [i_0 - 1] [i_2] [i_3]) : (104 | 104)));
                arr_17 [i_3] = ((!(arr_6 [i_0 - 1])));
                var_22 = (max(var_22, var_7));
            }
            var_23 = (arr_3 [i_2] [i_0 + 1] [i_2]);
            var_24 |= (((~141) ? (arr_13 [0] [i_0 + 2] [i_0 - 1] [0]) : var_4));
            arr_18 [i_0 + 2] = ((~(!-61)));
        }

        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            arr_21 [i_5] = (118 << 1);
            arr_22 [i_5] = 255;
            arr_23 [i_5] [i_5] = 120;
        }
        var_25 = (max(var_25, (arr_8 [i_0 + 1] [i_0])));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    var_26 = ((~((var_11 & (arr_20 [i_6] [i_6] [i_6])))));
                    var_27 = -13260;
                }
            }
        }
        var_28 = -25071;
        var_29 = (max(var_29, ((((~2) ? (((arr_5 [i_6] [i_6] [i_6]) & var_13)) : 0)))));
        var_30 = (((arr_27 [i_6]) ^ (arr_3 [1] [i_6] [i_6])));
        arr_33 [i_6] = 0;
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        var_31 = ((var_1 <= (((((arr_11 [i_9] [i_9]) ? -61 : (arr_4 [i_9] [i_9])))))));
        var_32 = (max(var_32, (((-(((var_5 + 9223372036854775807) << (((((arr_11 [i_9] [2]) + 164)) - 37)))))))));
        var_33 = 79;
    }
    #pragma endscop
}
