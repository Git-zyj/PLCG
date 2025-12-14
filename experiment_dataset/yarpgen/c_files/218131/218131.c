/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_11 += var_7;
        var_12 = (((arr_0 [7]) | (arr_0 [i_0])));
        var_13 = (((((!(arr_0 [12])))) != 1));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_5 [18] = 410554469110933632;

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_14 = ((~(arr_2 [i_1])));
            arr_8 [i_1] [i_2] = (arr_6 [i_1] [18]);
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_15 = (max(var_15, 430442973));

            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                var_16 = (-10793122189267737750 != 1760618643);

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_19 [14] [14] [i_4] [i_3] = (((arr_15 [i_4] [i_4 - 2] [i_4] [i_5]) ? (arr_15 [i_1] [i_4 + 2] [i_4 - 1] [1]) : (arr_15 [i_1] [i_4 + 4] [i_4] [i_5])));

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_17 = (arr_11 [i_4 + 1]);
                        var_18 = (min(var_18, ((((arr_16 [i_1] [i_4 - 2] [1] [i_4]) << ((((((~(arr_16 [i_1] [i_3] [i_4] [5]))) + 1698447865)) - 6)))))));
                        arr_22 [i_1] [i_3] [17] [8] = var_9;
                        var_19 = 0;
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_20 = (min(var_20, ((~(arr_20 [i_4 + 4] [i_4 + 2] [i_4] [i_4] [8])))));
                        arr_25 [i_7] [i_3] [i_5] [i_1] [i_3] [i_3] [i_1] = (arr_3 [i_1]);
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_28 [i_3] = (arr_27 [6] [i_3] [i_4] [i_3] [i_4] [i_3] [12]);
                        var_21 -= ((7653621884441813837 | ((~(arr_18 [i_1] [i_3] [1] [16])))));
                    }
                }
                arr_29 [i_3] [i_3] = arr_1 [i_1];
            }
            var_22 = (min(var_22, var_8));
            arr_30 [i_1] [i_3] [i_1] = ((((!(arr_1 [4])))));
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    {
                        arr_35 [i_1] [i_1] [i_3] = (((!3864524323) == 30720));
                        arr_36 [i_3] [0] [i_3] [i_1] [i_1] [i_3] = (~1818401410);
                    }
                }
            }
        }
        var_23 |= var_7;
    }
    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
    {

        for (int i_12 = 1; i_12 < 17;i_12 += 1)
        {
            var_24 = (min(var_24, ((((((~((4294967295 ? 1818401395 : -1760618663))))) ? 1760618635 : (~-11296))))));
            var_25 = (min(var_25, 21));
            var_26 = ((max((((255 + (arr_1 [11])))), (arr_0 [i_11]))));
        }
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {

            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                var_27 = (min(var_27, 175157734847521671));

                for (int i_15 = 3; i_15 < 18;i_15 += 1)
                {
                    arr_48 [i_15] [i_13] [i_14] [i_15] = (min(((~(arr_39 [i_11]))), ((~((-26198 ? var_5 : var_1))))));
                    var_28 = 3864524323;
                }
                for (int i_16 = 2; i_16 < 18;i_16 += 1)
                {

                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {
                        arr_54 [i_11] [11] [i_11] [i_16 - 2] [i_17] = -63;
                        var_29 = (max(var_29, ((-(arr_34 [i_11] [i_14] [i_17])))));
                        var_30 = (min(var_30, var_0));
                        var_31 = var_6;
                    }
                    var_32 = (arr_43 [10] [15]);
                }
            }
            /* vectorizable */
            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                arr_57 [i_11] [i_13] [i_18] = ((~(arr_49 [i_11] [i_11] [i_11])));
                /* LoopNest 2 */
                for (int i_19 = 2; i_19 < 17;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 19;i_20 += 1)
                    {
                        {
                            var_33 = (min(var_33, 430442973));
                            var_34 = (min(var_34, ((((((-(arr_50 [i_20] [i_13] [i_18] [i_18] [16])))) && -39002)))));
                        }
                    }
                }
            }
            var_35 = (max((arr_13 [i_13]), (((((107 + (arr_53 [i_11] [i_13])))) == ((var_5 ? (arr_47 [i_11] [i_13] [i_11] [4] [i_13]) : (arr_13 [i_13])))))));
            arr_64 [10] [i_13] = ((39891 ? ((~(arr_45 [i_13] [i_13] [i_11] [i_11]))) : (max((arr_45 [9] [i_11] [14] [i_13]), (arr_45 [i_13] [i_13] [i_11] [i_11])))));
        }
        var_36 &= ((((((arr_17 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) ? ((3864524323 ? (arr_39 [i_11]) : var_6)) : -94))) ? (((arr_43 [2] [i_11]) ? (arr_60 [i_11] [i_11] [i_11]) : ((~(arr_12 [i_11]))))) : (((((arr_52 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) == (-1 | var_6)))))));
    }
    /* LoopNest 3 */
    for (int i_21 = 1; i_21 < 15;i_21 += 1)
    {
        for (int i_22 = 1; i_22 < 15;i_22 += 1)
        {
            for (int i_23 = 1; i_23 < 13;i_23 += 1)
            {
                {
                    var_37 = ((var_6 - ((-(arr_53 [i_23 - 1] [i_22 - 1])))));
                    var_38 = (min(var_38, (((~((~((((arr_47 [i_23 + 2] [2] [i_21 - 1] [2] [i_21 - 1]) < (arr_60 [i_23] [i_22] [i_21])))))))))));
                    var_39 = ((!(arr_55 [i_21 - 1] [6] [i_23])));
                    var_40 = ((((min(var_5, 1760618619))) ? var_2 : (max((min(var_3, 10230895139226211106)), (4294967285 < var_2)))));
                }
            }
        }
    }
    #pragma endscop
}
