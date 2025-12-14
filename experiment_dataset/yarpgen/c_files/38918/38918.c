/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [20] &= (arr_1 [i_0] [8]);
        arr_3 [i_0] = (((arr_0 [i_0] [i_0]) <= (~var_5)));
        arr_4 [12] |= (~0);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] = (arr_0 [i_1] [i_1]);
        arr_8 [i_1] = (arr_5 [i_1] [i_1]);
        arr_9 [i_1] [0] = -1252914135;
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            arr_14 [i_3 + 1] = ((!(arr_11 [i_2])));
            arr_15 [i_2] [i_3 + 1] = (((arr_5 [i_3 - 1] [i_3 + 1]) / (arr_5 [i_3 - 1] [i_3 + 1])));
            arr_16 [i_2] [i_3 + 1] = (-113755238065007011 || var_0);
            arr_17 [i_2] [2] = (((~-1252914140) >= (!var_0)));
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_25 [i_2] [i_5] [i_6] = ((8478386972489486053 == (arr_6 [i_3 + 1])));
                            arr_26 [i_2] [i_4] [i_2] [13] [i_2] = 4941745533175051473;
                            arr_27 [i_2] [i_3 - 1] [i_4] [i_5] [i_4] = ((arr_13 [i_2] [i_2] [i_2]) % var_7);
                            arr_28 [i_2] [i_3] [i_4 + 1] [i_5] [i_6] [2] = 6008439120528551075;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_7 = 2; i_7 < 13;i_7 += 1)
        {
            arr_31 [i_7] [i_7] = -1252914135;
            arr_32 [i_2] [i_7] [i_7 - 1] = ((1252914145 > (-6228795395277082572 == 13658049664502921689)));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {
                    {
                        arr_38 [i_7] [i_7] [i_7] [10] = (((arr_18 [i_7] [i_2] [i_7 - 2] [i_9 + 1]) <= ((2346398289972496007 ? var_7 : var_10))));
                        arr_39 [i_8] [13] [i_8] [i_7] [i_7] = (!var_8);
                    }
                }
            }
            arr_40 [12] &= (((arr_23 [1] [i_2]) <= 14294932523395820065));
        }
        arr_41 [i_2] = -113755238065007018;
        arr_42 [i_2] = 0;
        arr_43 [i_2] &= (min((arr_34 [4] [10] [i_2] [i_2]), (max(var_15, (var_2 && var_1)))));
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            arr_50 [i_10] [i_11] = var_4;
            arr_51 [i_10] [i_10] [i_10] = (16100345783737055608 >= var_13);
            arr_52 [i_10] = ((min((arr_0 [i_10] [i_11]), 1165758122155753262)));
            arr_53 [i_10] = (var_5 ^ 113755238065007001);
        }
        arr_54 [i_10] [i_10] = ((~(max(-3209429589291673126, ((~(arr_49 [i_10] [i_10] [i_10])))))));
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 19;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    {
                        arr_63 [i_10] [9] [14] [i_14] = (((!(!2185548336564554496))));
                        arr_64 [8] [i_12] [i_13] [18] [15] = var_6;
                        arr_65 [i_10] [i_12] [i_13] [3] [i_14] = ((var_0 <= (955316806117826426 - 2185548336564554503)));
                    }
                }
            }
        }

        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            arr_68 [i_10] [i_10] = (min(-113755238065006982, (arr_47 [i_10] [i_10])));
            arr_69 [i_10] [i_10] [i_15] &= (min((~16261195737144997110), (((!(arr_1 [i_10] [i_15]))))));
        }
    }
    var_17 = var_10;
    #pragma endscop
}
