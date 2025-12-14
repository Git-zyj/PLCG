/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_3));
    var_11 += (min((((((((var_1 + 2147483647) << (15767 - 15767)))) != (min(141, -3764470378179922429))))), (max(((var_1 ? var_1 : var_4)), ((min(48, 133)))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [20] = ((var_0 / (arr_1 [i_0 + 1])));
        var_12 -= (252 % (arr_1 [i_0 - 1]));
        arr_3 [i_0 + 1] &= (arr_0 [i_0] [i_0]);
        arr_4 [13] = 26;
        arr_5 [13] [13] = (arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_13 = ((~((-1281888230 ? 12133594189935205541 : 252))));
        var_14 = (((36156401 & 6313149883774346075) ? (!1915707983327629566) : (((arr_6 [i_1] [i_1]) ? -1 : 68))));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_15 = ((12133594189935205541 & (((arr_11 [i_1] [i_2]) ? (arr_11 [i_1 + 1] [17]) : var_0))));
            var_16 = ((-118 / (((arr_6 [i_1 - 1] [i_1 - 1]) ? 118 : (arr_11 [7] [7])))));
            var_17 = (min(var_17, (((!(arr_7 [i_1 + 2]))))));
            var_18 = (min(var_18, 187));
        }
        var_19 = 15767;

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_20 = (arr_9 [i_1 + 1]);

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_21 = ((~(arr_15 [i_5])));
                            arr_25 [i_1] [i_1] [11] [i_1] [i_6] [i_1 + 2] [10] = arr_23 [i_1 - 1] [i_6];
                            var_22 = ((15166822369258919247 ? 15767 : 5));
                        }
                    }
                }
                var_23 = ((-114 ? (arr_12 [i_1 + 1]) : -36156404));
            }
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            var_24 = (~12651387687098172351);
            arr_28 [i_7] [i_1] [i_1] = ((~(((arr_12 [i_1]) ? (arr_15 [i_1]) : -19160))));
        }
    }
    var_25 -= var_2;
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 23;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 20;i_9 += 1)
        {
            {

                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    arr_37 [i_10] [i_9] [i_10] = (min(((-21454 ? 0 : 10591986013977104519)), ((-(arr_33 [i_9] [i_9 + 3] [i_9 + 1])))));
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 21;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 21;i_12 += 1)
                        {
                            {
                                arr_43 [i_9] [i_9] [i_9] [i_11] [i_12] = (max(109, 10));
                                var_26 = (max((min(((~(arr_40 [i_8] [4] [0] [i_11] [i_12]))), (~-19145))), ((((min(9, 4))) ? ((-(arr_40 [i_8] [i_8] [i_10] [i_10] [i_12 - 2]))) : (122 > var_9)))));
                                arr_44 [i_8] [i_9] [i_11] [i_10] [i_9 - 2] [i_9] [i_8] = (max((max(((max((arr_34 [i_9] [i_9] [i_9 + 4]), (arr_32 [i_9])))), (min(-79, 2638455763408826360)))), ((max((((arr_29 [i_8]) ? var_6 : (arr_32 [i_9]))), ((max(-10, 19144))))))));
                            }
                        }
                    }
                    arr_45 [i_8] [i_8] [i_9] = ((((min((arr_29 [i_8 - 2]), -25))) ? (max((arr_29 [i_8 + 1]), 9243477118486443682)) : (arr_29 [i_8 - 2])));
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    var_27 = (max(var_27, (((-4611686018427387904 + (((-(arr_30 [i_8] [i_8])))))))));
                    var_28 = 1327909814;
                }
                var_29 = -19160;
                var_30 = (max(254, 65535));
                arr_48 [i_9] = (max(1152919305583591424, -82));
            }
        }
    }
    #pragma endscop
}
