/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((((((var_4 != var_8) ? (((var_10 ? var_16 : var_2))) : (~2504964080))) >> (var_0 - 514284171))))));
    var_21 += var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 *= -265708177;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_23 += ((!((((arr_0 [i_1]) / (arr_0 [i_1]))))));
            var_24 = (((arr_2 [i_0] [i_1]) ? (((~((~(arr_3 [i_0])))))) : (arr_4 [i_0])));
        }
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            var_25 = (arr_6 [i_0] [i_0] [i_0]);
            var_26 |= (-((max((arr_1 [2] [i_2]), (arr_1 [4] [i_2])))));

            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                var_27 = (arr_6 [i_0] [i_0] [i_3]);
                var_28 = var_13;

                /* vectorizable */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_29 ^= var_9;

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_30 = (arr_11 [i_0] [i_2 + 4] [i_3] [i_5] [i_5]);
                        var_31 = ((var_0 ? (arr_10 [i_2 + 4] [i_0] [i_3 + 1] [i_4] [i_3 - 1]) : (arr_9 [i_2 + 3] [1] [i_0])));
                        var_32 = (max(var_32, (arr_1 [i_5] [i_2])));
                    }
                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        var_33 = (((arr_14 [i_0] [i_2 + 1] [i_3 - 1] [i_6 + 1] [i_2 + 1]) ? (arr_12 [i_3] [i_3 - 1] [i_3] [i_3] [i_3 - 1] [i_0] [i_3]) : 3391));
                        var_34 = (((((16384 ? (arr_15 [i_0] [i_0] [i_0] [i_0] [4] [i_0] [i_0]) : 16376))) ? (~-1296382461) : var_15));
                    }
                }
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_35 = (1 % 16378);
                        var_36 = ((-(arr_2 [i_7 - 1] [i_3 + 1])));
                        var_37 ^= (arr_17 [i_0] [i_8] [i_0]);
                        var_38 = var_16;
                    }
                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        var_39 = var_2;
                        var_40 = (min(((+((var_1 ? (arr_7 [i_3]) : var_8)))), var_17));
                        var_41 = var_13;
                    }
                    var_42 = ((var_0 ? (((var_1 ? 7 : -17142))) : (arr_6 [i_0] [i_7] [i_2 + 4])));
                    var_43 -= ((+(max((~18446744073709551607), (arr_21 [i_7 - 1] [i_7 - 1] [i_7] [11] [i_7 - 1] [i_7])))));
                }
            }
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                var_44 = ((((max((((!(arr_4 [i_0])))), (arr_3 [i_0])))) ? ((-((var_0 ? 88 : 49151)))) : var_7));

                /* vectorizable */
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    var_45 = ((var_18 ? (arr_18 [i_0]) : -3419786603650480205));
                    var_46 -= ((765271485 ? 16380 : 32761));
                }
                var_47 = ((((((((arr_9 [i_0] [i_2] [i_0]) ? (arr_10 [i_0] [i_0] [i_10] [i_10] [i_10]) : 17127))) ? (((arr_26 [i_0] [i_2] [i_0] [i_2]) ? var_10 : var_14)) : ((((arr_2 [i_0] [1]) ? (arr_7 [i_2]) : var_16))))) / ((((((17127 ? (arr_18 [12]) : 1))) ? (arr_6 [i_0] [i_2 + 4] [i_0]) : 49159)))));
                var_48 = ((((arr_23 [i_0] [i_2] [i_10] [i_0] [i_10] [i_0]) ? (arr_16 [i_2 - 1] [i_2 - 1]) : 120)));
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                var_49 = var_9;
                var_50 = (min(var_50, (((var_13 - (var_1 + var_13))))));
            }
            var_51 = (max(((((var_10 ? 0 : var_2)))), (arr_11 [i_2] [i_2] [i_2 + 2] [i_2 + 3] [i_2 + 4])));
        }
        var_52 *= (((arr_24 [2] [i_0] [2]) * ((((var_14 ? (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_4)) + ((max((arr_19 [i_0] [5] [2] [i_0] [i_0]), var_0)))))));
    }
    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {
        var_53 &= min((~var_6), ((max(((~(arr_33 [14] [i_13]))), var_12))));
        var_54 &= ((((((arr_32 [i_13]) ? (arr_34 [i_13]) : (((arr_34 [i_13]) + 4166082662))))) ? (~var_0) : (((((var_2 ? 17153 : (arr_32 [i_13])))) ? (max((arr_33 [i_13] [17]), (arr_34 [13]))) : var_7))));
    }
    #pragma endscop
}
