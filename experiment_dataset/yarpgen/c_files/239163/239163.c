/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_18 = ((6919192794572730268 ? 57492 : ((var_14 ? 52 : 9772128445523555720))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_19 += 203;
                        var_20 = ((-((9223372036854775807 ? (-32767 - 1) : -12))));
                        var_21 -= (((((arr_3 [i_1]) ? var_15 : 3646)) % 192));
                    }
                }
            }
            arr_12 [i_0] [i_0] [i_1] = (!var_17);
            var_22 -= ((!(arr_6 [i_0 + 2] [i_0] [i_0 + 1] [i_0])));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            arr_16 [i_0] [i_0] = ((9114164537914438247 ? (((!(-32767 - 1)))) : ((var_2 ? (arr_0 [16] [i_0]) : 4))));
            var_23 = 8577;
            var_24 *= ((var_5 ? var_3 : (!var_12)));
        }
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        arr_20 [i_5] = ((!((min(-65535, 1325100180904911393)))));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_25 = (min(var_25, (min((32767 ^ var_5), (~var_13)))));
                        arr_28 [i_5] [11] [7] [i_6] = (((!var_16) ? var_7 : ((((!(((51 >> (3072 - 3069))))))))));
                    }
                    for (int i_9 = 3; i_9 < 15;i_9 += 1)
                    {

                        for (int i_10 = 1; i_10 < 17;i_10 += 1)
                        {
                            var_26 = ((-((min((!var_0), (-1 <= var_17))))));
                            var_27 |= (((((max(3322384116741861616, 255))) && 1886582607058236603)));
                            arr_35 [i_5] [i_6] [i_7] [i_5] [i_10] = (((!(((-(arr_17 [i_5])))))) ? 1 : var_9);
                        }
                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 16;i_11 += 1)
                        {
                            arr_40 [i_5] [i_6] [i_7] [i_6] [i_6] = var_1;
                            var_28 = (((arr_10 [i_6 - 3] [i_6 - 3] [i_6] [i_6 + 1]) ? (arr_24 [i_6] [i_6 - 1] [i_11] [i_6]) : (~9)));
                        }
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            var_29 = (arr_34 [i_6]);
                            var_30 = ((32754 ? ((~((5 << (var_15 - 34051))))) : (!78)));
                        }
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            var_31 = (min(var_31, (((var_16 * (((!(var_0 - var_5)))))))));
                            var_32 = 7177282590117315807;
                            arr_45 [i_5] [i_7] [i_6] = ((~(((!(arr_37 [i_5 - 1] [i_5 + 1]))))));
                        }

                        for (int i_14 = 0; i_14 < 19;i_14 += 1)
                        {
                            var_33 = (min(27359, (((arr_44 [10] [i_9 + 1] [10] [10] [i_7]) - (arr_44 [i_9] [i_9 + 1] [i_7] [i_6] [i_6])))));
                            var_34 = (max(6982078380959152868, 17));
                            var_35 = (max(var_35, (min(-var_12, (((min(28, var_8))))))));
                        }
                    }
                    var_36 = min(((max((min(var_10, var_4)), -8578))), (((919502804227858495 | 621276153) ? (max(-1, 656334737)) : var_16)));
                }
            }
        }
        var_37 = ((!(~125)));
    }
    /* vectorizable */
    for (int i_15 = 2; i_15 < 20;i_15 += 1)
    {
        var_38 = (~(arr_15 [12] [22] [22]));
        arr_52 [7] [1] = 163;
    }
    for (int i_16 = 2; i_16 < 10;i_16 += 1)
    {
        var_39 = min(((((!-621276154) ? 42741 : ((var_8 ? var_15 : (arr_26 [2] [i_16] [18] [i_16])))))), (min((~9223372036854775807), (!var_13))));
        var_40 -= (-9223372036854775807 - 1);
    }
    var_41 = (min(var_41, var_1));
    var_42 ^= (36217 / 39970);
    var_43 = (var_7 | var_13);
    #pragma endscop
}
