/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                arr_10 [i_1] [i_1] [i_2 - 2] [i_2] = (((arr_5 [i_0] [i_1 - 1]) + (arr_6 [i_1] [i_2 - 2])));
                var_14 = (((arr_1 [i_1 + 1] [i_1 + 1]) >> (2798175843 - 2798175816)));
                arr_11 [i_1] [i_1 - 1] = ((-(arr_2 [i_1 + 1])));
            }
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                var_15 = (((arr_8 [i_0] [i_1] [i_3 + 1]) ? (arr_8 [i_0] [i_1] [i_3]) : -32542));
                var_16 = (18446744073709551615 * -22930);

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    arr_17 [i_0] [i_1] = (~2020425003);

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_21 [i_1] = (((arr_13 [i_1] [i_1] [11]) ? (arr_13 [i_1] [i_1] [i_5]) : (arr_8 [i_0] [i_1] [i_3 + 1])));
                        arr_22 [i_4] [i_1] [i_3] [i_1] [i_5] [i_0] [i_5] = ((!((var_8 || (arr_15 [i_1] [i_1])))));
                        var_17 = -23;
                    }
                }
                for (int i_6 = 2; i_6 < 18;i_6 += 1)
                {
                    arr_25 [i_6] [i_3] [2] [i_1] [6] [i_6] &= ((~(arr_7 [i_6])));
                    var_18 -= ((var_13 >= (arr_19 [i_1 - 1] [i_3 - 1])));
                    var_19 = (max(var_19, (((65517 ? var_4 : (((!(arr_12 [i_3] [i_3])))))))));
                }
                var_20 = (((arr_4 [i_0] [i_1]) != var_6));
            }
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_21 ^= (((((arr_9 [6]) + 9223372036854775807)) << (((((arr_4 [i_1 + 2] [18]) + 93911276)) - 55))));
                var_22 &= (((-127 - 1) ? 18446744073709551603 : 1598629893));
                arr_29 [6] [i_1] [i_1] [i_7] = 35;
            }
            for (int i_8 = 2; i_8 < 18;i_8 += 1)
            {
                arr_34 [11] [i_1] [11] = (((arr_32 [i_1] [i_1] [i_8 + 1] [i_8 - 2]) ^ -61));
                var_23 = (max(var_23, -108));
                var_24 = ((var_12 ? var_0 : ((var_12 ? var_7 : (arr_18 [i_0] [i_0] [i_1] [i_1] [i_8])))));
            }
            var_25 ^= (arr_24 [i_1 - 1] [i_1 + 1] [6] [i_1] [i_1]);
            var_26 ^= (arr_4 [i_1 + 2] [6]);
            arr_35 [i_1] = var_0;
        }
        arr_36 [i_0] = (arr_16 [i_0] [i_0] [i_0] [14]);
        var_27 = (((arr_30 [6]) << (-22930 + 22937)));
    }
    var_28 = ((((((((max(var_2, -32550)))) | var_7))) ? (var_6 % var_6) : (!-28090)));
    var_29 &= max(var_11, var_2);
    var_30 = (((3854 ? ((var_13 ? 61717 : var_3)) : var_5)));
    #pragma endscop
}
