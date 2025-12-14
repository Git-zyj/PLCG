/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = ((var_1 ? var_9 : var_11));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = var_10;

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_0] = ((var_4 & (((-16476 - var_9) ? -16479 : -64))));
            arr_8 [1] [i_1] [i_0] = 16474;
            var_16 = (max(var_16, ((((arr_5 [i_0] [i_1] [i_1]) ? (((!(((var_12 ? -678911907389809885 : (arr_3 [i_0] [3] [3]))))))) : var_2)))));
        }
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_17 = (var_1 - (((var_11 - var_5) - (arr_10 [i_2]))));
        arr_11 [i_2] [i_2] = (var_5 ^ -16474);
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = (((((arr_14 [i_3]) + 9223372036854775807)) << (!var_2)));
        var_18 = ((((-((var_12 ? var_5 : -16479)))) >= (((((((arr_9 [i_3]) != var_1))) | (((1400582100 < (arr_14 [i_3])))))))));

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_19 = ((!((((235 && 80) ? var_3 : ((17826 ? var_5 : -1595201081428527578)))))));
            arr_21 [i_3] [i_4] [i_4] = (arr_17 [i_3] [i_3]);
            var_20 -= ((~(~40)));
        }
        arr_22 [i_3] [i_3] = ((((((var_3 ? 48 : (arr_15 [15] [i_3]))) ^ (((arr_17 [i_3] [i_3]) ? (arr_9 [i_3]) : 1400582100)))) * var_3));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_21 = (((arr_24 [i_3] [i_5]) % (arr_15 [i_3] [i_3])));
            arr_26 [i_3] [i_3] = (((arr_17 [i_3] [i_5]) / ((var_7 ? var_5 : (arr_19 [i_3] [i_3])))));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_22 = (arr_12 [i_5]);
                            arr_34 [i_3] [i_8] = (((arr_10 [i_3]) ? ((8380491146707499398 ? var_6 : var_8)) : var_9));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_23 &= (((arr_17 [8] [i_9]) || (arr_18 [10] [i_3])));

            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                var_24 = (arr_24 [i_3] [i_10]);
                arr_40 [i_3] [i_9] [i_10] = (((arr_30 [12] [i_10] [i_10] [i_3] [i_10]) * ((((!(arr_25 [i_3])))))));
                arr_41 [i_3] [14] [i_3] [i_3] = (arr_18 [i_3] [11]);
            }
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        {
                            var_25 = (arr_9 [i_3]);
                            var_26 = ((var_8 || var_5) ? (arr_33 [i_11]) : (!16479));
                        }
                    }
                }
                var_27 = (((arr_14 [i_3]) - (arr_12 [i_11])));
            }
            for (int i_14 = 3; i_14 < 15;i_14 += 1)
            {
                arr_52 [i_3] [i_9] [i_3] [i_14] = (~(((2733390538 <= (arr_9 [i_3])))));
                arr_53 [i_3] [i_9] [i_3] = ((var_5 ? 8065242157149756601 : (arr_29 [i_3] [i_3] [i_3])));
            }
        }
        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {
            var_28 = (max(((((var_7 == 1) && 1599377140))), ((-59 ^ (arr_19 [i_3] [i_15])))));
            arr_56 [i_3] [i_3] = (((arr_38 [i_3] [i_3] [i_15] [i_15]) * ((((arr_50 [9] [i_3] [i_15]) ? (8065242157149756601 <= -16463) : 2051186910)))));
            var_29 = (max(((+(((arr_33 [i_3]) + var_5)))), (arr_37 [i_3])));
        }
        for (int i_16 = 0; i_16 < 17;i_16 += 1)
        {
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 17;i_17 += 1)
            {
                for (int i_18 = 2; i_18 < 15;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 17;i_19 += 1)
                    {
                        {
                            var_30 = ((((((1 & -2051186929) ? var_3 : var_5))) ? (arr_50 [i_3] [i_16] [i_3]) : ((~(((var_9 || (arr_9 [i_3]))))))));
                            var_31 = (((((arr_64 [i_3] [i_18] [i_18] [i_18] [i_18 + 2]) <= (((-35 <= (arr_59 [i_3] [i_16] [i_17])))))) ? (arr_18 [i_3] [i_19]) : 10026057071413546937));
                        }
                    }
                }
            }
            var_32 = ((!(((arr_36 [i_3] [i_16]) <= (arr_36 [i_3] [i_16])))));
            var_33 = ((var_5 ? (((32744 ? 16505 : 1556868628))) : ((((((arr_31 [i_3] [i_3] [5] [7] [i_3]) ? var_12 : -16489))) ? ((45730 / (arr_60 [i_16] [i_3]))) : var_12))));
        }
    }
    #pragma endscop
}
