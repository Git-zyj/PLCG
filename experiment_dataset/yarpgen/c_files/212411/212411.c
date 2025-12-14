/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [12] [i_2] = (max(((127 ? (arr_6 [i_0] [i_1]) : 150)), (61 != 140)));
                    arr_8 [i_2] [i_1] = (((arr_2 [i_0]) * (232 == 44)));
                    var_21 = (((+((min((arr_4 [i_2]), (arr_0 [12] [12])))))));
                }
            }
        }

        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_22 = (((arr_4 [i_0]) ? (arr_4 [i_3]) : (arr_4 [i_0])));

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                arr_14 [i_0] [i_3] [i_3] [i_4] = 223;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_23 = (((89 < 236) ? (arr_19 [i_4] [i_4] [i_4] [i_4] [i_4]) : (arr_11 [i_3])));
                            var_24 &= ((10 ? ((81 << (((-11064 + 11094) - 16)))) : (((arr_11 [i_3]) / (arr_15 [i_3] [i_3] [i_5] [i_3])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_25 = (min(var_25, (((~(254 > -10612))))));
                            arr_26 [i_0] [i_7] [5] [i_7] [i_7] [6] [i_0] = (!32);
                            arr_27 [i_7] [i_7] = 31608;
                            var_26 += (((arr_16 [i_0] [i_3] [i_3] [i_4] [i_7] [i_7]) & (!var_11)));
                            var_27 = (min(var_27, var_17));
                        }
                    }
                }

                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    var_28 = -10616;
                    var_29 = (!0);
                    var_30 = (89 & 255);
                }
                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {
                    arr_32 [i_0] = (arr_10 [i_4]);
                    arr_33 [i_0] [i_3] [12] = ((21 ? -10612 : (arr_20 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10] [i_10 - 2])));
                    var_31 ^= 7;
                }
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        arr_39 [i_3] [i_3] [i_4] [i_11] [i_4] = (~-10767);
                        var_32 -= ((41 ? ((179 ? (arr_15 [i_3] [i_4] [i_11] [i_3]) : (arr_10 [i_0]))) : ((165 >> (((arr_3 [i_12] [i_4] [i_12]) - 47))))));
                        var_33 = 93;
                    }
                    for (int i_13 = 2; i_13 < 13;i_13 += 1)
                    {
                        var_34 = (max(var_34, 0));
                        var_35 = 167;
                    }
                    for (int i_14 = 2; i_14 < 13;i_14 += 1)
                    {
                        arr_45 [i_0] = -39;
                        var_36 = (((arr_30 [i_0] [i_3] [i_14 - 2] [i_3]) ? (arr_38 [i_14] [7] [7] [i_14] [i_14]) : -379));
                        arr_46 [i_14] [i_14] [i_14 + 1] = (((((var_1 ? (arr_37 [i_0] [i_0] [i_4] [3]) : 64))) ? (arr_34 [i_14 - 1]) : (arr_23 [i_3] [i_3] [i_3] [i_3])));
                        var_37 = ((((21750 ? 32746 : -5814)) < (arr_40 [2] [i_3] [i_3] [i_3] [i_3] [i_14])));
                    }
                    var_38 ^= ((!(arr_24 [i_0] [13] [i_4] [13])));
                    arr_47 [i_0] [i_0] [i_4] [i_11] = (arr_10 [i_0]);
                    arr_48 [i_11] = -59;
                }
            }
        }
        var_39 += arr_17 [i_0] [3] [i_0];
        var_40 += ((max(29556, (arr_9 [i_0] [i_0] [i_0]))));
        var_41 = (min(var_41, var_7));
    }
    for (int i_15 = 0; i_15 < 13;i_15 += 1)
    {
        var_42 = (max(((~(187 != var_1))), (((~255) ^ -14521))));
        var_43 = (max(var_43, (((~(min((((arr_44 [i_15] [i_15] [i_15] [7] [i_15]) * 15)), ((~(arr_28 [i_15] [i_15] [i_15] [i_15]))))))))));
    }
    var_44 = var_12;
    #pragma endscop
}
