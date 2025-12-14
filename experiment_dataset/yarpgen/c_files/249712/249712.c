/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = (max(var_20, (arr_3 [i_0] [6])));
        var_21 ^= ((-((var_14 ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = ((2476311568 ? 1158564780 : 6503611021889243788));
        var_22 = ((var_5 ? ((var_6 * (max((arr_5 [i_1]), 995900303)))) : (((var_3 ? (arr_3 [i_1] [2]) : (arr_3 [i_1] [4]))))));
        arr_7 [i_1] = (min(((9597610006466819229 ? (arr_3 [i_1] [4]) : ((18446744073709551615 ? (arr_5 [i_1]) : var_12)))), ((((arr_0 [i_1]) % (arr_0 [i_1]))))));
        var_23 = (max(var_23, var_1));
        var_24 = (((max((arr_5 [i_1]), (arr_3 [i_1] [4]))) ^ var_9));
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        arr_10 [i_2 - 1] = (((arr_9 [i_2] [7]) ? (((min(18446744073709551615, 14239)))) : var_18));
        var_25 = (max(var_25, (((4830244988271861003 || (((28629 ? -28629 : 2388316305))))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_26 = (((arr_13 [i_2 + 2] [i_2 + 2] [i_2 + 2]) | (((14250 >> (((arr_9 [i_3] [10]) - 4928288750649583667)))))));
            var_27 = ((((var_10 == (arr_11 [i_2 + 1] [i_3]))) || -1615434854));
            var_28 = ((-7235504617784806124 ? (arr_1 [i_2 - 1]) : (arr_1 [i_2 + 1])));
            var_29 ^= (((((arr_13 [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? var_2 : var_2))) ? ((1615434825 ? (arr_8 [i_2 + 2]) : -121)) : 29008);
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    {
                        var_30 = ((var_3 < (arr_8 [i_4 - 1])));
                        arr_23 [i_4 - 1] [i_5] [i_5 - 1] [i_6] [i_7] [i_4] = arr_19 [i_4] [i_4 - 1] [i_4 - 1];

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_26 [i_5] [i_6] [i_4] = ((-((9223372036854775807 ? 367352760 : 18446744073709551615))));
                            arr_27 [i_4] [i_4] = (arr_9 [i_4 - 1] [i_5 - 1]);
                            arr_28 [10] [i_4] [1] [i_7] [i_8] = var_3;
                        }

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_31 += var_11;
                            arr_33 [i_4] [i_5] [i_5 - 1] [i_7] [i_4] [i_6] [i_5] = var_11;
                            var_32 += ((23624 >> ((((29008 ? var_12 : (arr_14 [i_4 - 1]))) - 16119997161086315459))));
                            arr_34 [i_4] [i_7] = (58360 > 29);
                            arr_35 [i_4] [i_6] [8] [i_7] [i_9] [i_5] = (((arr_14 [1]) >> (((arr_1 [i_4 - 1]) - 1410225786))));
                        }
                        arr_36 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4 - 1] = var_18;
                    }
                }
            }
        }

        for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
        {
            var_33 = ((var_5 ? var_16 : (arr_21 [i_4 - 1] [i_4] [i_4 - 1] [i_10] [i_4 - 1] [i_4 - 1])));
            arr_40 [i_4 - 1] [i_4] = arr_17 [i_4] [i_4];
            arr_41 [i_4] = -302260484;
        }
        for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
        {
            arr_44 [i_4] [i_11] = (arr_19 [i_4 - 1] [i_4 - 1] [i_11]);
            var_34 = (max(var_34, (arr_17 [8] [10])));
            var_35 = ((1 ? 104 : 51288));
        }
        for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
        {
            var_36 ^= (((arr_12 [i_4 - 1] [i_4 - 1]) ? (arr_12 [i_4] [i_4]) : 4294967295));
            var_37 = var_13;
        }
        arr_47 [i_4] = (~59320);
    }
    var_38 ^= (var_3 != var_14);
    var_39 = var_18;
    #pragma endscop
}
