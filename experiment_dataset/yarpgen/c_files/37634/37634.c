/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= 4875761275882550753;
        var_15 = (((var_7 / ((4875761275882550765 ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        var_16 = (((!(arr_1 [1]))));
        var_17 = (((arr_0 [i_0 + 3]) ? (min((var_10 | var_6), var_10)) : (((var_13 / ((((arr_0 [i_0]) > 520221384))))))));
        var_18 *= 170;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_19 -= (max((arr_0 [i_1]), (arr_5 [i_1])));

        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            var_20 = 170;
            arr_10 [i_1] = (((-var_5 ? (var_0 - -18369) : 85)));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_13 [i_1] = (var_4 > var_3);
            arr_14 [8] = (arr_4 [i_1]);

            for (int i_4 = 3; i_4 < 12;i_4 += 1) /* same iter space */
            {
                var_21 |= (var_13 % 140);
                var_22 = var_12;
            }
            for (int i_5 = 3; i_5 < 12;i_5 += 1) /* same iter space */
            {
                var_23 &= ((~(arr_19 [i_1] [4] [i_5 + 1])));
                var_24 = ((((-8449 ? var_12 : var_14)) / (~-5867)));
            }
            for (int i_6 = 3; i_6 < 12;i_6 += 1) /* same iter space */
            {
                var_25 = (max(var_25, (((~(arr_21 [i_1] [i_1] [7] [7]))))));
                arr_23 [i_1] [i_3] [i_6] [i_1] = ((23 / (arr_18 [i_1] [i_1] [i_1] [i_1])));
                var_26 = (((0 % -30066) ? 1908141872 : 0));
            }
            var_27 = 85;
            arr_24 [i_1] [i_1] [i_1] = (arr_11 [i_3]);
        }
        for (int i_7 = 2; i_7 < 13;i_7 += 1)
        {

            for (int i_8 = 2; i_8 < 13;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_28 *= var_5;
                            var_29 += (min(((0 ? (arr_18 [i_7 + 1] [i_8 + 1] [i_8 + 1] [i_10 - 1]) : var_2)), (~-1406298685)));
                        }
                    }
                }
                var_30 ^= 18208929452198468252;
            }
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 13;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_31 = ((((((~var_13) | var_9))) || (((-(min(0, (arr_39 [i_1]))))))));
                            var_32 |= (((((4875761275882550753 % var_4) % (((min(var_13, var_11)))))) == var_14));
                            var_33 = ((170 || ((max((((var_0 ? -4875761275882550775 : var_0))), (arr_3 [i_1]))))));
                            var_34 = (((((var_4 / var_11) % (arr_12 [i_1]))) % (arr_27 [i_13] [i_1] [i_1])));
                        }
                    }
                }
                var_35 = (231 > 24);
            }

            for (int i_14 = 3; i_14 < 10;i_14 += 1)
            {
                arr_45 [i_14] = (((min(((3576245599 ? 1 : (arr_9 [i_14 + 3] [i_1]))), ((((var_12 + 2147483647) >> (7880246803897664524 - 7880246803897664501)))))) * ((((arr_25 [i_14 + 1]) / (arr_12 [i_7 - 1]))))));
                var_36 = (((((((((arr_27 [i_1] [i_7] [i_1]) ^ var_12))) ? (((var_10 % (arr_21 [i_1] [i_7 + 1] [i_7] [i_14])))) : 0))) ? (((((((arr_28 [i_1] [i_1] [i_1]) ? 711967437 : 1)) > (arr_7 [i_14 + 4] [i_7]))))) : (((var_9 % var_9) ? ((2963225272460040190 ? var_3 : 3287564581)) : 1))));
                var_37 *= (((arr_39 [i_7 + 1]) + (((arr_39 [i_7 - 2]) - var_10))));
            }
            arr_46 [1] [1] = (arr_43 [i_7] [i_7] [i_7 - 1] [i_7 + 1]);
            var_38 = ((((var_1 + 15836) * (min(var_10, var_7)))));
        }
        for (int i_15 = 2; i_15 < 11;i_15 += 1)
        {
            arr_50 [8] [i_1] [i_15] = ((+(((arr_35 [i_1] [i_15]) / var_14))));
            arr_51 [i_1] [i_15 + 3] = ((((-(arr_5 [i_15]))) | (max(var_1, (arr_16 [i_1] [i_15 + 2] [i_15])))));
            var_39 = (~var_2);
        }
    }
    var_40 = (((max(4179510665, var_4)) % (((max(254, 11156))))));
    #pragma endscop
}
