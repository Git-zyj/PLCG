/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = ((5 ? 4 : 7));
        var_15 = -10;
        var_16 &= (((arr_2 [i_0]) ? var_11 : 18));
        var_17 = (min(var_17, ((((!11327) && var_3)))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_18 = ((((-((-27 ? -26 : 596025839)))) != (!4)));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_2] [i_3] [i_4] = (arr_11 [i_1] [i_2 - 2] [i_3 - 1] [i_2 - 2]);
                        var_19 = var_5;
                    }
                }
            }
        }
        arr_15 [i_1] = var_6;
    }
    for (int i_5 = 2; i_5 < 8;i_5 += 1)
    {
        var_20 &= (((((-22 ? 52 : 11327))) ? (arr_6 [i_5] [i_5]) : var_0));
        var_21 -= 132;
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    var_22 = (arr_13 [i_7] [i_8]);
                    var_23 = (arr_22 [i_7]);
                    var_24 = (((((var_4 ? (-7 & -2046066503) : -2))) ? -5820529547608133909 : 817405199));
                }
            }
        }
        var_25 = (max(var_25, (((((!(arr_8 [i_6]))) ? ((~(arr_8 [i_6]))) : (arr_12 [i_6] [i_6] [i_6] [i_6]))))));
    }
    /* LoopNest 3 */
    for (int i_9 = 4; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            {
                                var_26 = (arr_36 [i_9] [i_10]);
                                var_27 = (((var_7 ? (-25 != 9616) : ((((arr_35 [i_9] [i_10] [1] [i_12 - 2]) <= (arr_36 [i_9] [i_9])))))));
                                var_28 = (~var_12);
                            }
                        }
                    }
                    var_29 = ((((arr_39 [i_9 - 3] [i_9 - 3] [i_9 + 1] [i_9 - 2] [i_11]) & (arr_36 [i_9] [i_9]))));
                    var_30 -= ((-19 ? 54791 : -33));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 14;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 13;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                {
                    var_31 = (max(var_31, ((max((((((var_4 ? var_4 : (arr_20 [14])))) ? (arr_38 [i_14] [i_14] [i_16] [i_16] [i_16]) : ((((arr_33 [i_14] [i_16] [i_16] [i_16]) > (arr_7 [i_16] [i_15] [i_14])))))), ((var_2 ? ((var_6 ? (arr_27 [i_14] [i_15] [i_16]) : (arr_30 [12] [i_15 - 1] [i_16]))) : (arr_30 [i_15 - 1] [i_15 + 1] [i_16]))))))));
                    var_32 = -15;
                }
            }
        }
    }
    #pragma endscop
}
