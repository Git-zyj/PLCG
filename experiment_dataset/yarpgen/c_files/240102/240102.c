/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_2] = (arr_5 [i_0] [i_0] [i_0]);
                    var_14 = var_10;
                }
            }
        }

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            arr_23 [i_0] [i_3] [i_3] = 8;
                            var_15 |= ((~((min((max(24, 44)), (!2005729969))))));
                            var_16 -= (+-972226383);
                            var_17 = ((!((((6579443950532294298 ? (arr_15 [i_0] [i_3] [i_6] [8]) : -44))))));
                            var_18 = ((((~(((arr_6 [3]) ? 2260831515 : var_6)))) / (((-(arr_1 [i_0]))))));
                        }
                    }
                }
            }
            var_19 &= var_5;
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_20 |= (arr_5 [i_7] [i_7 - 3] [i_9]);
                            var_21 = (min(var_21, (((-(((!(arr_18 [i_7 + 4] [i_7] [i_7 - 1] [i_0])))))))));
                        }
                        var_22 = arr_18 [i_0] [i_0] [i_0] [i_8];
                    }
                }
            }
            var_23 &= (((arr_11 [i_0]) - (((!(arr_26 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0]))))));
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            var_24 ^= var_4;
            var_25 = ((-57 ? (((!(~0)))) : ((-(arr_0 [i_0])))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    {
                        var_26 &= (arr_0 [i_0]);
                        var_27 = (arr_3 [i_11] [i_11]);
                    }
                }
            }
        }
        var_28 = var_6;

        for (int i_13 = 1; i_13 < 18;i_13 += 1)
        {
            var_29 &= 1;

            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                var_30 = (min(var_30, var_7));
                var_31 = (arr_14 [7] [7] [i_14] [i_14]);
            }

            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {

                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    var_32 = (~-2034135781);
                    var_33 = ((((((-26 + 2147483647) << (126 - 126)))) ? (arr_34 [i_0]) : (((((var_0 > -16384) > (min(1023731691, 1))))))));
                }
                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    arr_50 [i_13] = var_12;
                    var_34 = (((((5 | (~-1023731676)))) & (arr_47 [i_0] [i_13 + 3] [2] [i_17] [i_13 + 1] [i_13 - 1])));
                    var_35 = (((arr_20 [i_13 + 2] [i_0] [i_13 + 2] [i_15] [i_17]) ? (((((arr_26 [5] [i_13] [i_13] [5] [5] [i_13 - 1]) ? (arr_3 [16] [i_13]) : (arr_32 [i_0] [i_0] [i_0]))))) : ((var_13 ? (arr_37 [i_15] [i_0] [i_15] [i_17]) : 6706769565575272926))));
                }
                var_36 -= (((((((max(-2388350209311048212, -972226383))) ? var_12 : 1))) ? ((((((var_9 ? -2274133424524801496 : var_7))) ? var_0 : ((-(arr_11 [i_15])))))) : ((487054121619889995 ? (((2167295848569369896 ? -972226384 : (arr_10 [14] [i_13 + 3] [i_15])))) : (arr_30 [i_13 + 2] [i_13 + 1] [i_15] [i_13 + 2] [i_13 + 2])))));
            }
            var_37 &= -113;
        }
    }
    for (int i_18 = 0; i_18 < 17;i_18 += 1)
    {
        var_38 -= ((!(((!var_13) && (arr_10 [i_18] [i_18] [i_18])))));
        var_39 = (min(var_39, (((!(arr_5 [10] [10] [i_18]))))));
    }
    for (int i_19 = 0; i_19 < 11;i_19 += 1)
    {
        var_40 = (-1023731698 / 1023731688);
        arr_57 [i_19] = (arr_1 [i_19]);
        arr_58 [i_19] [i_19] = var_12;
        arr_59 [i_19] &= ((~(~var_8)));
    }
    var_41 = 491941981;
    var_42 &= var_11;
    #pragma endscop
}
