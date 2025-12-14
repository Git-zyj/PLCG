/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [18] [12] = (min(var_7, ((24 ? 33538048 : -32766))));
        arr_4 [i_0] [i_0] = ((~((~(arr_0 [i_0])))));
        var_16 = (((((((min((arr_0 [i_0]), (arr_1 [i_0])))) * var_7))) ? var_13 : ((((arr_0 [i_0]) && (var_8 > var_15))))));
        arr_5 [i_0] = (((max(190314858, -1)) >> var_13));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_17 = (max(var_17, (!var_13)));
            arr_12 [i_1] [i_1] [i_2] = var_12;
            var_18 += ((((((arr_0 [i_1]) ? var_11 : (arr_6 [i_1] [i_1])))) ? (arr_2 [i_1] [i_1]) : ((var_0 ? var_3 : (arr_1 [i_1])))));
            var_19 += (var_8 && var_11);
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            arr_16 [i_3] [i_3] = max(((~(max(231, (arr_8 [3]))))), (~var_3));
            var_20 = (max(var_20, (((!(arr_11 [0]))))));

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                arr_20 [i_3] [i_3] [i_3] = var_1;
                arr_21 [i_3] [i_3] [i_3] [i_4] = -0;
                var_21 = ((((min((arr_10 [i_3]), var_7))) ? ((min((((arr_15 [7]) ? var_7 : (arr_11 [i_1]))), (var_5 < var_12)))) : var_12));
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                arr_26 [i_1] [i_3] [i_5] = (min(((min((arr_24 [i_1] [i_5]), (var_6 || var_10)))), (((!var_3) ? (((var_5 ? (arr_6 [i_5] [i_5]) : 13426))) : ((var_2 ? var_11 : var_0))))));
                arr_27 [i_3] [i_3] = var_15;
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
        {
            arr_30 [5] [i_6] [1] = var_8;
            var_22 = (var_5 | -var_14);
            arr_31 [i_1] = (var_4 ? var_2 : (var_11 < var_8));
            arr_32 [i_1] [i_6] [i_6] = var_14;
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 12;i_9 += 1)
                {
                    {
                        arr_41 [i_9] = ((var_10 ? (((245 + 85879219) ? (((var_1 == (arr_34 [8] [8])))) : (((arr_6 [i_1] [1]) ? (arr_19 [i_1] [i_1] [11]) : var_7)))) : -103));
                        arr_42 [i_1] [i_7] [i_9] [i_1] = max(68, 223);

                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 10;i_10 += 1)
                        {
                            arr_45 [i_1] [i_1] [i_9] [3] [8] = (((var_3 || var_2) == ((-1 ? var_2 : (arr_0 [i_1])))));
                            arr_46 [i_1] [i_7] [i_8] [i_8] [i_9] = var_15;
                            var_23 -= (arr_11 [i_1]);
                            arr_47 [i_9] [i_1] [10] [i_1] [i_1] = -var_10;
                        }
                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 12;i_11 += 1)
                        {
                            var_24 += var_8;
                            var_25 -= (((arr_38 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) == (((var_7 % (arr_24 [i_11] [i_11 + 1]))))));
                        }
                    }
                }
            }
            arr_51 [i_7] = (var_13 + (((((arr_34 [i_1] [i_7]) ? var_9 : var_0)) + (arr_14 [i_1] [i_7]))));
        }
        var_26 = (min(var_26, (((1 ? ((((((arr_36 [i_1] [i_1] [i_1]) + (arr_0 [i_1])))) ? ((var_12 + (arr_15 [i_1]))) : (arr_37 [i_1] [11] [i_1] [i_1]))) : ((((((arr_19 [i_1] [i_1] [i_1]) ? (arr_22 [i_1] [i_1] [i_1] [i_1]) : -32766))) * (-43 / var_0))))))));
    }
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        var_27 = (max(var_27, (((!((min((min(var_1, 127)), (var_3 != var_9)))))))));
        var_28 += ((((~(((var_13 == (arr_53 [15])))))) < ((-var_1 * (!var_4)))));
    }
    var_29 = var_8;
    var_30 += var_15;

    for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
    {
        arr_58 [i_13] = var_1;
        var_31 = ((-(6 - -102)));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
    {
        arr_61 [i_14] = ((var_11 ? var_12 : var_9));
        arr_62 [12] [i_14] = ((var_10 & ((~(arr_2 [i_14] [i_14])))));
    }
    var_32 = var_3;
    #pragma endscop
}
