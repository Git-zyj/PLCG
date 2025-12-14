/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((16579 % -964780103) <= var_17)))) == -var_0));
    var_19 = ((min((((964780093 ? 728 : 48239))), var_0)));

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 1] = var_6;
        var_20 -= ((((((min(var_14, var_14))))) < var_17));
        arr_3 [i_0] = ((+((var_12 ? ((min((arr_1 [i_0]), var_14))) : var_16))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_11 [i_1] [i_1] [i_2] = ((((((min(24610, 63))) ? 242 : -24617)) >> var_10));
            var_21 = (min(var_21, ((min(((((var_3 ? 1 : 13)))), (((((min(var_11, (arr_10 [i_1]))) + 9223372036854775807)) >> (var_4 - 2857623414))))))));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        var_22 -= ((var_16 % (((var_12 - var_14) ? var_8 : ((((!(arr_13 [i_3] [15])))))))));
                        var_23 = ((((((((((arr_7 [i_5]) ? (arr_14 [6] [i_3] [18]) : var_6)) + 2147483647)) << (((((arr_15 [i_5] [21]) ? var_0 : var_8)) - 4092517473))))) ? var_8 : (max(-24623, 388473929))));
                    }
                }
            }
            arr_20 [i_3] [i_1] = (((((min(var_3, var_6))) ? (((min(242, 13)))) : (min(var_4, var_17)))));

            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    arr_26 [i_1] [i_6] [i_6] [i_7] = (43 >= -964780093);
                    var_24 += ((~(min(var_1, (~var_15)))));
                    var_25 = var_17;
                }
                var_26 -= ((((var_3 == ((var_6 ^ (arr_4 [14]))))) ? (min(9, var_11)) : -var_14));
                var_27 -= ((((1 ? 6013518294176198871 : 3)) != (~var_15)));
                arr_27 [i_6] = ((-24610 ? 115 : 964780094));
                arr_28 [i_6] = var_3;
            }
        }
        for (int i_8 = 1; i_8 < 22;i_8 += 1)
        {

            /* vectorizable */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                var_28 = ((!((var_4 > (arr_17 [i_1] [i_1] [8] [i_1])))));
                var_29 = var_8;
            }
            var_30 = (min(var_30, (arr_30 [2] [2] [2])));
            var_31 = (min((((var_1 && (arr_10 [i_1])))), (max((~var_6), var_4))));
            arr_35 [i_1] [i_8] [i_8] = var_6;
            arr_36 [i_8] = var_12;
        }
        var_32 = (arr_6 [11]);
        var_33 -= (((~(arr_14 [i_1] [i_1] [i_1]))));
    }
    var_34 -= (min(4294967295, 8173692807222531615));
    #pragma endscop
}
