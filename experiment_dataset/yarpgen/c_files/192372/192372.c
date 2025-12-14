/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_14 *= (arr_2 [i_3] [i_0] [i_0]);
                        var_15 = 1;
                        var_16 = (max(var_16, (max(135, ((-((-86 ? -96 : 30260))))))));
                        var_17 = var_3;
                    }
                }
            }
        }
        var_18 = (arr_5 [i_0 + 1]);
        var_19 = ((((max((arr_7 [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_0 + 2]), 160))) << ((((min((arr_5 [i_0 + 2]), 618))) - 187))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((((arr_3 [i_4] [i_4]) ? var_8 : var_8)))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 20;i_7 += 1)
                {
                    {

                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            var_21 -= ((2147483647 ? (arr_6 [i_4] [i_7 + 2] [i_6] [i_8]) : (arr_6 [i_4] [i_7 - 1] [i_6] [i_8])));
                            var_22 = (((arr_11 [i_4 + 2]) != (arr_16 [i_4 + 2])));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_23 = (((arr_0 [i_4 - 1]) ? (arr_18 [i_6]) : (arr_8 [i_4 + 1] [i_5] [i_5] [i_7 - 2])));
                            var_24 = (max(var_24, (((((var_8 ? var_11 : (arr_26 [i_4] [i_5] [i_4] [i_7] [i_5])))) ? (arr_28 [i_4 + 2] [i_4 + 2] [i_4] [4] [i_4]) : var_2))));
                            arr_29 [6] [i_5] [i_6] [i_7] [i_6] = (arr_21 [i_4] [i_6] [i_7] [i_9]);
                            arr_30 [i_6] [i_5] [i_6] [i_6] [i_7] [i_9] = (!19);
                            var_25 = (max(var_25, ((((arr_11 [i_4 - 1]) != (arr_1 [i_4 + 2] [i_4]))))));
                        }
                        var_26 = ((var_9 ? (arr_3 [i_7 + 2] [i_4 + 2]) : (arr_3 [i_7 - 2] [i_4 - 1])));
                        var_27 = ((!(arr_11 [i_4 - 1])));
                    }
                }
            }
        }
    }
    for (int i_10 = 1; i_10 < 20;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            arr_36 [i_11] = var_1;
            var_28 = (arr_34 [i_10] [i_11]);
        }
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 19;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 22;i_15 += 1)
                    {
                        {
                            arr_48 [i_10] [i_14] = (min((min(var_7, (((24983 ? 35101 : (arr_42 [i_13])))))), var_13));
                            var_29 = (max(var_29, (((-(arr_45 [i_15] [i_15] [i_15 - 2] [i_14] [18] [i_12]))))));
                            arr_49 [i_10 + 2] [i_10 + 2] [i_13] [i_14] [i_15] = (arr_47 [i_10] [i_12] [i_13] [i_14] [i_15]);
                            var_30 = (arr_40 [i_10] [i_10] [i_10 + 2] [i_10 + 3]);
                        }
                    }
                }
            }
            var_31 = ((((arr_47 [i_10 + 3] [i_12] [i_10] [i_12] [i_12]) && (arr_47 [i_10 + 1] [i_10] [i_10 + 3] [i_10 - 1] [i_10 - 1]))) ? (((-(arr_32 [i_10 + 2])))) : (arr_32 [i_10 + 3]));
        }
        for (int i_16 = 1; i_16 < 20;i_16 += 1)
        {
            var_32 = (((!(arr_40 [i_10 + 2] [i_10 - 1] [i_16] [i_16]))));
            var_33 = (arr_31 [i_10]);
            var_34 = ((((min(6229, 1693126664))) && ((((((-(arr_35 [18] [i_10] [18])))) ? (((-7 ? (arr_50 [i_16] [i_16]) : 86))) : (var_4 / 1))))));
        }
        arr_53 [i_10] [i_10] = max(((((arr_47 [i_10 + 1] [i_10 + 1] [i_10 + 3] [i_10 - 1] [i_10]) && (~0)))), (arr_40 [i_10 - 1] [i_10 + 2] [i_10 + 3] [i_10 + 1]));
        arr_54 [i_10 + 2] = (var_4 & (((arr_52 [i_10 - 1] [i_10 + 2] [i_10 - 1]) ? (((arr_51 [i_10] [i_10]) ? 15663812365366292450 : (arr_42 [i_10]))) : ((min(680105103, (arr_39 [i_10] [i_10])))))));
    }
    var_35 = ((((((min(var_4, var_6))) * -var_10)) + ((min(-1531490161, -1352385083)))));
    var_36 = (1 ? (max(((var_10 ? var_8 : var_4)), var_2)) : (max(var_4, var_2)));
    var_37 = (max(var_37, -455430526));
    var_38 = 32749;
    #pragma endscop
}
