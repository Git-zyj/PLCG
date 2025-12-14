/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (min(var_16, 1));
        var_17 = (max(-11796, (arr_0 [i_0])));
        arr_2 [i_0] = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_18 ^= ((((arr_3 [i_1]) ? (arr_5 [0]) : var_9)));
        var_19 = (min(var_19, (arr_3 [i_1])));
        var_20 ^= ((-(arr_6 [10])));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_9 [i_2] = 22783;
        var_21 = (min(var_21, (((!((!((max((arr_7 [2] [i_2]), 6039))))))))));
        var_22 = (max(((~(arr_8 [i_2]))), (((6039 ? var_1 : 2)))));
        arr_10 [i_2] [i_2] = (!6025);
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_23 = (min(var_23, ((((((((max((arr_11 [i_3] [i_3]), -23410))) ? var_14 : ((((arr_11 [i_3] [i_3]) ^ (arr_11 [i_3] [i_3]))))))) ? var_15 : -696922123)))));
        arr_13 [i_3] = -592;
    }
    var_24 = var_5;

    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        var_25 = ((-((((max((arr_16 [i_4]), 112))) ? var_13 : (arr_3 [i_4 - 1])))));
        arr_17 [i_4] = ((((max(-467809547, ((115 ? 4 : (arr_14 [i_4] [i_4])))))) ? (arr_11 [i_4] [i_4]) : (arr_15 [i_4])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_21 [i_5] = ((-1289 ? (arr_8 [i_5]) : -1621343486));
        var_26 = ((-8427 ? 4466896556730170002 : -var_15));
        arr_22 [i_5] [i_5] = 1610612736;
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        arr_25 [12] |= (((!(((45861 ? (arr_12 [i_6]) : var_12))))) ? (arr_7 [8] [6]) : (~19674));
        var_27 ^= (min((arr_24 [10] [i_6]), (arr_23 [4] [4])));
        arr_26 [i_6] = (~var_15);
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {
        var_28 = ((24173 ? (arr_8 [6]) : 1610612736));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {

                    for (int i_10 = 3; i_10 < 9;i_10 += 1)
                    {
                        arr_37 [i_7] [i_8] = (arr_16 [i_7 + 2]);
                        var_29 = (((((-87 ? (arr_12 [i_10]) : (arr_20 [i_7])))) ? (((~(arr_7 [i_7] [i_8])))) : var_14));
                        var_30 = (max(var_30, (((!(arr_15 [4]))))));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            var_31 ^= (arr_32 [i_12] [i_11] [i_9]);
                            var_32 = ((var_13 ? (arr_3 [i_7 + 1]) : (arr_40 [i_7] [i_8] [i_9] [i_7])));
                            var_33 = (arr_24 [i_7] [i_9]);
                        }
                        for (int i_13 = 1; i_13 < 10;i_13 += 1)
                        {
                            var_34 = (max(var_34, 1));
                            var_35 -= 511;
                            var_36 = var_10;
                            var_37 = ((1 ? var_4 : (arr_42 [i_8] [i_8] [i_13 - 1] [i_11] [i_7] [i_8] [i_7 - 1])));
                        }
                        arr_48 [i_7] [i_9] [i_11] = (arr_14 [i_7] [i_7 - 1]);
                        var_38 = var_0;
                    }
                    var_39 = (((var_13 ? (arr_44 [i_7] [i_8] [i_8] [i_7] [i_9] [i_9]) : var_2)) | -var_13);

                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {

                        for (int i_15 = 0; i_15 < 11;i_15 += 1)
                        {
                            arr_54 [i_7 + 1] [i_9] [4] [i_7] = (arr_27 [i_9]);
                            var_40 ^= (((arr_34 [i_7 + 2] [1] [i_14]) << (((arr_28 [i_7 + 1] [i_8]) + 552501241))));
                        }
                        var_41 = var_10;
                        var_42 ^= 34547;
                        var_43 = (((arr_46 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 2] [i_7]) ? (arr_46 [i_7] [6] [i_7] [i_7 + 1] [i_14]) : 13));
                        var_44 = 511;
                    }
                }
            }
        }
        var_45 = (max(var_45, ((((var_13 >> var_9) ? (arr_32 [i_7 - 1] [i_7] [i_7 + 1]) : (arr_39 [4] [i_7 + 2] [6] [i_7]))))));
        arr_55 [i_7] = ((var_1 * (arr_18 [i_7])));
    }
    var_46 = var_4;
    #pragma endscop
}
