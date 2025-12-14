/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_6));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((var_3 ? (((18328180905975262030 ? var_2 : var_6))) : ((-2 ? 2555064243 : var_9))));
        arr_3 [i_0 + 2] = (arr_1 [i_0] [1]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [3] = ((-(arr_6 [3])));
            var_11 = ((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0 + 1]));
            var_12 -= ((1739903052 * var_4) & (arr_4 [i_0] [0] [i_0]));
            var_13 = (min(var_13, (((((((arr_5 [2] [2]) ? (arr_4 [i_0] [i_0] [i_1]) : 2555064237))) ? var_5 : var_3)))));
        }
        var_14 &= (((var_8 & 1) / (arr_4 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 7;i_2 += 1) /* same iter space */
    {
        var_15 = 46840;

        for (int i_3 = 2; i_3 < 7;i_3 += 1)
        {
            var_16 = ((~(~var_6)));
            var_17 |= var_5;
        }
        arr_13 [i_2] [i_2] = (((arr_8 [i_2 + 1] [0]) & var_6));
        var_18 = (arr_5 [i_2] [i_2]);
        arr_14 [i_2] = ((~(arr_0 [i_2 - 1])));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 7;i_4 += 1) /* same iter space */
    {
        var_19 = (((arr_0 [i_4 + 2]) ? var_5 : (~18446744073709551615)));
        arr_17 [i_4 + 1] [i_4 + 3] = (((arr_12 [i_4 - 1]) ? (arr_12 [i_4 + 3]) : var_4));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_20 ^= (((((arr_19 [i_5]) ? (arr_19 [13]) : (arr_19 [i_5]))) ^ ((-((127 << (((arr_18 [i_5]) - 34168))))))));

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_23 [i_5] [8] [i_6] = 1;
            var_21 = (max(var_21, (((((~var_0) ? (arr_20 [i_5] [i_6]) : 0))))));
            var_22 &= var_1;
            var_23 = (max(var_23, (~1)));

            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                var_24 *= ((((+((max((arr_18 [i_7]), 1))))) / 32767));
                var_25 = (min(var_25, (arr_18 [i_6])));
                arr_26 [i_7] [i_6] [i_6] = (((arr_22 [i_5]) ? 1 : (((arr_19 [i_5]) % ((max((arr_18 [i_6]), 1)))))));

                /* vectorizable */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {

                    for (int i_9 = 3; i_9 < 16;i_9 += 1)
                    {
                        var_26 = (min(var_26, 26816));
                        arr_31 [i_7] [i_6] [6] [i_6] [i_6] = arr_27 [16] [13] [16] [i_9 - 2];
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                    {
                        arr_34 [i_5] [i_7] [i_7] [i_5] [i_10] [i_7] [i_5] = (0 != var_1);
                        arr_35 [i_7] [i_10] [i_10] [i_10] [i_7] [i_10] = (arr_33 [14] [i_6] [i_7] [14] [i_6]);
                        var_27 = ((1656433027 ^ (var_7 | 1)));
                        var_28 += -18446744073709551598;
                        arr_36 [1] [1] [i_7] [i_7] [i_7] = (var_3 & 241);
                    }
                    for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                    {
                        var_29 = 534773760;
                        var_30 = (~101);
                    }
                    var_31 = (((var_7 ^ 9) ? (arr_24 [11] [i_7]) : (arr_29 [i_5] [i_6] [i_7] [8] [i_5])));
                    var_32 = (max(var_32, (((~(var_1 & var_1))))));
                }
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    arr_41 [i_5] [i_7] [i_5] = var_0;
                    var_33 = ((!(~var_6)));
                }
                for (int i_13 = 1; i_13 < 17;i_13 += 1)
                {
                    var_34 = (min(var_34, ((min((((var_7 / (arr_33 [i_7] [16] [i_5] [i_13 + 1] [i_13])))), (max((arr_24 [i_13 - 1] [i_13 + 1]), 167)))))));
                    arr_44 [i_5] [i_5] &= 34075;
                    var_35 = ((var_9 ^ (max(1, 12524721249774943578))));
                    arr_45 [i_5] [i_6] [i_6] [i_7] [i_13] [i_7] = (((arr_43 [i_7] [i_6] [i_5] [i_6]) ? 1000086474 : var_1));
                }
            }
            for (int i_14 = 2; i_14 < 17;i_14 += 1)
            {
                var_36 = ((!((min((arr_19 [i_14 + 1]), (arr_38 [i_5] [i_14 - 2] [i_14 - 1] [i_14]))))));
                var_37 *= (((arr_22 [i_5]) + (!var_7)));
            }
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
        {
            arr_52 [i_5] = ((52401 != (4830319299917548766 <= -461264933)));
            arr_53 [i_5] = 104;
            var_38 = (min(var_38, 461264937));
            var_39 = (min(var_39, ((-1 ? (var_5 * -313) : 18446744073709551615))));
            var_40 = (1 != var_9);
        }
        for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
        {
            var_41 = (((!(9 & -11080))));
            var_42 += (0 || 101);
        }
        /* vectorizable */
        for (int i_17 = 1; i_17 < 17;i_17 += 1)
        {
            arr_60 [i_17] [i_17] = -var_6;
            var_43 = (min(var_43, (((~(2047 && 1177486100))))));
        }
    }
    #pragma endscop
}
