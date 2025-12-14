/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_13 = (max((~0), (((var_2 ? var_1 : 65509)))));
        arr_3 [i_0 - 1] = (!var_8);

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_14 = (min(var_14, (((!((((!-1386032456612980557) >> (((var_4 >> var_11) - 3232289283363731711))))))))));
            arr_6 [i_0] [i_0] = ((~(!1386032456612980550)));
            arr_7 [i_0] [i_1] = var_6;
            arr_8 [i_0] [i_0] [i_1] = min(48, (~var_6));
        }
        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            var_15 = (min(var_12, -1));
            var_16 = (max((max((var_4 | var_4), var_2)), (((-(min(-8, -48)))))));
            var_17 = ((!(~-65523)));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_18 = (max(var_18, (!var_6)));
            var_19 *= (!var_0);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        arr_22 [i_6] [i_0] [i_0] = (var_7 <= var_2);
                        var_20 = 29430;
                        arr_23 [6] [i_4] [i_5] [i_6] = var_8;
                        arr_24 [i_0] [i_0] [0] [i_0] = (-var_7 > var_7);
                        var_21 = var_10;
                    }
                }
            }
            var_22 = 73;
            var_23 = (var_11 / var_7);
        }
        var_24 = min(1386032456612980556, var_1);
    }
    for (int i_7 = 3; i_7 < 17;i_7 += 1) /* same iter space */
    {
        arr_28 [i_7] = var_8;
        arr_29 [i_7] [i_7] = (min((max(var_5, var_2)), (min(var_5, var_3))));
        var_25 = (-var_5 > var_10);
        arr_30 [i_7 - 2] = var_9;
    }
    for (int i_8 = 3; i_8 < 17;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 1; i_9 < 18;i_9 += 1)
        {
            var_26 = (min(var_26, var_8));
            arr_36 [i_9] = (max(((((14542 ? var_5 : var_12)))), ((~(max(-1, var_4))))));

            for (int i_10 = 2; i_10 < 18;i_10 += 1)
            {
                arr_39 [i_8 - 1] [i_8 - 1] [i_9] = (min(var_12, (-1 == var_10)));
                var_27 = (~1);
            }
            for (int i_11 = 1; i_11 < 16;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 17;i_13 += 1)
                    {
                        {
                            arr_47 [i_8 - 3] [i_9] = ((~(!var_11)));
                            var_28 = (+(max((~var_8), (var_6 ^ var_5))));
                        }
                    }
                }
                var_29 = (min((var_3 ^ 1), ((var_10 ? (~var_2) : (max(var_3, var_5))))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_30 = ((((-((48 ? 1 : var_1)))) > ((~((max(0, 1)))))));
                            arr_55 [i_9] [i_9 + 1] [i_11 - 1] [i_8 + 2] [i_8 + 2] [i_9 + 1] = var_0;
                            var_31 = (max(var_31, (((!(((~((-22631 ? var_5 : var_1))))))))));
                            var_32 = ((!((min((min(var_0, 18446744073709551607)), var_3)))));
                        }
                    }
                }
                var_33 = (max(var_33, var_10));
            }
            arr_56 [i_9] = var_3;
        }
        arr_57 [i_8] = (!33554432);
    }
    for (int i_16 = 3; i_16 < 17;i_16 += 1) /* same iter space */
    {
        var_34 = 22630;
        var_35 = (min(var_35, ((((~var_9) > ((max((!-22620), var_0))))))));
        arr_61 [i_16] = (min(var_6, (min(((var_8 ? 1386032456612980556 : var_10)), (~var_2)))));
        var_36 = (min(var_36, (((var_3 - (-22624 + 33554441))))));
    }
    var_37 -= ((~(max(var_7, var_3))));

    for (int i_17 = 0; i_17 < 12;i_17 += 1)
    {
        arr_65 [i_17] = (~33554432);

        for (int i_18 = 0; i_18 < 12;i_18 += 1)
        {
            var_38 = ((~(min(var_2, var_7))));
            arr_68 [i_18] [i_17] = (((~43823) * var_0));
        }
        var_39 *= ((~(~197)));
    }
    for (int i_19 = 0; i_19 < 10;i_19 += 1)
    {
        var_40 = ((!(-2147483647 - 1)));
        arr_71 [i_19] = ((((min(var_3, var_4) * var_6))));
        var_41 = (max((!var_4), (!var_9)));
        var_42 = (((-var_2 < var_6) ? (1386032456612980556 | -33554441) : ((((-6 > (max(var_7, var_0))))))));
    }
    for (int i_20 = 3; i_20 < 23;i_20 += 1)
    {
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 24;i_21 += 1)
        {
            for (int i_22 = 4; i_22 < 23;i_22 += 1)
            {
                {
                    var_43 = (min((max(-49, 715971582)), 51287));
                    var_44 = (!var_11);
                }
            }
        }
        var_45 *= ((-((-33554441 ? -var_3 : var_12))));
        arr_79 [i_20] = ((~(((-1386032456612980557 + 9223372036854775807) >> (var_10 - 12981176939966928576)))));
        var_46 = (max(var_4, (((~var_10) ^ -49))));

        for (int i_23 = 0; i_23 < 24;i_23 += 1)
        {
            arr_82 [i_20] = ((!(!var_0)));
            arr_83 [9] [i_20] [i_23] = (min(((max(var_8, (!18446744073709551607)))), ((((max(var_5, -46))) ? var_5 : (!var_4)))));
            var_47 |= ((((min(var_6, 1386032456612980556))) ? ((-5106207051644133144 ? var_0 : 1)) : ((max(18, var_2)))));
            arr_84 [i_20] [i_20] = (((((!(33554432 - var_11)))) / 63));
        }
    }
    for (int i_24 = 0; i_24 < 23;i_24 += 1)
    {
        arr_87 [i_24] &= (min(var_8, (~-33554438)));
        arr_88 [7] = min((var_9 != var_11), (max(0, -33554453)));
        arr_89 [i_24] = var_1;
    }
    #pragma endscop
}
