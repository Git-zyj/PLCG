/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_14 = (arr_1 [i_0] [i_0]);
        var_15 = ((((((arr_1 [i_0] [i_0]) ? var_5 : -8804))) || (((var_12 ? 31717 : var_13)))));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_16 = 296682203;
        var_17 = (((max(var_13, (3998285092 + -94)))) ? (min(((var_3 ? (arr_2 [i_1]) : 1)), var_6)) : ((((var_7 || (arr_1 [i_1] [i_1]))))));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_18 = (min(var_18, (((((((arr_6 [i_2]) ? 1172025592 : (arr_6 [i_2])))) || -4537442238599328796)))));
        arr_8 [i_2] [i_2] = (arr_7 [i_2]);
        var_19 = var_12;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_20 += (((((65522 ? var_5 : var_4))) || (((arr_14 [11] [i_4] [i_3]) || var_6))));

            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                var_21 = (min(var_21, (((var_5 + ((((var_5 || (arr_15 [i_5] [i_4] [i_4] [i_3]))))))))));
                arr_19 [i_5] [i_4] [i_3] = (((((100 + (arr_9 [1] [1])))) ? (arr_11 [i_3]) : (arr_12 [1])));
            }
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                arr_22 [i_3] [i_3] [i_3] [21] = ((-90 && (((arr_17 [i_4] [19]) || var_7))));
                var_22 &= ((((((arr_13 [i_3]) ? (arr_18 [i_3] [i_4]) : (arr_15 [6] [6] [6] [i_6])))) ? 6632711245110440440 : (((var_4 ? (arr_20 [16] [i_4] [i_3]) : 1)))));
                var_23 = (((((((arr_17 [i_3] [i_4]) || var_3)))) % ((-93 % (arr_16 [13] [19] [13])))));
                var_24 = ((((((arr_21 [9] [9]) ? 1040384 : (arr_12 [i_4])))) || (((-1148518123 ? -81 : (arr_20 [i_6] [i_4] [i_3]))))));
            }
            arr_23 [i_3] [16] [i_3] = (arr_12 [i_4]);
            var_25 = ((!(var_10 % var_2)));
        }
        for (int i_7 = 4; i_7 < 23;i_7 += 1)
        {
            arr_26 [i_7] [22] = ((((var_10 ? -1172025592 : var_12)) + var_12));
            arr_27 [i_7] [i_3] [i_7] = (arr_13 [i_7]);
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            arr_31 [i_8] [i_3] [i_3] = var_12;
            arr_32 [i_8] [i_8] [1] = (var_0 < (((arr_17 [i_8] [i_3]) ? var_4 : var_10)));
            var_26 = var_6;
        }
        for (int i_9 = 1; i_9 < 22;i_9 += 1)
        {
            var_27 = (min(var_27, (((((var_9 ? -6632711245110440441 : var_2)) / ((((arr_33 [17] [i_3] [i_3]) ? 1 : (arr_36 [i_3])))))))));
            var_28 = (((arr_14 [i_9] [i_3] [i_3]) && (((arr_21 [i_3] [17]) || -23731))));
            var_29 = (!var_13);

            for (int i_10 = 1; i_10 < 22;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        {
                            var_30 = (min(var_30, (((((var_11 < (arr_37 [i_3] [i_10] [i_3] [19]))) ? ((((var_5 < (arr_34 [i_3] [i_3] [i_3]))))) : (((arr_11 [i_10]) / (arr_18 [i_3] [i_9]))))))));
                            var_31 = (((((var_7 ? (arr_16 [i_3] [i_3] [i_12]) : (arr_28 [i_12])))) / ((var_12 ? (arr_33 [i_9] [i_10] [5]) : (arr_21 [i_3] [i_3])))));
                            arr_44 [i_3] [i_9] [5] [i_11] [i_12] [i_10] = ((var_11 != var_8) ? (arr_16 [i_3] [i_9 + 2] [i_10 + 1]) : var_11);
                            arr_45 [i_10] [i_10] [i_10] = (((var_13 != var_8) ? (arr_16 [i_12] [3] [3]) : 30));
                            arr_46 [i_3] [i_10] [i_11] [i_11] = arr_38 [i_10] [i_10];
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 24;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_32 = (min(var_32, ((((((arr_35 [i_13] [i_10] [i_3]) || var_5)) || var_12)))));
                            var_33 = ((var_12 ? (var_11 < var_0) : ((var_10 ? (arr_37 [i_14] [i_13] [i_10] [i_9]) : var_4))));
                            var_34 = (arr_15 [i_3] [i_10 + 3] [i_13] [i_3]);
                        }
                    }
                }

                for (int i_15 = 0; i_15 < 25;i_15 += 1)
                {
                    var_35 = ((((((arr_49 [i_9] [23] [i_9] [i_3]) % var_0))) ? (((((arr_18 [i_10] [i_9]) && (arr_12 [i_10]))))) : (arr_13 [i_9])));
                    var_36 = (min(var_36, 2147483647));
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    for (int i_17 = 3; i_17 < 24;i_17 += 1)
                    {
                        {
                            var_37 = var_1;
                            var_38 ^= ((((var_2 ? var_10 : (arr_30 [24]))) + (((arr_58 [i_9] [i_10] [i_17 - 1]) % (arr_47 [i_3] [i_3] [i_9 + 3] [13] [i_17 - 2] [22])))));
                        }
                    }
                }
            }
            for (int i_18 = 1; i_18 < 22;i_18 += 1)
            {
                var_39 = (min(var_39, ((((var_13 < 5540159146586683107) < var_10)))));
                var_40 = var_6;
                var_41 = (((((arr_14 [i_3] [i_9 - 1] [i_9 - 1]) && var_11)) ? (((!(arr_47 [23] [i_9] [i_9 + 2] [8] [0] [i_9 + 2])))) : (var_10 || var_12)));

                for (int i_19 = 1; i_19 < 22;i_19 += 1) /* same iter space */
                {
                    var_42 = ((((var_6 && (arr_62 [i_18] [12] [12]))) ? (((arr_53 [i_3] [i_3] [i_9 + 3] [i_18] [i_18] [i_18]) ? var_0 : var_4)) : (var_12 || var_6)));
                    var_43 = ((((167 ? (arr_36 [1]) : (arr_62 [i_3] [7] [i_3]))) != -26474));
                }
                for (int i_20 = 1; i_20 < 22;i_20 += 1) /* same iter space */
                {
                    var_44 = ((((((arr_34 [i_18] [i_18] [i_18]) ? var_13 : 65535))) && ((var_8 || (arr_51 [i_20 + 2] [i_18] [i_9] [i_9] [i_9] [14] [i_3])))));
                    var_45 = ((((((arr_41 [i_3] [i_3] [i_18] [i_20]) < var_10))) < (((var_4 < (arr_56 [i_20] [i_18 + 2] [i_9] [1]))))));
                }
                for (int i_21 = 2; i_21 < 24;i_21 += 1)
                {
                    var_46 -= var_2;
                    var_47 = (min(var_47, (arr_10 [13])));
                    var_48 += ((var_13 || (((var_11 ? (arr_58 [4] [15] [4]) : 0)))));
                }
                var_49 = (min(var_49, 1));
            }
        }
        var_50 = var_11;
    }
    var_51 -= (((((-(var_8 != var_11)))) || ((((var_2 ? var_12 : var_12)) < (!var_13)))));
    var_52 = ((((min((((var_4 ? var_1 : var_0))), var_10))) ? var_6 : var_7));
    #pragma endscop
}
