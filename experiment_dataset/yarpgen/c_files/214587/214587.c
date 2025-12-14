/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 38;
    var_19 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = (min(var_20, ((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        var_21 = (((((-55 ? var_2 : -17))) < 13194139533312));
        var_22 = (((((1809015993658284046 << (var_7 - 135)))) ? 79 : (((var_11 ? var_11 : var_1)))));
        var_23 *= ((var_2 != (1 - 18446730879570018286)));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_24 = (max(var_24, (~1)));
            var_25 ^= 143;
            var_26 = (min(var_26, (((~(~var_3))))));
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                var_27 *= (((~var_5) | (max((arr_9 [i_4] [i_3] [i_1]), 255))));

                /* vectorizable */
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    var_28 = 9946965997577909892;
                    arr_15 [i_1] [i_4] [i_4] = (((arr_7 [i_1]) ? ((2036002571 - (arr_7 [i_1]))) : ((30478 ? 57761 : (arr_10 [i_1])))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                    {
                        var_29 = (((arr_10 [i_1]) | (arr_10 [i_6])));
                        var_30 = (min(var_30, (((-(((arr_6 [i_1] [i_3]) ? (arr_5 [i_3] [i_3] [i_4]) : var_8)))))));
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                    {
                        var_31 = 9164175921544589288;
                        arr_24 [i_1] [i_1] [6] [i_1] [7] [i_1] [i_1] = ((((113 || (arr_2 [i_1] [i_3]))) && (var_12 && var_15)));
                    }
                    var_32 = var_11;
                    var_33 -= (arr_2 [i_6] [i_6]);
                }
            }
            var_34 = (((arr_14 [i_3] [i_1] [i_1] [i_1]) >= ((min((arr_13 [7] [i_3] [i_3] [11]), (arr_13 [i_1] [i_1] [i_3] [i_3]))))));
            arr_25 [i_1] [i_1] = var_6;
        }
        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {
            arr_29 [i_1] [i_1] = (min((1659352503845071962 & 200), 1321364231));
            arr_30 [i_1] = ((((min((min(-450493514, 0)), 79))) && 9282568152164962328));
            arr_31 [i_9 + 1] [8] [4] = ((((((arr_27 [i_1] [1] [1]) || (arr_21 [9] [i_9 + 1])))) | (arr_28 [i_1] [i_9] [4])));
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            var_35 *= (177 * -75);
            var_36 = (~var_11);
            arr_35 [i_1] [i_1] = (min(-65, 10));
        }
        arr_36 [3] [3] = (((((79 ? 4294967295 : 864691128455135232))) >> (((~var_14) - 30010))));
        arr_37 [i_1] = (max((arr_2 [i_1] [i_1]), 11));
    }
    for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 4; i_14 < 9;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            {
                                var_37 = (((arr_14 [i_11] [i_12] [i_13] [i_14 - 3]) << ((((min(var_17, (arr_14 [i_11] [i_12 + 2] [i_13 - 1] [i_15])))) - 152))));
                                var_38 *= (((arr_49 [6] [1] [i_14 - 2] [i_14 + 1] [8] [i_14]) + (arr_14 [i_11] [i_11] [i_11] [i_11])));
                                var_39 = (max((arr_39 [i_11] [i_11]), (~13194139533330)));
                                var_40 &= 57;
                                var_41 = ((((min((arr_33 [i_13 - 1] [i_12 + 2] [i_13]), (arr_16 [i_13 - 1] [i_13] [7] [i_14] [1])))) ? ((((arr_16 [i_13 - 1] [i_15] [i_13] [6] [i_15]) + (arr_33 [i_13 - 1] [i_12 - 1] [i_12 + 1])))) : ((-11 ? 57651 : 3437082224374189550))));
                            }
                        }
                    }
                    var_42 |= ((((max(1, 53))) ^ -1));
                    var_43 *= (312557515 ^ 56);
                }
            }
        }
        var_44 = (max(var_44, 1));
        var_45 = var_10;
        arr_51 [i_11] = (max((1 || -6), var_9));
        var_46 = (max(((min(4611685880988434432, (arr_8 [i_11] [i_11] [i_11])))), (min((arr_45 [i_11]), -var_14))));
    }
    for (int i_16 = 0; i_16 < 13;i_16 += 1)
    {
        var_47 = (max(var_47, (!61375)));
        var_48 &= ((((min(6, 38))) / (--1886141407458173997)));
    }
    #pragma endscop
}
