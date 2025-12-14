/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((var_5 ? (arr_1 [i_0]) : (arr_0 [i_0])));
        var_14 = ((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_5)));
        var_15 = (min(var_15, (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_16 = (arr_4 [i_2 + 2]);
                    arr_11 [i_1] [i_1] [i_1] [i_3] = ((-var_7 - (!255)));
                }
            }
        }

        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            var_17 |= (arr_7 [i_4 + 1] [i_4 + 1]);
            var_18 += ((var_1 <= ((((arr_12 [2] [6] [i_4]) ? (arr_0 [17]) : var_0)))));

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    var_19 = var_1;

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        arr_22 [i_1] [i_1] = ((var_10 ? var_1 : ((57913 ? -15834 : (arr_0 [5])))));
                        arr_23 [i_1] [i_4] [i_1] [i_6] [i_7] [i_7] = (((arr_6 [i_4 + 2] [i_1]) && (arr_12 [i_4] [i_1] [3])));
                    }
                    arr_24 [i_5] [i_1] = ((~((var_11 ? (arr_3 [8] [i_6]) : var_3))));
                }

                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    arr_27 [i_1] [i_1] [i_1] [i_5] [4] [i_8] &= ((!(arr_9 [i_1] [i_4])));
                    var_20 = ((((2537527164 ? 1757440132 : 274877906943)) * (arr_0 [i_1])));
                }
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    arr_32 [i_9] [i_1] [i_1] [10] = (((~29366) & (arr_12 [i_1] [i_1] [14])));
                    arr_33 [i_1] [i_1] [i_5] [i_9] = (arr_31 [i_1] [i_1] [i_1] [i_1]);
                    var_21 = (max(var_21, (arr_10 [i_4 + 1] [i_5])));
                }
            }
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                arr_36 [i_1] [i_4] [i_10] [i_10] |= ((!(((var_5 ? var_0 : (arr_14 [i_10] [5]))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_22 = (max(var_22, (arr_25 [i_1] [7] [i_10] [i_11] [i_12])));
                            var_23 = (max(var_23, 15826));
                        }
                    }
                }
                var_24 = ((var_11 ? (((arr_16 [i_4] [2] [i_10] [2]) ? var_5 : (arr_37 [i_1] [i_1] [14] [i_1] [9] [i_1]))) : ((var_3 ? (arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_19 [i_1] [i_1] [i_4] [i_1] [i_10])))));
            }
            arr_42 [1] [i_1] [i_1] = (((arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1]) == (arr_15 [i_4 + 2] [i_4 + 1] [i_4 - 1])));
            arr_43 [i_1] [i_4 + 2] [i_1] = ((!(((var_9 ? (arr_16 [i_4] [7] [i_1] [i_1]) : 314151454)))));
        }
        var_25 = (max(var_25, (arr_29 [5] [i_1])));
        var_26 = (arr_40 [i_1]);
        arr_44 [i_1] = ((32443 > (var_5 / var_12)));
    }
    var_27 = (min(var_27, -20940));

    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        arr_47 [i_13] [i_13] = (arr_37 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]);

        for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
        {
            var_28 = ((25057 ^ ((((1757440131 ? 251 : 1098482526))))));
            var_29 = (max(var_29, ((((((!(arr_1 [i_13])))) * (((-1757440131 || (arr_18 [i_13] [i_13] [i_13] [i_13] [i_13])))))))));
        }
        for (int i_15 = 0; i_15 < 12;i_15 += 1) /* same iter space */
        {
            var_30 = (min(var_30, 38588));
            arr_52 [i_13] = ((!(arr_3 [i_15] [i_15])));
        }
    }
    /* vectorizable */
    for (int i_16 = 2; i_16 < 21;i_16 += 1)
    {
        arr_56 [i_16] = -1098482538;
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 22;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                {
                    var_31 ^= ((1859962838 > (arr_1 [i_16 - 2])));

                    for (int i_19 = 0; i_19 < 22;i_19 += 1)
                    {
                        var_32 = -86;
                        var_33 = (min(var_33, (((3 ? 55880 : 813326371)))));
                        var_34 *= ((var_1 ? (!var_10) : (arr_0 [i_16])));
                        var_35 = ((!((((arr_0 [i_16]) / var_7)))));
                    }
                    for (int i_20 = 3; i_20 < 21;i_20 += 1) /* same iter space */
                    {
                        var_36 = 174;
                        arr_68 [i_16] [i_17] [17] [17] [i_17] [i_17] = (((var_9 / var_11) ? 26418 : (arr_54 [i_16 - 1] [i_16])));
                    }
                    for (int i_21 = 3; i_21 < 21;i_21 += 1) /* same iter space */
                    {
                        var_37 = 8870;

                        for (int i_22 = 2; i_22 < 20;i_22 += 1)
                        {
                            var_38 += (!-1017440921);
                            arr_74 [i_22] [i_22 - 1] |= ((var_11 || (arr_61 [i_17] [14] [i_21 - 2] [i_22 + 2])));
                        }
                        var_39 = (min(var_39, ((((!var_10) ? var_10 : (var_0 > 1757440132))))));
                        arr_75 [i_16] [12] = (((arr_59 [i_16 - 2] [8] [i_18]) / (arr_54 [i_16 + 1] [15])));
                    }
                }
            }
        }
        var_40 *= ((!(!var_0)));
    }
    #pragma endscop
}
