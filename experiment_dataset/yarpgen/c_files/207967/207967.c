/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((var_9 ? (((arr_4 [i_1 + 1] [5] [i_1 + 1]) % (arr_4 [i_1 - 1] [i_1] [i_1 + 1]))) : (((arr_4 [i_1 - 2] [i_1 - 3] [3]) >> (((arr_4 [i_1 - 1] [4] [i_1]) - 2272620491))))));
                arr_6 [i_0] [i_1] = ((var_6 ? ((var_13 - (arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 2]))) : (arr_2 [i_1])));
            }
        }
    }

    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 4; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_18 [i_2] [i_3] [i_4] [i_2] [i_6] = ((-4043064444457636659 ? 4043064444457636669 : 1));
                            arr_19 [i_2] [i_6] = (((arr_16 [i_2] [10] [i_2] [i_2 + 1] [6] [i_2] [i_2 + 1]) || var_0));
                        }
                    }
                }
            }
            arr_20 [i_3] = (arr_13 [i_2 - 1] [i_2] [2]);
            arr_21 [i_2] [i_3] = (arr_8 [i_2 - 2] [i_2 - 1]);
            arr_22 [i_2] [i_3] [i_3] = ((((((arr_4 [i_2 - 1] [i_2] [11]) ? var_11 : var_7))) ? 4043064444457636669 : var_13));
            arr_23 [i_2] = (arr_17 [i_2 - 1]);
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            arr_27 [i_7] [i_2] [i_7] = ((((((arr_8 [i_2] [i_7]) ? ((min(var_4, var_9))) : (arr_26 [i_2] [i_7])))) ? var_6 : (((((var_7 ? var_10 : (arr_13 [i_2 + 1] [i_7] [i_7])))) ? ((~(arr_1 [i_2]))) : ((min(var_10, var_12)))))));

            /* vectorizable */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                arr_30 [i_2] [8] = arr_9 [i_2 - 1] [i_2 - 2];
                arr_31 [i_7] [i_7] = ((((((arr_14 [i_7] [i_7] [i_8]) ? (arr_24 [i_7] [0] [i_7]) : (arr_7 [i_2] [i_7])))) ? var_13 : ((((arr_7 [i_2 + 1] [i_2]) && (arr_26 [i_7] [i_7]))))));

                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    arr_35 [i_7] [i_8] = (((arr_8 [i_8] [i_9]) > (arr_25 [i_7] [i_2 + 1])));
                    arr_36 [10] [i_2] [i_2] [i_7] [i_7] [6] = ((~(arr_33 [i_2])));
                }
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    arr_39 [2] [i_7] [i_7] = (arr_17 [i_2 + 1]);
                    arr_40 [i_7] [i_7] [i_8] = ((var_7 ? (arr_3 [i_2 - 2] [0]) : var_15));
                    arr_41 [i_2] [10] [0] [i_7] [i_7] = (arr_24 [i_2 - 1] [11] [i_7]);
                    arr_42 [i_7] [i_7] [i_7] [i_7] [i_7] = ((var_4 ? (arr_38 [i_2 - 2] [i_2 + 1] [i_2 - 1]) : (arr_38 [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                    arr_43 [3] [i_7] [i_8] [i_10] = (((arr_24 [i_2 - 1] [i_2 - 1] [i_7]) ? (arr_2 [i_7]) : ((var_5 ? (arr_33 [i_7]) : (arr_9 [i_2] [i_7])))));
                }
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                arr_46 [i_2] [i_7] [0] = (((arr_11 [i_7]) ? var_0 : (arr_25 [i_7] [i_2 - 1])));
                arr_47 [i_2] = (!(arr_12 [i_2]));
            }
            arr_48 [i_7] [i_7] = (arr_25 [i_7] [i_7]);
            arr_49 [i_2] [i_2] = (((arr_24 [i_2] [i_2 + 1] [i_2]) >= (((arr_24 [i_2] [i_2 - 1] [i_2]) ? (arr_24 [i_2 - 2] [i_2 - 1] [i_2]) : (arr_24 [4] [i_2 - 1] [i_2])))));
        }
        arr_50 [i_2 - 2] = (arr_34 [i_2] [10] [i_2 - 2] [i_2 - 2] [7] [i_2]);
        arr_51 [i_2] = (min((((arr_38 [i_2 - 1] [i_2 - 1] [i_2 + 1]) ? var_16 : var_6)), (arr_38 [i_2 + 1] [i_2 - 2] [i_2 + 1])));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
    {
        arr_55 [i_12] [i_12] = (arr_52 [i_12] [i_12]);
        arr_56 [i_12] [i_12] = ((~(arr_52 [i_12] [i_12])));
    }
    for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
    {
        arr_60 [i_13] = (min(8789891776244342006, 90));
        arr_61 [i_13] [i_13] = ((+(((arr_57 [i_13]) ? (arr_57 [i_13]) : (arr_57 [i_13])))));

        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        {
                            arr_74 [i_14] [i_14] [i_17] = ((arr_65 [i_13]) >= var_7);
                            arr_75 [i_13] [i_13] [i_14] [13] [i_16] [i_16] [i_17] = (arr_64 [i_16] [i_15] [1]);
                        }
                    }
                }
            }
            arr_76 [i_13] [i_13] = (((arr_72 [i_13] [i_13] [21] [i_13] [i_14] [1] [i_13]) ? (arr_64 [i_13] [i_13] [i_14]) : (((((arr_67 [i_13] [i_13] [19]) > (arr_66 [i_14] [i_13] [5] [i_13])))))));
            arr_77 [i_13] = ((-107 ? 1 : -4043064444457636686));
        }
    }
    for (int i_18 = 0; i_18 < 22;i_18 += 1) /* same iter space */
    {
        arr_80 [i_18] [i_18] = (max((min((((arr_62 [i_18] [i_18] [i_18]) ? var_11 : var_16)), (((var_15 >= (arr_69 [17] [i_18])))))), ((min((arr_78 [i_18] [i_18]), (arr_78 [i_18] [i_18]))))));
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 22;i_19 += 1)
        {
            for (int i_20 = 3; i_20 < 19;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 22;i_21 += 1)
                {
                    {
                        arr_89 [i_20] = var_14;
                        arr_90 [i_18] [i_19] [i_21] [i_21] = (((((var_15 * (arr_85 [i_19] [i_19] [i_21])))) || ((min(((min((arr_59 [i_19]), (arr_86 [15] [i_20 + 1] [15] [i_18])))), (((arr_70 [i_18] [20] [16] [5] [i_20]) ? var_5 : var_16)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
