/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((-var_5 || ((max(var_0, var_3)))))) > var_7);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_15 += (((arr_0 [i_0 - 1] [i_0 + 2]) >= 61467));
        var_16 = (576460752303423488 + 3);
        var_17 -= ((61467 ? 12050 : 242));
        arr_4 [i_0] = (((arr_0 [i_0 + 1] [i_0 - 1]) ? var_4 : (arr_1 [i_0 + 1])));
    }

    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_18 = (arr_6 [i_1]);
        var_19 = (((arr_7 [i_1] [i_1 - 1]) ? (0 / 263537242) : var_8));
    }

    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_20 = (~var_10);
        var_21 = (max(var_21, 3391137349));

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_22 = (arr_10 [i_3]);
            var_23 = var_2;
            var_24 -= (arr_8 [i_2 + 1] [14]);

            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                var_25 -= ((4068 ^ (((max(var_2, 0))))));

                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    arr_16 [i_2] = (arr_13 [i_5] [i_4] [i_2 + 2]);
                    var_26 = (~var_4);
                }
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    var_27 = (min(var_1, (((((min((arr_20 [i_2] [i_3] [i_4] [i_3]), var_13))) ? ((var_7 ? var_12 : var_5)) : ((var_4 & (arr_8 [i_2] [i_2]))))))));
                    var_28 = var_7;
                    var_29 = ((((11204 > (min((arr_18 [i_2] [i_3] [i_4 + 3] [i_4 + 3]), (arr_10 [i_4]))))) ? (18446744073709551601 - 6963204704717986631) : (((var_5 ? ((231995342145961124 ? var_2 : var_7)) : ((((arr_12 [i_4 + 2]) || -610505031))))))));
                    var_30 = (((max((arr_15 [i_2] [i_2] [i_2 + 3] [i_4 - 1]), 56023156)) - ((((arr_8 [i_2 - 2] [i_2]) > (var_12 / var_1))))));
                }
                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    arr_23 [18] [18] [18] [i_3] [18] = ((+(max((23 | var_7), (~var_9)))));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_31 = (1479128487 - var_1);
                        var_32 = (((var_2 ? var_1 : var_7)));
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        var_33 = (((var_2 / var_9) ? 40416 : (((arr_26 [i_9] [i_3] [i_4] [i_7] [16]) ? var_3 : (arr_19 [i_2] [i_2] [i_4] [i_3] [i_4])))));
                        arr_28 [i_9] = ((~(arr_27 [i_9 + 1] [i_4 + 3] [i_4 - 1] [i_4])));
                    }
                }
                arr_29 [i_2] [i_2] [i_2 + 1] [i_2] = ((((arr_22 [i_2 + 1]) + (arr_22 [i_2 - 1]))));
                var_34 = ((((((~(arr_22 [i_4]))))) ^ var_5));
            }
        }
    }
    #pragma endscop
}
