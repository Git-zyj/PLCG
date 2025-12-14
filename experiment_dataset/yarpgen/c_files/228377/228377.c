/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = ((!((((arr_0 [i_0]) ? var_0 : var_9)))));
        var_12 = var_1;

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            var_13 = ((!(arr_0 [i_1 + 3])));
            var_14 = (min(var_14, (((((!(arr_2 [i_0]))) ? ((var_7 ? var_3 : (arr_2 [i_1]))) : (arr_5 [i_1 - 1]))))));
            var_15 = ((var_9 ? (((arr_5 [i_0]) ? var_7 : (arr_1 [i_1]))) : (((var_3 - (arr_3 [i_1]))))));

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                arr_9 [i_0] [i_1 + 3] [i_2] = ((-95 ? (arr_7 [i_1] [i_1] [i_2] [i_1 + 4]) : var_3));
                var_16 = ((-32758 ? (-2147483647 - 1) : (arr_6 [i_0])));
                arr_10 [i_0] [i_1] [i_2] = (~var_8);
            }
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                arr_15 [i_0] [i_0] [i_1] [i_3] = (~-2370609162249098549);
                var_17 = 2370609162249098548;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_22 [i_1] [i_5] = (((arr_18 [i_1 + 4] [i_5] [i_5] [i_5] [i_5]) ? (arr_8 [i_1 + 3] [i_5]) : (arr_13 [i_1 + 2] [i_3] [i_3] [i_3])));
                            var_18 = 62;
                            var_19 -= (((1 ? -1012754949 : 87)));
                            var_20 ^= (-2370609162249098558 | 21813);
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_21 = (min(var_21, ((((~125) ? ((~(arr_12 [i_6]))) : var_10)))));
            var_22 ^= (((var_10 ? var_9 : (arr_1 [i_0]))));

            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                arr_28 [i_7] [i_6] [i_0] = (((arr_2 [i_6]) ? (arr_21 [i_7] [i_7] [i_6] [i_6] [i_0] [i_0]) : (arr_13 [i_0] [i_0] [i_0] [i_0])));

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_23 = (min(var_23, var_1));
                    arr_32 [i_0] [i_6] [i_7] [i_8] = ((!((((arr_1 [i_6]) ? var_8 : -2370609162249098562)))));
                    var_24 = (((arr_11 [i_0]) ? (arr_29 [i_0] [i_6] [i_7] [i_8]) : var_6));
                }
                for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                {
                    var_25 = (min(var_25, (((!(arr_21 [i_0] [i_6] [i_7] [i_9] [i_0] [i_9]))))));
                    var_26 = ((var_10 ^ (arr_11 [i_0])));
                    var_27 ^= (94 / -19);

                    for (int i_10 = 2; i_10 < 15;i_10 += 1) /* same iter space */
                    {
                        var_28 ^= (((arr_35 [i_7] [i_7] [i_10 + 1]) ? var_10 : 111));
                        var_29 *= ((96 ? (((-2370609162249098562 ? -155597481 : (arr_6 [i_6])))) : 2370609162249098548));
                    }
                    for (int i_11 = 2; i_11 < 15;i_11 += 1) /* same iter space */
                    {
                        arr_44 [i_0] [i_6] [i_7] [i_0] [i_11] [i_11] = ((var_6 ? 2370609162249098575 : 2370609162249098575));
                        var_30 ^= ((!((((arr_17 [i_0] [i_6]) ? var_10 : 2370609162249098583)))));
                        var_31 = (var_5 & 41767);
                        var_32 = (min(var_32, var_3));
                    }
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        arr_47 [i_0] [i_6] [i_7] [i_12] [i_9] [i_12] = 50;
                        var_33 = ((!(((3646167740837736994 ? -113 : -99)))));
                    }
                    var_34 |= ((var_8 ? (168 && 3646167740837736994) : ((((arr_12 [i_6]) || 21599)))));
                }
                for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
                {
                    var_35 += var_7;
                    var_36 += ((((~(arr_26 [i_0] [i_6] [i_7]))) ^ (arr_24 [i_6] [i_7])));
                    var_37 -= ((~(arr_5 [i_0])));
                    var_38 = (min(var_38, 5941103879617970285));
                    arr_52 [i_13] [i_6] [i_7] [i_6] = ((var_4 ? (arr_24 [i_0] [i_7]) : var_9));
                }
                var_39 |= (((arr_17 [i_7] [i_0]) ^ 9437392847038548307));
            }
            for (int i_14 = 2; i_14 < 14;i_14 += 1)
            {
                arr_55 [i_0] [i_0] [i_0] [i_0] = 1532199750;
                var_40 -= arr_2 [i_0];
                var_41 = (!(arr_38 [i_14] [i_14 + 2] [i_14] [i_14]));
            }
            for (int i_15 = 0; i_15 < 16;i_15 += 1)
            {
                var_42 = ((((~(arr_12 [i_0])))) ? (arr_3 [i_0]) : (arr_38 [i_15] [i_6] [i_0] [i_0]));
                var_43 = ((~((var_8 ? 19619 : var_4))));
                var_44 = (arr_23 [i_15]);
            }
        }
        arr_60 [i_0] = (((!87) ? (59 && 51616) : ((2370609162249098575 ? (arr_35 [i_0] [i_0] [i_0]) : (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])))));
        var_45 = (((1125899906842623 && 89) && var_8));
    }
    var_46 -= var_10;
    #pragma endscop
}
