/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    var_18 = var_3;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [11] = var_12;
        var_19 = (max(var_19, var_11));
        var_20 += (max(4836390623870781017, -1));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_21 = var_10;
        var_22 = (((((arr_0 [i_1] [i_1]) + var_12)) + ((((arr_5 [i_1]) - var_14)))));
        arr_7 [i_1] = ((var_3 * (var_13 < 3976015622)));
        arr_8 [8] [i_1] = (arr_4 [i_1]);
        var_23 &= -var_11;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_24 += ((arr_5 [i_2]) * (arr_3 [i_2] [i_2]));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_25 = (min(var_25, var_2));

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_26 -= (((arr_12 [i_5]) / (arr_9 [i_3])));
                        var_27 -= (((arr_13 [i_2] [i_3] [i_4]) - (arr_9 [i_5])));
                        var_28 = (max(var_28, (arr_19 [i_2] [i_3] [i_4] [i_3] [i_5])));
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_29 = (arr_14 [i_2] [i_2] [i_6]);
                        var_30 = (min(var_30, (-2147483647 - 1)));
                        arr_23 [i_2] [i_4] [1] [i_2] = (~var_0);
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_31 *= ((!(((4836390623870781024 ? -4836390623870781044 : 4836390623870781016)))));

                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_32 = (arr_27 [i_3] [i_3] [i_3] [i_3] [i_2]);
                            var_33 += var_2;
                            var_34 = (max(var_34, (arr_13 [i_2] [i_3] [i_4])));
                        }
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_35 = (max(var_35, (arr_17 [i_9] [i_7] [i_4] [i_3] [i_2])));
                            arr_33 [i_2] [i_4] [i_7] [10] = (arr_3 [i_2] [i_7]);
                            var_36 = (((arr_12 [i_9]) ? var_2 : (arr_26 [i_4] [i_7] [i_4] [i_2])));
                        }
                    }
                    var_37 = arr_11 [i_3] [i_2];
                    var_38 = (min(var_38, (((~(arr_10 [i_2]))))));
                }
            }
        }
        var_39 = (i_2 % 2 == zero) ? ((((arr_15 [i_2]) >> (((arr_15 [i_2]) - 43956))))) : ((((arr_15 [i_2]) >> (((((arr_15 [i_2]) - 43956)) - 6620)))));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {

        for (int i_11 = 2; i_11 < 6;i_11 += 1)
        {
            var_40 = var_7;
            var_41 = (max(var_41, ((((((var_14 & (arr_22 [14] [i_11] [i_11 + 4])))) ? (arr_22 [i_11] [i_11] [i_11 + 4]) : ((max((arr_22 [18] [i_11] [i_11 - 2]), (arr_31 [i_11] [i_11 - 1] [i_11 + 1] [i_11] [i_11 - 1])))))))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 0;i_13 += 1)
                {
                    {
                        var_42 = (max(var_42, ((min((arr_3 [i_12] [i_11 + 1]), ((((max((arr_11 [i_10] [i_11 - 2]), -1590983095))) ? 4836390623870781024 : (arr_16 [i_10] [i_11] [i_10]))))))));
                        arr_44 [i_10] [i_11 + 4] [i_12] [i_13] = var_4;
                        var_43 = ((max((arr_39 [i_11 + 3] [i_11 + 4] [i_11 + 4]), (arr_39 [i_11 + 1] [i_11 + 2] [i_11 + 1]))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 8;i_15 += 1)
            {
                {
                    var_44 = var_0;
                    var_45 -= var_5;
                    var_46 = (min(var_46, (arr_5 [i_10])));
                }
            }
        }
    }
    #pragma endscop
}
