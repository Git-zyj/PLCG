/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= 0;
    var_15 = (((((-1 > (!var_6)))) + (((((0 ? 1 : 0))) ? var_1 : (1 + var_10)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((~(!var_6)));
        var_16 = ((!(((22965 | (arr_3 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_17 = (((arr_0 [i_1] [i_1]) <= (arr_0 [i_1] [i_1])));
        var_18 |= (((arr_3 [i_1] [i_1]) ? (arr_1 [i_1]) : var_7));

        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            arr_10 [i_1] [i_1] [i_1] = (((arr_0 [i_2 + 1] [i_2 - 1]) & var_8));
            var_19 = 1;
            arr_11 [i_1] [i_1] = var_8;
            var_20 = (arr_6 [i_1]);
        }
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_21 = (max(var_21, (arr_2 [i_3])));
        var_22 = (((((arr_5 [0]) || (1 / 1))) ? (((!(!-20922)))) : (((var_4 * 59248) ? ((max((arr_14 [i_3]), -112))) : var_2))));
        arr_15 [i_3] = (!1);
        var_23 -= (max((((arr_12 [i_3]) == (arr_12 [i_3]))), (((arr_2 [i_3]) || ((max(1, var_4)))))));

        for (int i_4 = 3; i_4 < 8;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    {
                        arr_24 [i_3] [7] [i_6] = var_13;

                        for (int i_7 = 4; i_7 < 9;i_7 += 1)
                        {
                            var_24 = (max((((((var_2 ? 844734809 : (arr_26 [i_3] [i_4] [1] [i_6] [i_4])))) || -1)), 0));
                            arr_28 [i_3] [i_4] |= (max((((((min((arr_13 [i_4] [i_4]), var_2))) ? 24576 : 1))), (((!var_12) & var_11))));
                            var_25 = (max(var_25, (1 & 14596289018186439724)));
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            arr_32 [i_3] [i_4 + 1] [2] [i_8] &= ((var_8 | ((var_2 ? (arr_13 [1] [i_4]) : 5768405406838762902))));
                            var_26 = 18114;
                            var_27 = -716771165;
                            var_28 &= (min((!18446744073709551601), (-24576 < -1)));
                        }
                    }
                }
            }
            var_29 = (max((arr_21 [i_3] [10] [i_3] [i_3]), var_7));
            var_30 = (max(((((arr_23 [i_4 - 3] [i_4 + 2] [i_4 + 3] [i_4 - 1] [i_4 + 3]) ? 51 : var_13))), ((var_9 ? var_7 : var_4))));
        }
    }
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        arr_35 [4] = ((((((((203 - (arr_34 [i_9])))) ? ((var_5 ? 61440 : var_13)) : ((18011 ? 61420 : 109))))) ? 18004 : (var_8 <= var_12)));
        var_31 |= (((((((2714913805694076997 & (arr_34 [i_9]))) | -24577))) ? 5768405406838762902 : -18202));
        var_32 &= var_4;
        var_33 = (max(var_1, 18010));

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                arr_41 [i_9] [i_10] [i_10] [i_9] = ((max(61440, (!18014398509481984))));
                var_34 = ((~(((arr_34 [i_10]) | var_0))));
                var_35 = (((17061479 ? 8879250921924482859 : (arr_33 [i_11] [i_10]))));
            }
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                var_36 = -2724399674975217651;
                var_37 -= (1 % 132);
                var_38 = (max(-1, ((min((!18014398509482012), ((7240834936048468449 ? var_12 : var_10)))))));
            }
            for (int i_13 = 1; i_13 < 21;i_13 += 1)
            {
                arr_48 [i_9] [i_9] [i_10] [i_13] = (((((var_7 ? (arr_38 [i_13] [i_13] [i_13 - 1]) : (arr_38 [i_13] [i_13 + 1] [i_13 + 1]))) + 2147483647)) << (((((((arr_38 [i_13] [i_13 + 1] [i_13 + 1]) - 18010)) + 40092)) - 10)));
                var_39 = 18013;
                var_40 |= (arr_45 [i_9] [13] [1] [i_9]);
                var_41 = var_7;
            }
            arr_49 [i_10] = 57;
            arr_50 [i_9] [i_9] = var_7;
        }
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            var_42 = (min(var_42, var_10));
            var_43 |= var_9;
        }
    }
    var_44 = var_7;
    #pragma endscop
}
