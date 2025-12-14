/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = arr_1 [i_0];
        var_12 = ((!(arr_1 [i_0])));
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        var_13 = min((arr_3 [i_1 + 1] [i_1 - 3]), ((((((arr_5 [i_1] [i_1]) + var_8)) == var_3))));
        arr_6 [i_1] = (var_4 ? ((-(max(1239523773, 1239523773)))) : ((-(arr_4 [i_1 - 2]))));
        var_14 -= var_5;
        var_15 = -1239523784;
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            var_16 *= ((!((min((arr_8 [i_3 + 1]), (arr_8 [i_2 - 2]))))));
            arr_12 [i_2 - 1] [i_3] = (min(((min((arr_4 [i_3 + 1]), (arr_4 [i_3 + 1])))), ((((var_4 && (arr_4 [i_2]))) ? (0 && 66584576) : (arr_7 [i_2 - 2])))));
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    {
                        var_17 |= 1239523783;
                        arr_22 [10] [i_6] [i_5] [i_5] = (!var_8);
                        var_18 |= ((((((((arr_10 [i_4]) ? var_10 : 0)) + ((((arr_0 [i_6]) ? (arr_19 [i_2]) : 1239523783)))))) ? (arr_17 [i_4]) : (!var_3)));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_19 = (max(var_19, (arr_15 [i_6] [i_5 + 2] [i_5])));
                            var_20 = -1239523760;
                            var_21 -= (((arr_8 [i_2 - 1]) | (arr_15 [i_2 - 1] [i_5 - 1] [i_6 - 1])));
                            var_22 = (~3416661589027960656);
                        }
                        var_23 = ((((((((arr_18 [14] [i_5 - 1] [i_6]) < (arr_24 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [6]))) ? (min(76, 4)) : (arr_7 [i_5 + 3])))) && (arr_9 [i_2])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 14;i_8 += 1) /* same iter space */
    {
        var_24 = (arr_1 [i_8 + 1]);
        var_25 = (arr_15 [i_8 - 2] [i_8 + 1] [i_8 - 2]);
    }

    /* vectorizable */
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        var_26 = (min(var_26, (arr_4 [i_9])));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 17;i_12 += 1)
                {
                    {

                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            arr_40 [5] [5] [i_9] [16] [5] [i_13] = (((~(arr_34 [i_9] [i_10] [i_11]))));
                            var_27 = (arr_37 [i_9] [i_10] [15] [16] [i_12 + 1] [14]);
                        }

                        for (int i_14 = 0; i_14 < 19;i_14 += 1)
                        {
                            var_28 = arr_31 [i_9] [i_12 - 1];
                            arr_43 [i_9] [4] [i_9] [4] [2] = (((arr_4 [i_9]) % var_8));
                            arr_44 [i_9] [i_9] [i_9] [1] [i_14] = ((-(arr_34 [i_12 + 2] [i_12] [i_14])));
                            var_29 -= (1966080 == 92);
                        }
                        arr_45 [i_9] = ((+((9223372036854775807 ? (arr_30 [i_9]) : (arr_31 [i_9] [i_9])))));
                    }
                }
            }
        }
    }
    for (int i_15 = 1; i_15 < 15;i_15 += 1)
    {
        arr_49 [6] = (((((536870904 ? var_10 : 127))) ? ((1239523773 ? ((((arr_38 [i_15] [i_15] [i_15 + 1] [i_15 - 1] [i_15] [i_15]) >= 112))) : 255)) : 1));
        var_30 *= ((((((arr_32 [i_15 + 1] [i_15 + 2] [i_15 + 1]) ^ 0))) || ((min(var_5, (min((arr_31 [10] [i_15]), 1403348989072599216)))))));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 17;i_16 += 1)
        {
            for (int i_17 = 3; i_17 < 16;i_17 += 1)
            {
                {
                    arr_58 [i_15] [i_16] [i_15] = (!var_3);
                    var_31 |= (!var_5);
                }
            }
        }

        for (int i_18 = 0; i_18 < 17;i_18 += 1)
        {
            arr_61 [i_18] = ((-(arr_59 [i_15 + 2] [i_15 + 1])));
            var_32 = (((arr_37 [11] [11] [i_15 + 1] [i_15 + 2] [i_15] [i_15 - 1]) ? ((32767 & (arr_56 [i_15 + 1] [i_15 - 1]))) : (!var_3)));
            var_33 = ((!(((~(arr_48 [i_15 + 1]))))));
            arr_62 [i_15] [i_15] |= (((arr_38 [14] [14] [1] [14] [14] [14]) ? ((+((var_11 ? (arr_1 [i_18]) : -112)))) : -111));
        }
        for (int i_19 = 0; i_19 < 17;i_19 += 1) /* same iter space */
        {
            arr_65 [i_15] = (min(((~(((arr_54 [i_15 - 1] [i_15 - 1] [i_19]) ? (arr_34 [i_19] [i_19] [i_15]) : (arr_3 [i_15] [i_15]))))), 1920));
            var_34 = (max(var_34, ((min(1920, 251)))));
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 17;i_20 += 1) /* same iter space */
        {
            arr_70 [i_15] [i_15] = var_8;
            /* LoopNest 2 */
            for (int i_21 = 1; i_21 < 16;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 17;i_22 += 1)
                {
                    {
                        var_35 = (arr_33 [i_22]);
                        var_36 = (max(var_36, ((((arr_4 [i_15 - 1]) ? (arr_4 [i_15 - 1]) : (arr_4 [i_15 - 1]))))));
                    }
                }
            }
            var_37 -= (arr_54 [i_15 - 1] [i_15 + 2] [i_15 + 2]);
        }
    }
    var_38 |= var_1;
    var_39 = ((((((var_6 ? var_9 : 7676271923935738765)))) ? (((max(var_3, 19)) + var_1)) : var_5));
    var_40 = ((((((var_4 ? 1998391659 : var_10)) ? (min(45, 3337471528)) : var_4))));
    #pragma endscop
}
