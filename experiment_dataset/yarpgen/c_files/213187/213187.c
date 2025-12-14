/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-((~((max(var_10, -1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (((((!(((arr_1 [i_0] [i_0]) != (arr_3 [i_1] [i_1] [i_0])))))) / ((((((1512 >> (((arr_2 [i_1] [i_1]) - 24467))))) != var_9)))));
                var_14 = var_6;
            }
        }
    }

    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        arr_8 [i_2 - 1] = (((((~(var_0 != var_8)))) ? (0 != var_9) : (((arr_5 [4]) ? var_5 : (arr_6 [i_2] [i_2 + 1])))));
        var_15 *= ((var_9 + (((!(((-(arr_7 [i_2])))))))));
        arr_9 [i_2] [i_2] = (arr_7 [14]);
        arr_10 [i_2] = ((((((((arr_5 [i_2]) / var_11))) ? -45 : var_11)) / var_9));
        var_16 = (((var_3 ? (-305 + var_4) : 8915697477350140067)) * ((((min(212054222859349237, 1984)) + (arr_5 [i_2 + 2])))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_17 *= (1453518136 + -1061934431);
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_18 ^= var_3;
                    var_19 = arr_3 [i_3] [i_3] [i_3];
                    arr_20 [i_3] [i_3] [i_4] [3] = 1;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 15;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] = (!89);
        arr_24 [i_6] = (((((-32 ? var_2 : (arr_3 [i_6] [i_6] [i_6])))) ? (((-(arr_0 [i_6] [i_6])))) : var_7));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 15;i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] = ((((((arr_7 [i_7]) / -704124047))) ? var_8 : ((-7327906428778861437 ? 4913 : 32767))));

        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            arr_30 [i_7] [i_7] [i_7] = (((-2412 + 4092) + 18446744073709551615));
            var_20 = (max(var_20, -887047602671197606));
            arr_31 [i_7 - 2] [i_7] = ((1 >> (((arr_28 [i_8] [i_7 - 1] [i_7]) + 373087127))));
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            arr_34 [i_7] [i_9] [i_7] = var_0;
            var_21 = -6430552050144830843;
        }
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            var_22 = ((~(!var_4)));
            arr_38 [i_7] [i_10] [i_10] = ((~(arr_37 [i_7])));
            var_23 = (21745 ? ((8411322091944550377 >> (var_2 - 2019052808180205484))) : 1);
        }
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            arr_41 [i_7] = var_0;
            arr_42 [i_7] = (((((13280 << (60 - 59)))) ? (63195 + 6617310191420318130) : 126));
            arr_43 [i_7] = ((!(arr_21 [i_7 - 2])));
            var_24 = -1467825688621337475;

            for (int i_12 = 3; i_12 < 17;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        {
                            arr_52 [i_7] [i_14] = 1134401246;
                            var_25 = (~2);
                        }
                    }
                }
                var_26 = ((16 ? 55237 : (arr_50 [i_11] [i_12 - 1] [i_12] [i_12] [i_12 - 1])));

                for (int i_15 = 2; i_15 < 15;i_15 += 1)
                {
                    var_27 = 24576;
                    var_28 = (((((2212079308 ? 6314 : var_4))) / (arr_21 [i_7 + 1])));
                    arr_55 [i_7] [i_7] = 3679805625;
                    var_29 = ((~((9223372036854775807 ? 3730829149 : -10564))));
                }
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    arr_60 [i_12] [i_12 - 2] [i_12 - 1] [i_7] = (arr_45 [i_12 - 1] [i_12 - 3] [i_12 - 3]);
                    arr_61 [11] [i_7] [i_7] [i_7] = 37;
                }
            }
        }
    }
    #pragma endscop
}
