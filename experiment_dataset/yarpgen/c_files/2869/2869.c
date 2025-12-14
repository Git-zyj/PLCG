/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!((max(-22, 1910757400)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = (arr_0 [i_0]);
        var_18 = (((!(arr_3 [i_0]))));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] = (arr_6 [i_1 + 4]);
        var_19 &= (arr_5 [i_1]);
        var_20 = ((-(((137 || (arr_6 [i_1 + 3]))))));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 17;i_2 += 1)
    {
        var_21 = ((!(((60993925 << (var_2 - 2317681288))))));
        arr_12 [i_2] &= ((2384209896 ? 10683922470530792538 : -14720));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_5 = 1; i_5 < 9;i_5 += 1)
            {
                arr_21 [i_5] [i_4] [i_3] = ((-(((arr_5 [i_4]) ? var_9 : 10683922470530792538))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 8;i_7 += 1)
                    {
                        {
                            arr_27 [i_3] [i_4] [i_4] = var_5;
                            var_22 = (7762821603178759055 / -19242);
                        }
                    }
                }
                arr_28 [i_5] [i_4] [i_5] [i_3] = (arr_3 [i_3]);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 7;i_9 += 1)
                    {
                        {
                            var_23 = (max(var_23, (~2384209880)));
                            var_24 ^= ((((arr_22 [i_3] [i_3] [i_3] [i_8] [i_9]) | var_15)));
                        }
                    }
                }
            }
            arr_34 [i_4] [i_4] [i_4] = (((-(arr_8 [i_4] [i_4]))));
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 9;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 8;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 7;i_12 += 1)
                    {
                        {
                            var_25 = (((((2384209895 ? ((min(1910757400, 1910757400))) : (min(var_7, var_2))))) ? ((-((-(arr_31 [i_3] [i_4] [i_10 - 1] [i_3] [i_11]))))) : var_3));
                            arr_42 [i_3] [i_4] [i_10 - 2] [i_4] [i_12] [i_4] = -var_5;
                            var_26 ^= ((7762821603178759101 ? 1775125291 : 7762821603178759101));
                        }
                    }
                }
            }
            var_27 &= var_15;
            var_28 = ((((min(1910757400, (arr_36 [i_4] [i_4] [i_4])))) ? (arr_35 [i_4] [i_3] [i_3] [i_3]) : ((var_14 ? 1699001663 : (arr_36 [i_3] [i_4] [i_4])))));
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
        {
            var_29 *= var_2;
            var_30 = (!1910757389);
            var_31 &= (arr_11 [i_3] [i_3]);
            var_32 = (max((arr_20 [i_13]), var_3));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
        {
            arr_47 [i_3] [i_3] = (arr_17 [2]);
            var_33 = (max(var_33, 7762821603178759101));
            var_34 = (~1);
            arr_48 [i_3] [i_14] = ((~(arr_32 [i_14] [i_14] [i_3] [i_14] [i_14] [i_14] [i_3])));
            arr_49 [i_3] [i_14] [i_14] = var_11;
        }
        arr_50 [i_3] |= (arr_9 [i_3]);
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 10;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                {
                    arr_58 [i_16] = (max(10683922470530792514, (((((((arr_35 [i_3] [i_3] [i_15] [i_16]) ? (arr_9 [i_16]) : (arr_56 [i_3] [i_15] [i_16])))) ? (arr_45 [i_15] [2]) : (min(100663296, (arr_57 [i_3] [i_15] [i_16]))))))));
                    var_35 = (max(var_35, -var_2));
                    /* LoopNest 2 */
                    for (int i_17 = 1; i_17 < 6;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 10;i_18 += 1)
                        {
                            {
                                var_36 = (min(var_5, var_13));
                                arr_63 [i_16] [i_15] [i_16] [i_16] [i_17] [i_15] [i_18] = (min(((min(((((arr_13 [i_16]) && var_3))), var_12))), (arr_20 [i_15])));
                                var_37 = (max(var_37, (((!(((-(max((arr_20 [i_18]), var_8))))))))));
                                var_38 = (arr_39 [i_17 + 3] [i_17 + 4] [i_17 - 1] [i_3]);
                                var_39 = ((-(((arr_19 [i_3] [i_15] [i_16]) ? (arr_40 [4] [i_17] [i_17] [i_16] [i_15] [i_15] [i_3]) : (arr_35 [i_3] [i_17 + 2] [i_17 + 2] [i_17 + 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_40 = var_11;
    var_41 = (min(var_11, (18446744073709551608 || 10683922470530792514)));
    /* LoopNest 2 */
    for (int i_19 = 0; i_19 < 1;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 17;i_20 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 17;i_21 += 1)
                {
                    for (int i_22 = 2; i_22 < 14;i_22 += 1)
                    {
                        {
                            var_42 ^= ((~(!-442696926)));
                            var_43 = var_8;
                            var_44 = (arr_65 [i_22 - 1] [i_20]);
                            var_45 = ((((((-((min(var_10, var_4))))) + 2147483647)) << (((arr_74 [i_22] [i_22 + 3] [i_22 + 3] [i_22] [i_22 - 1] [i_22 + 1]) - 26792))));
                        }
                    }
                }
                var_46 ^= arr_1 [i_19];
            }
        }
    }
    #pragma endscop
}
