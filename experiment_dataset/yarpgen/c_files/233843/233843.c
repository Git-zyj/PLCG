/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (min((var_3 && var_0), ((16210523493118243420 - (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = (max(var_9, (0 <= var_6)));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        var_15 = -1837775631;
                        var_16 = (max(var_16, var_4));
                        var_17 *= max((((arr_11 [0] [i_2 - 2] [0]) ? var_2 : var_1)), (arr_0 [8]));
                        arr_12 [i_0] [i_0] = ((((((((arr_9 [i_0] [i_1] [i_1] [i_1]) ? var_12 : (arr_1 [i_0])))) ? (arr_9 [i_2 - 3] [i_2 - 3] [i_2] [i_2]) : var_4))) ? (max((min(var_2, var_8)), (arr_10 [i_3] [4]))) : ((min(((16210523493118243420 ? 62349 : 62334)), var_3))));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        arr_15 [1] [i_1] [i_0] = (((var_6 ? 62341 : var_1)));
                        var_18 |= (max((((-1201010481314865739 ? (max((arr_1 [0]), (arr_2 [6]))) : (arr_1 [4])))), (max((((var_3 ? (arr_13 [i_2 - 3] [12] [i_0]) : (arr_10 [i_2] [i_2])))), ((var_11 ? (arr_7 [i_0] [i_1]) : var_5))))));
                        var_19 = (max(var_19, (((((min(0, 1370477549378576626))) / var_8)))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0] [i_0] [i_8] = (min((arr_11 [i_0] [i_5] [i_6]), (arr_11 [i_0] [i_5] [i_0])));
                                arr_26 [i_0] [i_0] = (((((var_6 ? (arr_23 [i_0] [i_0] [i_0] [12] [i_0] [i_0] [i_0]) : (arr_23 [i_0] [i_0] [i_5] [5] [i_7] [i_7] [i_8])))) && ((((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_10 : (arr_14 [i_0] [i_5] [i_6] [i_7]))))));
                                var_20 = (min(var_20, ((((!(arr_2 [0])))))));
                                arr_27 [i_5] [i_0] [i_5] [i_5] [i_5] = (((((arr_17 [i_0]) / (arr_17 [i_0])))) ? (arr_17 [i_0]) : (max((arr_17 [i_0]), var_4)));
                            }
                        }
                    }
                    var_21 = (max(var_21, ((max((max((arr_18 [i_0] [i_0] [i_0] [i_5]), (((var_2 ? var_0 : var_4))))), (arr_24 [10] [i_0] [i_5] [10]))))));
                    var_22 -= (min(var_6, ((((min(var_4, var_11))) - -3199))));
                    var_23 = (max(-32761, var_0));
                    var_24 = var_4;
                }
            }
        }
        arr_28 [i_0] = (arr_6 [i_0]);
        var_25 = (min(var_25, (~6610911401085293163)));
    }
    for (int i_9 = 2; i_9 < 12;i_9 += 1)
    {
        arr_31 [i_9] [i_9] = var_3;
        var_26 *= (((max(15504521010990751722, (arr_6 [i_9 + 1]))) * 2304717109306851328));
    }
    for (int i_10 = 4; i_10 < 15;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                {
                    arr_43 [i_12] [i_12] = (min(((max((((arr_36 [i_11]) ? (arr_38 [i_10] [i_11] [i_12]) : var_12)), (max(var_11, 2615399625))))), (max(var_9, ((234 ? (arr_34 [13]) : (arr_33 [i_11 + 1])))))));
                    arr_44 [10] [i_11] [10] |= (arr_36 [i_10 - 1]);

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        var_27 = (arr_34 [i_10 - 2]);
                        arr_48 [i_12] [i_12] [i_12] [i_12] [i_12] = ((var_12 <= (arr_33 [i_10 - 1])));
                        var_28 = (max(var_28, (((((var_13 ? (arr_41 [i_13]) : (arr_41 [i_13]))) << (2808895830 - 2808895829))))));
                    }
                    /* vectorizable */
                    for (int i_14 = 2; i_14 < 14;i_14 += 1)
                    {

                        for (int i_15 = 1; i_15 < 13;i_15 += 1)
                        {
                            arr_55 [i_12] [i_12] [i_15 + 3] = (22 ? ((var_9 ? 39368266 : (arr_45 [i_10] [i_10] [i_10] [i_12] [i_14] [14]))) : (arr_53 [i_11] [i_11] [i_11] [i_12]));
                            arr_56 [i_10] [i_10] [i_12] [i_12] [i_15] = var_9;
                        }
                        var_29 = (arr_52 [i_12] [i_12] [i_11] [i_10]);
                    }
                    var_30 = ((var_3 <= (~var_12)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 16;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 16;i_17 += 1)
            {
                {
                    var_31 -= ((((~(((arr_47 [1]) ? (arr_51 [0] [i_16] [10]) : (arr_39 [i_10] [i_10] [i_10] [i_17])))))) ? var_7 : (((var_10 == (arr_52 [15] [i_10 - 2] [i_10 - 4] [i_10 - 4])))));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 16;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 16;i_19 += 1)
                        {
                            {
                                var_32 = (((((arr_39 [i_19] [i_10] [i_10] [i_10]) ? (arr_37 [i_10 - 4] [i_10] [4]) : ((-657395179 ? (arr_33 [i_10]) : var_3)))) - (arr_50 [1] [5] [i_18] [1])));
                                var_33 += (min((arr_57 [i_10 + 1] [i_10 + 1]), (1 > -8971870632481022964)));
                            }
                        }
                    }
                    var_34 = (arr_49 [i_10] [i_10] [i_10]);
                }
            }
        }
        var_35 ^= var_1;
    }
    var_36 -= (max(145048082, var_7));
    var_37 ^= var_1;
    var_38 += ((~(max(var_0, (var_13 * var_12)))));
    #pragma endscop
}
