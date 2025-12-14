/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_13 ? var_6 : var_1));
    var_21 += var_7;

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
        {
            var_22 = (max(var_22, (((~(arr_5 [i_0 + 2] [i_0 - 3] [i_1]))))));
            var_23 = (max(var_23, ((((arr_1 [i_0 - 3]) ? (arr_1 [i_0 - 2]) : var_10)))));
            var_24 = ((-1 ? var_3 : var_16));
            var_25 = var_3;
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_26 = (max(var_26, ((((((var_3 ? (arr_7 [i_0 - 3]) : (arr_8 [i_0] [i_0 - 3] [i_0])))) <= var_18)))));
            var_27 = (min(var_27, ((((arr_6 [i_2]) && ((((arr_6 [i_0 - 3]) ? (arr_6 [i_0 + 2]) : (arr_6 [i_0 + 2])))))))));
            arr_9 [i_2] [i_0] = ((+(max((1 >= var_18), var_6))));
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
        {
            arr_13 [7] = (((((2147483647 / (arr_0 [i_0]))) <= var_5)));
            arr_14 [i_0] = ((4 ? ((min((!var_14), (min(var_15, 1))))) : (arr_10 [i_0])));
        }
        arr_15 [i_0] = min(var_2, (arr_5 [0] [i_0 + 1] [i_0 - 1]));
        var_28 = (min(var_28, ((((((((~(arr_12 [i_0] [i_0])))) ? ((~(arr_10 [i_0]))) : var_4)) <= (((((!var_3) == var_18)))))))));
        arr_16 [i_0] = ((~(arr_0 [i_0])));
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        arr_19 [i_4] = (i_4 % 2 == 0) ? ((min(((-var_13 / (((arr_18 [i_4] [i_4]) * (arr_17 [i_4]))))), (arr_18 [12] [i_4 - 1])))) : ((min(((-var_13 * (((arr_18 [i_4] [i_4]) * (arr_17 [i_4]))))), (arr_18 [12] [i_4 - 1]))));
        var_29 |= 29;
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_30 = (max((arr_18 [8] [i_5]), 204));
        var_31 = (max(var_31, ((min((((var_15 == 2147483647) ? var_11 : var_11)), (arr_22 [i_5] [i_5]))))));
        var_32 *= (min((((((-(arr_17 [i_5])))) ? ((var_2 ? (arr_18 [i_5] [i_5]) : (arr_17 [i_5]))) : var_11)), ((min((arr_20 [i_5]), 10774377907353880502)))));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            arr_28 [i_7] = var_13;
            var_33 = (min((arr_0 [i_6]), (arr_5 [i_7] [11] [i_6])));
        }
        for (int i_8 = 1; i_8 < 9;i_8 += 1) /* same iter space */
        {
            arr_32 [i_8] [i_8] = ((((!(arr_6 [i_8 + 1]))) ? ((((arr_6 [i_8 + 1]) && 6633534001460735140))) : (((!(arr_6 [i_8 + 1]))))));
            arr_33 [i_8] = (((((-(arr_30 [i_6] [i_6] [i_8])))) ? (((min(var_3, (arr_24 [i_6] [i_8 - 1]))))) : (arr_23 [i_6])));
            var_34 = (min(var_34, ((min(((!(~var_2))), (!14))))));
            var_35 = (min(var_35, ((((~var_5) ? (arr_30 [i_6] [i_6] [i_6]) : ((min((!var_12), ((!(arr_11 [i_6] [i_8])))))))))));
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 9;i_9 += 1) /* same iter space */
        {
            var_36 *= (((arr_12 [i_9 + 1] [i_9 + 1]) / var_3));
            var_37 = var_2;
            var_38 = (max(var_38, (arr_25 [i_6])));
            var_39 = ((((-2147483647 - 1) >= 52)));
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 9;i_10 += 1) /* same iter space */
        {
            var_40 = (min(var_40, var_15));
            /* LoopNest 2 */
            for (int i_11 = 3; i_11 < 9;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    {

                        for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
                        {
                            var_41 = (min(var_41, (-1859745245 - 45)));
                            var_42 = 229;
                            arr_48 [i_13] [i_10] [5] [i_10] [3] = var_15;
                        }
                        for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
                        {
                            var_43 = (((arr_8 [i_6] [i_12] [i_14]) | (arr_8 [i_6] [i_10 - 1] [i_11 - 2])));
                            var_44 = (max(var_44, (((1647 ? (arr_2 [i_11 - 1] [i_10 + 1]) : (arr_2 [i_11 - 2] [i_10 - 1]))))));
                            var_45 = (min(var_45, (arr_49 [i_10 + 1] [i_10 + 1] [i_11 - 2] [i_11] [i_6])));
                        }
                        arr_52 [i_10] [i_11] [i_6] [i_10] = (arr_39 [i_6]);

                        for (int i_15 = 4; i_15 < 8;i_15 += 1)
                        {
                            arr_56 [i_10] [i_10] [i_10] [i_12] [i_15] [9] = var_7;
                            var_46 *= (((arr_23 [i_6]) ? ((239 ? var_18 : 1)) : 52));
                            var_47 = (((((var_2 || (arr_42 [i_6] [i_10])))) ^ var_13));
                            var_48 = (max(var_48, (((2147483647 + (1717760756 + 193))))));
                        }
                        for (int i_16 = 0; i_16 < 10;i_16 += 1)
                        {
                            arr_59 [i_6] [i_10] [4] [i_12] [i_10] = ((-(arr_29 [i_10] [i_10 - 1] [i_10])));
                            arr_60 [i_10] = (((arr_40 [i_10] [i_11 + 1] [i_11 + 1]) >= 213));
                            var_49 = var_12;
                            arr_61 [4] [i_10] [i_16] = var_2;
                        }
                    }
                }
            }
            arr_62 [i_6] [i_10] = (((var_19 && var_9) << (arr_47 [i_10])));
        }
        var_50 = (((((min(496790803869974211, -120))) ? var_17 : ((var_2 ? var_9 : (arr_38 [i_6] [i_6] [i_6] [i_6]))))));
        var_51 = (max(var_51, var_2));
    }
    #pragma endscop
}
