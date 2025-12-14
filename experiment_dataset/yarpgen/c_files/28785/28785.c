/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_11 = (max(var_11, (arr_5 [i_0])));
            var_12 = 12;
            var_13 = var_9;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_14 = 3487780510664858294;
            var_15 = ((((!(arr_1 [i_2]))) ? (arr_3 [i_0]) : var_1));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    {

                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            var_16 *= (arr_10 [i_6] [i_4] [10]);
                            var_17 = (arr_2 [i_3]);
                        }
                        var_18 = ((-15 ? 1697076611 : 45204));
                    }
                }
            }
            var_19 = (arr_9 [i_3] [i_3]);

            for (int i_7 = 4; i_7 < 14;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    var_20 = var_0;
                    var_21 = (var_2 < -1371494599);
                }
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    var_22 = (min(var_22, (((+(((var_1 + 2147483647) >> (var_0 - 4086143840))))))));
                    var_23 = (((arr_12 [i_3] [i_3]) != (arr_16 [i_0] [i_3] [i_7] [i_9])));

                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_24 = (((arr_10 [i_7] [i_7 - 4] [i_7 + 2]) ? (arr_18 [i_7] [i_3] [i_7 + 1] [12] [i_9]) : (arr_18 [i_3] [i_3] [i_7 + 2] [14] [i_7])));
                        var_25 = ((0 != (arr_6 [i_7 - 4] [i_7 - 4] [i_7 + 2])));
                        var_26 = ((((arr_12 [i_0] [i_3]) >> (var_4 - 16618509911585899164))));
                        arr_29 [i_0] [i_0] [i_7 - 2] [i_9] [i_3] [10] = ((~(arr_20 [i_7 - 1] [i_7 - 3] [i_3])));
                    }
                    for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                    {
                        var_27 = 0;
                        var_28 = ((arr_28 [i_7] [i_7] [i_7 + 1] [i_9] [i_11]) ? (((arr_14 [i_3] [i_3] [i_3]) ? -15 : var_7)) : (2597890685 <= var_0));
                    }
                    for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
                    {
                        arr_34 [1] [i_3] [i_3] = (~((-(arr_2 [i_0]))));
                        var_29 = (((arr_27 [i_3] [i_7 - 4]) == (arr_27 [i_3] [i_7 - 3])));
                        var_30 = (arr_30 [i_7]);
                    }
                    var_31 &= arr_31 [i_9] [10] [i_7] [10] [i_7];
                    var_32 = (((arr_14 [i_3] [i_7 - 4] [i_7 - 4]) != (arr_14 [i_3] [i_7 - 2] [8])));
                }
                arr_35 [14] [i_3] [i_3] [i_7] = 0;
                var_33 -= (arr_12 [12] [12]);
            }
            for (int i_13 = 4; i_13 < 14;i_13 += 1) /* same iter space */
            {
                var_34 = (~(arr_1 [i_13 + 1]));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        {
                            var_35 = (min(var_35, (1 == 6489898298981289861)));
                            var_36 = (~-1761034615501147890);
                        }
                    }
                }
                arr_47 [i_3] [i_3] = ((+((((arr_2 [i_0]) == (arr_42 [2]))))));
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 16;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 15;i_17 += 1)
            {
                {
                    var_37 -= (arr_50 [i_0]);
                    var_38 = (((arr_9 [i_16] [i_16]) ? (max((arr_40 [i_0] [i_0] [i_16] [i_16] [i_17 + 1] [i_17]), (((arr_31 [i_16] [0] [i_0] [i_16] [i_16]) ? (arr_46 [7] [i_0]) : (arr_45 [i_0] [i_0] [12] [i_16] [i_17] [i_17 + 1]))))) : (((min((arr_17 [i_16] [i_16] [i_16]), (arr_17 [i_16] [i_0] [i_16])))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 18;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 18;i_19 += 1)
        {
            {
                var_39 = (arr_56 [i_18]);
                var_40 = (arr_59 [i_19] [i_18] [i_18]);
                var_41 = 30126;
            }
        }
    }
    #pragma endscop
}
