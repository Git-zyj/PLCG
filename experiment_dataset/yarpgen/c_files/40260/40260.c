/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_9 [7] [i_1] = ((~((((arr_6 [i_1 - 1]) == var_11)))));
                    var_19 = (min((((((min(1703465232, var_14))) && (~-7802)))), var_17));
                    var_20 = ((var_11 != (((min(var_0, 3))))));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_13 [i_1] [i_2] |= (min(-1, (((arr_1 [i_1 - 1]) ? (arr_1 [i_1 - 1]) : var_8))));
                        var_21 = (min(var_21, ((((!((max(var_4, 13363657440569878789)))))))));
                        var_22 = (!var_0);

                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            arr_16 [0] [i_1] [i_2] [i_3] [i_3] [9] = ((((~(var_18 % 2))) < ((max(var_0, var_12)))));
                            var_23 = (min(251, 370));
                        }
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_24 = (var_8 > -77);
                        arr_21 [i_0] [i_1] [i_2] [i_5] = (max(((-28 & (arr_0 [i_0]))), (((arr_0 [i_0]) & 1))));
                    }
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_25 = ((((min(1, (min(2, var_2))))) ? ((((min(var_12, 1))) ? (var_2 ^ var_7) : 1)) : -var_17));
                    arr_24 [i_0] [i_1] = 5191407984959731866;
                    var_26 += (max((((arr_15 [3] [i_1 - 1] [i_1 - 1] [9]) ? var_2 : var_0)), 0));
                    var_27 ^= ((((((-12675 ? 15 : -16)))) ? (min(((393596769827185079 ? var_8 : var_14)), -88)) : var_14));
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    arr_27 [i_0] [i_1 - 1] [i_1] [i_1 - 1] |= (max((arr_20 [i_0] [i_1 + 1] [i_1 + 1] [i_0]), var_14));
                    var_28 ^= arr_17 [14] [i_1] [16] [i_0] [i_0] [10];
                }
                var_29 = (min((arr_6 [i_0]), (((393596769827185072 << (var_15 - 614982596))))));
                arr_28 [i_0] [i_0] [2] = (min((12898625521795080131 || var_9), var_14));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 18;i_10 += 1)
                        {
                            {
                                arr_36 [i_0] [i_1] [i_8] [14] [i_0] [i_10] = (~-2147483623);
                                arr_37 [10] [i_1 - 1] [i_10 - 1] [i_9] [10] [i_9] [i_0] = -1441348618;
                            }
                        }
                    }
                }
                arr_38 [i_0] = ((min((arr_20 [14] [i_1] [i_1 + 1] [i_0]), 1)));
            }
        }
    }
    var_30 = (((-19901 | var_11) ? ((((!var_4) || 5750836838875605150))) : (~var_9)));

    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {

        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            var_31 -= ((((1 ? (arr_4 [i_11]) : 1))) / -var_15);
            var_32 = (min(var_32, ((max(((var_17 ? var_9 : 13835058055282163712)), 183325934)))));
            var_33 = (min(var_33, (((!((min((min(var_10, var_6)), (arr_29 [i_12] [i_12] [17] [i_12])))))))));

            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                var_34 ^= ((~(((min(var_0, var_7))))));
                arr_46 [i_11] [i_13] [i_13] [i_13] = (((var_1 / (arr_0 [i_11]))));
            }
            for (int i_14 = 1; i_14 < 12;i_14 += 1)
            {
                arr_49 [i_11] [i_14] [11] = (min(240, 13));

                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    arr_53 [i_14] = 1;
                    var_35 = (min(20, 65300));
                }
            }
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            var_36 = var_8;
            arr_56 [1] = var_1;
        }
        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {
            var_37 = (((((-(223465008563553062 > 32767)))) ? (arr_54 [i_11] [i_17] [1]) : (max(var_14, (arr_48 [i_17] [i_17] [i_11] [i_17])))));
            arr_60 [i_11] [i_11] [i_11] = (((((max(-19901, 259))))) || ((min((arr_11 [i_11] [i_11] [i_11] [i_11] [13]), (arr_7 [i_17])))));
        }
        arr_61 [i_11] = (~161);
        var_38 ^= (min((max(((min(var_2, var_11))), ((~(arr_6 [i_11]))))), ((((arr_43 [i_11] [i_11] [12]) && (!218))))));
        var_39 = (min((max(var_8, var_10)), ((max(1, 19877)))));
    }
    #pragma endscop
}
