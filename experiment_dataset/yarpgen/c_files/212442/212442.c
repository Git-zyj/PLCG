/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_16 = (((min(var_15, 20405))));
                            var_17 = (min(var_17, (((+((((arr_7 [i_3] [i_2] [i_1] [i_0 - 3]) > (var_10 + var_11)))))))));
                            var_18 = -var_2;
                            var_19 = (min(var_19, 242));
                        }
                    }
                }
                var_20 = (max(var_20, (~18446744073709551594)));
            }
        }
    }
    var_21 = var_6;
    var_22 = var_13;

    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        var_23 = ((~(!45131)));
        arr_14 [i_4 - 1] = var_7;
        var_24 = (min(((var_3 + (((arr_12 [i_4 + 1]) - (arr_12 [i_4]))))), (((arr_11 [i_4 - 1] [i_4]) - (((arr_12 [i_4 - 1]) ? (arr_12 [i_4]) : var_5))))));
        var_25 = (~(min((arr_13 [i_4 - 1]), (arr_13 [i_4 - 1]))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_26 = (((arr_18 [i_5]) ? 76 : var_8));
        var_27 = ((((255 ^ (arr_8 [i_5] [i_5] [i_5] [i_5]))) == (80 | var_14)));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_28 = (arr_6 [i_6] [i_6] [i_6] [i_6]);
        var_29 = ((var_12 ? (((((arr_1 [i_6]) * var_11)) / var_0)) : (min((arr_19 [i_6] [i_6]), ((((arr_0 [i_6]) == var_11)))))));

        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
        {
            arr_23 [i_6] [i_6] [i_7] = (min((((arr_1 [i_6]) & (arr_1 [i_6]))), 14));
            var_30 = ((-(~var_6)));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 10;i_11 += 1)
                    {
                        {
                            var_31 = ((var_14 ? 52685 : (arr_30 [i_6] [i_8] [i_9] [i_10] [i_11 - 1])));
                            var_32 |= (128 * 43725);
                        }
                    }
                }
            }
            var_33 = (arr_1 [i_6]);
        }
        for (int i_12 = 1; i_12 < 9;i_12 += 1)
        {
            var_34 = (!var_11);

            /* vectorizable */
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    arr_40 [i_6] [i_12 + 2] [i_12] [i_14] = (arr_3 [i_13] [i_14]);

                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        var_35 = (((arr_15 [i_13]) | (arr_15 [i_12 + 1])));
                        arr_44 [i_6] [i_12] [i_13] [i_14] [i_15] = ((~(arr_6 [i_12 + 2] [i_12 + 2] [i_12] [i_6])));
                    }
                    var_36 = (((arr_19 [i_12 - 1] [i_12 + 2]) ? (arr_19 [i_12 + 2] [i_12]) : (arr_26 [i_6] [i_12 - 1] [i_13] [i_6])));
                    arr_45 [i_12] [i_12] [i_13] [i_14] = (((arr_17 [i_6]) && (arr_11 [i_12 + 1] [i_13])));
                    var_37 = (~var_13);
                }
                var_38 = arr_39 [i_6] [i_12] [i_13] [i_13];
                var_39 = ((~(arr_22 [i_12 - 1])));
            }
            for (int i_16 = 1; i_16 < 8;i_16 += 1) /* same iter space */
            {
                var_40 = -20387;
                var_41 = 82;
                var_42 = ((-(min((arr_28 [i_12 - 1] [i_16 + 3]), var_9))));
                var_43 = (((var_8 || 32) ? ((~((242 ? 45149 : 229)))) : (((!(arr_11 [i_12 + 1] [i_16]))))));
            }
            for (int i_17 = 1; i_17 < 8;i_17 += 1) /* same iter space */
            {
                var_44 = ((((((min(23025, var_1))) ? 45105 : (((arr_47 [i_6] [i_12] [i_17]) ^ (arr_33 [i_17] [i_12] [i_17 + 1]))))) << ((((((~(arr_12 [i_12 + 1]))) + 199)) - 14))));
                var_45 = ((((((arr_46 [i_17 + 1] [i_12 + 2] [i_17 - 1]) ? var_7 : (arr_1 [i_17])))) | (((arr_25 [i_6] [i_6] [i_6]) % (((arr_19 [i_6] [i_6]) ? 13825512108152816314 : var_10))))));
            }
            arr_52 [i_6] [i_12] = var_7;
        }
        for (int i_18 = 0; i_18 < 11;i_18 += 1)
        {
            var_46 &= ((!((((arr_32 [i_6] [i_6] [i_18] [i_18] [i_18]) + (var_6 && 12856))))));
            var_47 = ((~((var_6 * (arr_13 [i_6])))));
        }
        var_48 = 116;
        var_49 = ((((-((var_11 ? (arr_10 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) : (arr_55 [i_6] [i_6]))))) > ((min(3, 146)))));
    }
    var_50 = var_14;
    #pragma endscop
}
