/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0 + 2] [i_0 + 2] &= arr_2 [i_0] [i_0];
        arr_5 [i_0] [i_0] = (arr_1 [i_0 + 3] [i_0]);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = 57445;

        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            arr_14 [i_1] = (arr_11 [i_1] [i_1] [i_1]);
            arr_15 [i_1] [i_2] = var_3;
            arr_16 [i_1] [i_1] [i_1] = (arr_3 [i_1] [i_2]);
            arr_17 [i_1] [i_1] = (min((arr_1 [i_2] [i_2]), 16));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                arr_23 [i_1] [i_1] [i_1] [12] |= (!var_12);
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            arr_29 [i_6] = var_11;
                            arr_30 [6] [i_1] [i_1] [i_1] [i_4] [i_5 + 1] [i_5] = ((!(arr_28 [i_1] [i_4] [i_5 + 1])));
                        }
                    }
                }
                arr_31 [i_1] [3] [3] = arr_21 [i_1] [i_4];
                arr_32 [i_1] [i_1] [i_1] = 914796988;
            }
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                arr_36 [i_1] = 5330630911213508512;
                arr_37 [i_1] [i_1] [i_1] [i_1] = (arr_28 [i_1] [i_1] [i_1]);
            }
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                arr_40 [2] [2] = (((arr_21 [6] [i_3]) <= var_18));
                arr_41 [i_1] = (((arr_3 [i_1] [i_1]) ? (arr_3 [i_1] [i_3]) : (arr_3 [i_1] [i_8])));
            }

            for (int i_9 = 2; i_9 < 13;i_9 += 1)
            {
                arr_46 [i_3] [i_9] = 82893813;
                arr_47 [i_1] [i_3] [i_1] = ((254115667 ? (arr_2 [3] [i_3]) : 35752));
            }
            arr_48 [6] = ((var_2 ? -1888 : (arr_25 [i_1] [i_1] [i_1] [i_3] [i_3])));
        }
        for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
        {
            arr_53 [i_1] = 36365;
            arr_54 [i_1] = (arr_44 [i_1] [i_1] [i_1] [i_10]);
            arr_55 [2] [i_10] [i_10] = ((((min((((!(arr_28 [i_1] [i_10] [i_10])))), (max(58629, 14627447413271239574))))) ? (((arr_43 [i_1] [6] [i_10]) ? var_11 : var_15)) : ((max((!var_7), var_13)))));
        }
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        arr_60 [i_11] = ((((arr_58 [i_11]) ? (arr_58 [i_11]) : (arr_58 [i_11]))));
        arr_61 [i_11] = (((~(arr_3 [i_11] [i_11]))));
        arr_62 [i_11] = (min(var_9, -25708));
        arr_63 [i_11] = 11870097006284650015;
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    {
                        arr_71 [i_11] [i_12] = (arr_64 [i_14]);
                        arr_72 [i_12] [i_11] [i_11] [i_11] = (min((((!(arr_69 [i_11] [i_11])))), (((arr_69 [i_11] [i_11]) ? (arr_57 [i_11] [i_11]) : (arr_69 [i_12] [i_11])))));
                        arr_73 [i_11] [i_12] [i_13] [i_11] [i_13] = (arr_64 [i_11]);
                    }
                }
            }
        }
    }
    var_19 &= var_15;

    /* vectorizable */
    for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 10;i_17 += 1)
            {
                {
                    arr_83 [i_15] [i_17] [i_17] [i_15] = 32256;
                    arr_84 [i_15] [i_16] [i_17] = (((arr_56 [i_15]) ? var_5 : (arr_56 [i_16])));
                }
            }
        }
        arr_85 [i_15] = 16818989415956957777;
    }
    for (int i_18 = 0; i_18 < 10;i_18 += 1) /* same iter space */
    {
        arr_90 [6] = 9448;
        arr_91 [i_18] = ((((((((arr_88 [i_18]) ? (arr_25 [i_18] [i_18] [i_18] [i_18] [i_18]) : 8952566656078620784))) ? var_10 : (arr_34 [i_18] [i_18] [i_18] [i_18]))) / (((var_14 ? (max((arr_2 [i_18] [i_18]), var_1)) : (arr_44 [i_18] [i_18] [i_18] [i_18]))))));
    }
    var_20 = var_16;
    var_21 &= ((var_2 + (max(var_9, (min(var_17, 0))))));
    #pragma endscop
}
