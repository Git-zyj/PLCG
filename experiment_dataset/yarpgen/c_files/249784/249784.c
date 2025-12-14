/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_16;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((~((((arr_1 [i_0] [i_0]) && (arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] = (max(var_5, (~54284)));
        var_18 *= (((((arr_0 [6] [i_0 - 1]) >> (((arr_0 [10] [i_0 - 1]) - 10042422686118270078)))) >> ((((var_4 | (arr_0 [0] [i_0 + 2]))) - 18446744073692731009))));
        var_19 &= (min(var_6, (arr_0 [10] [10])));

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_20 = ((((-(max(1143663461, 260096)))) + (var_9 + var_6)));
                            var_21 = (min((min(((-32738 & (arr_12 [i_1] [i_0]))), 9)), 1256994427));
                            var_22 = (((((var_3 ? ((max((arr_8 [i_0]), (arr_11 [i_0] [i_1] [i_3] [i_4])))) : (!var_16)))) ? 234 : ((~((-(arr_1 [i_0] [i_0])))))));
                            var_23 *= 11258;
                        }
                    }
                }
            }
            var_24 = (max(var_24, ((((arr_9 [i_0] [i_0] [i_0] [i_1]) ^ ((+((var_9 ? (arr_10 [i_0 - 1] [i_1]) : var_13)))))))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_19 [12] [i_5] &= (~-4199297629036932041);
            var_25 += 4199297629036932041;
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 12;i_7 += 1)
            {
                var_26 = ((~(((!(((~(arr_4 [i_0] [i_6])))))))));

                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    arr_27 [i_0] [i_0] [i_0] [i_0] [i_7] [i_8] = (((((max(-5096644082909875202, var_14)) + (((9 * (arr_8 [i_0])))))) >> (var_5 + 7902667260520372951)));
                    var_27 = (((~((215 ? -26537 : (arr_20 [i_6]))))));
                    var_28 = var_0;
                }
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    var_29 -= ((((246 ? (((-(arr_24 [i_0] [i_0] [i_0])))) : (max(var_12, (arr_12 [i_0] [10]))))) / var_13));
                    var_30 = (((arr_21 [i_6]) <= var_2));
                }
                for (int i_10 = 2; i_10 < 12;i_10 += 1)
                {
                    var_31 = 5877143809464894901;
                    arr_33 [i_0] [i_0] [i_6] [i_0] [i_10] = var_2;
                }
            }
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                var_32 -= ((+(min((arr_6 [i_0 + 2]), 1))));
                arr_37 [i_0] = (((((var_15 | (max((arr_1 [i_0] [i_0]), var_7))))) ? ((min(19765, ((~(arr_15 [i_11] [i_6] [i_6] [i_0] [i_0] [i_0])))))) : (((min(var_9, (arr_28 [i_0] [i_6] [i_0] [i_11] [i_0]))) | ((((arr_22 [i_0] [i_0] [i_0] [i_0]) - (arr_4 [i_0] [i_0]))))))));
                var_33 += ((((((var_10 ? var_13 : var_2))) ? (0 + 1410551189) : ((-30734 ? var_10 : var_14)))));
            }
            arr_38 [i_0] = (arr_14 [i_0] [i_0]);
        }
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            arr_42 [i_0] = (-86 != var_3);
            var_34 = ((((!((((arr_36 [i_0] [i_12] [i_0]) + var_10))))) ? (((4199297629036932065 & (arr_21 [i_0])))) : (arr_10 [i_0] [i_0])));

            /* vectorizable */
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    for (int i_15 = 4; i_15 < 12;i_15 += 1)
                    {
                        {
                            var_35 = ((-var_13 ? (arr_47 [i_12] [i_15 - 4] [i_15 - 4] [i_15] [i_15] [i_15]) : 242));
                            var_36 -= (((40472 ? -30761 : 1)));
                            var_37 = -1;
                            var_38 = ((-98 ? (~var_7) : 32759));
                        }
                    }
                }
                var_39 = (min(var_39, (((-1 ? 531958031 : var_16)))));
            }
            arr_53 [i_0] [i_12] = (max((max(var_3, (arr_9 [i_0] [i_0 - 1] [i_0] [i_0]))), (arr_50 [i_12] [i_12] [i_0] [i_0] [i_0] [i_0])));
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 13;i_16 += 1)
    {
        arr_56 [i_16] = ((var_0 | (arr_4 [i_16] [i_16])));
        var_40 += (((arr_0 [6] [6]) != (~var_4)));
    }
    var_41 = (min(var_11, 126));
    #pragma endscop
}
