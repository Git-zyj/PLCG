/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            var_13 = (min(var_13, ((((arr_0 [i_0]) || var_5)))));
            arr_4 [i_0] [i_0] = ((~(!32753)));
            arr_5 [i_0] = (((((-6750 ? var_12 : 255))) && (var_6 % var_6)));
        }
        arr_6 [i_0] [i_0] = ((var_0 - (!var_9)));
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_14 = ((-var_8 & (min(((var_4 ? var_12 : -32753)), (-32759 != 121)))));
            var_15 = ((((var_8 ? (arr_8 [i_2]) : (arr_8 [i_2]))) - (var_2 >= var_6)));
            arr_14 [i_2] = -6752;
        }
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        arr_21 [i_2] [6] [i_5] [i_2] [i_6] = (min((arr_11 [i_2] [i_4 + 2] [i_5]), (min(((var_11 ? var_8 : -32767)), ((19 ? (arr_1 [i_2 - 1] [i_2]) : var_3))))));

                        for (int i_7 = 3; i_7 < 11;i_7 += 1)
                        {
                            arr_25 [i_2] [i_2] [i_5] [i_6] = 108;
                            arr_26 [i_2] [12] [i_2] [i_7] [i_7] [i_5] = min(253, (arr_10 [i_6] [i_7]));
                            var_16 = ((~((max((min(18991, (arr_1 [12] [i_6]))), ((min(250, var_6))))))));
                            arr_27 [i_2] [i_4 + 2] [i_2] = (((((114 ? ((var_3 ? var_6 : var_9)) : var_1))) ? ((max((arr_17 [i_2] [i_7 + 2] [i_7]), (arr_16 [i_2])))) : (var_12 & var_1)));
                            var_17 = (arr_11 [i_2 - 1] [i_7 - 3] [i_4 - 1]);
                        }
                        var_18 = (min(var_18, var_12));
                    }
                }
            }
            arr_28 [i_2] [i_2] = ((!((max(var_3, var_10)))));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        {
                            arr_37 [i_10] [i_4] [i_8] [i_2] = ((((min(((max((arr_23 [i_2 + 1] [i_2] [i_2 - 1] [i_2] [i_2]), (arr_17 [i_2] [i_4] [i_2])))), (var_8 * 11)))) && -12587));
                            var_19 += ((+(((arr_2 [i_9] [6] [i_8]) & (((arr_12 [i_2] [i_8] [i_9]) ? var_5 : var_4))))));
                            var_20 = ((((min((min((arr_33 [i_2] [i_4] [8] [i_2]), var_10)), 242))) * ((((var_0 * var_2) < ((max(var_5, 32756))))))));
                            arr_38 [i_2] = ((((var_10 ? (arr_10 [i_2] [1]) : (arr_10 [i_2 - 1] [i_4]))) * ((max(2044, -1)))));
                        }
                    }
                }
            }
            var_21 = ((119 ? (min((((arr_34 [i_4] [i_2] [i_4] [4] [i_2]) & var_7)), ((1064 ? (arr_12 [i_2 + 1] [i_2 - 1] [8]) : var_4)))) : ((min(27, (!-32766))))));
            arr_39 [i_2] [i_2] [i_2] = ((~((((!var_0) && ((min((arr_17 [i_2] [i_2] [10]), 185))))))));
        }
        arr_40 [i_2] [i_2] = (((arr_24 [i_2 + 1] [i_2 + 1]) > ((max(var_8, (arr_32 [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
        var_22 = (var_7 & var_1);
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {

        /* vectorizable */
        for (int i_12 = 3; i_12 < 24;i_12 += 1)
        {
            arr_45 [i_12] [i_11] [8] = ((202 ? 7962 : (~var_0)));
            var_23 = (((arr_43 [i_11] [i_12 - 1]) ? (arr_44 [i_12] [i_12 - 3] [14]) : var_1));

            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                var_24 = (var_11 && 12);
                arr_48 [i_12] = ((var_2 - ((var_6 ? 128 : var_1))));
                arr_49 [i_11] [i_13] [i_12] [17] = (((arr_44 [i_11] [i_12 - 3] [i_13]) ? var_11 : var_10));
                arr_50 [i_12] [i_13] [i_13] [i_13] = (((~140) / ((var_7 ? 238 : var_8))));
                arr_51 [i_11] [i_12] [i_12] [i_12] = (((arr_41 [i_12 - 1]) ? (arr_46 [i_13] [i_12] [i_12 - 3] [i_12 + 1]) : (!var_8)));
            }
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                var_25 = (((arr_43 [i_12 - 1] [i_12 - 1]) > (~10079)));

                for (int i_15 = 2; i_15 < 22;i_15 += 1)
                {
                    var_26 = (((arr_46 [i_12] [i_14] [i_15] [i_15 + 1]) ? var_9 : (arr_52 [i_14] [i_15] [i_15] [i_15 - 1])));
                    arr_58 [i_12] [i_11] [i_14] [i_12] = ((var_11 ? var_1 : (arr_55 [i_15 + 1] [i_15])));
                    arr_59 [i_12] = (((arr_56 [i_15 + 2]) ? var_8 : var_5));
                    var_27 = var_0;
                }
            }
        }

        for (int i_16 = 3; i_16 < 24;i_16 += 1)
        {
            var_28 ^= (((((+(((arr_44 [i_11] [i_11] [i_16]) - var_12))))) ? (((!var_11) ? ((-(arr_44 [i_11] [i_16] [10]))) : ((var_7 ? 118 : var_2)))) : (((-19143 + 32761) ? var_8 : ((max(var_12, 235)))))));
            var_29 = (min(((~(-31868 - var_3))), (!-var_8)));
        }
    }
    var_30 = ((max(((97 ? -1908 : 32743), (var_11 - var_2)))));
    #pragma endscop
}
