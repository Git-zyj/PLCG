/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (min((((-43 ? -6734919773911046322 : 63219))), ((~(arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_18 = 6734919773911046328;
            arr_6 [i_0] = var_17;
            arr_7 [i_0] [i_0] [i_1] = ((((((((-30725 ? 100 : 241))) / (6734919773911046317 ^ 0)))) ? var_2 : -28));
        }
        var_19 = (max(((min(-28, 112))), var_8));
        var_20 = (4 >> 3);

        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_21 ^= ((6974659152330926731 ? 18446744073709551609 : 12186));
            arr_10 [8] &= ((~(-174263686 / 228)));
            var_22 -= ((+((-28 ? (arr_1 [8]) : 2339))));
        }
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            arr_13 [i_0] [4] [i_0] = (arr_0 [i_0]);

            /* vectorizable */
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                var_23 = (18446744073709551611 < 885930259);
                arr_16 [i_0] [i_0] = (~-10539);
                arr_17 [1] [1] [4] [0] &= (arr_5 [i_4 - 1] [4] [i_3 - 2]);
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {

                /* vectorizable */
                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {
                    arr_22 [i_0] [i_0] [i_0] [i_5] [i_0] |= (((~10538) - -0));

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        arr_25 [i_5] [i_3] [i_3] [i_3 + 1] [i_3] [10] &= ((var_16 / ((4294967286 ? (arr_9 [i_3]) : var_14))));
                        arr_26 [i_5] [i_6] [i_5] [i_6] [i_7] [i_0] = ((30707 ? -6603 : 8831));
                    }
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_24 = (~10538);
                        arr_34 [i_0] = ((13 ? 10967294984468189754 : 113));
                        arr_35 [i_0] [i_0] [i_0] [i_0] [i_9] [i_0] [3] = ((125 ? ((243 ? (arr_3 [i_3 - 1] [7] [i_5]) : 11)) : (((((885930259 ? (arr_1 [i_0]) : 0)))))));
                    }
                    for (int i_10 = 2; i_10 < 15;i_10 += 1)
                    {
                        var_25 = (max(var_25, (arr_30 [i_5] [i_5] [i_8] [14])));
                        var_26 &= 0;
                        var_27 ^= (min(30724, 0));
                    }
                    var_28 = ((arr_38 [i_0] [i_3 - 1] [i_3] [i_5] [i_8]) ? -73 : ((0 ? 0 : (arr_18 [i_8] [i_0] [i_0] [9]))));
                }
                var_29 ^= ((7479449089241361851 ? -110 : 22024));
            }
            /* vectorizable */
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                var_30 = (min(var_30, (arr_38 [10] [i_11 - 1] [i_11 - 1] [6] [10])));
                var_31 = 1083999828;
                var_32 = ((-16 ? 30587 : 0));
                var_33 ^= var_11;
            }
            var_34 = (arr_8 [i_0]);
            arr_42 [i_0] = ((+(((arr_0 [i_0]) ? 6954453573213950323 : 30714))));
        }
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            arr_45 [i_0] [i_12] = (+-73);
            arr_46 [i_0] [i_0] = 7479449089241361861;
            var_35 += 885930268;
        }
    }
    var_36 = -var_8;
    var_37 += 5;
    #pragma endscop
}
