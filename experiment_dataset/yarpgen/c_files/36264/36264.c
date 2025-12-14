/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_2;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_16 = (arr_0 [i_0] [i_0]);

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_0 + 1] [i_0] [i_0] = ((((arr_4 [i_1 - 1] [i_1] [i_0 + 1]) ? (arr_4 [i_1 + 2] [i_0 - 1] [i_0 - 1]) : 6710958126981719618)));
            var_17 = ((((((arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1]) || (arr_2 [i_0] [i_0 + 1] [i_0 + 1])))) != (((max(var_0, var_0))))));
            arr_7 [i_1] [i_1 + 1] [12] = (((~(min((arr_3 [i_0]), 4157519214)))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 11;i_4 += 1)
                {
                    {
                        var_18 = ((48799 - (arr_2 [i_0 + 1] [i_3] [i_4 + 2])));
                        var_19 &= ((+((((arr_8 [i_2] [i_3]) < var_12)))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 4; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {

                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            var_20 = 71;
                            arr_27 [i_0] [11] [i_0] [i_0] [11] = ((((arr_16 [3] [i_5] [i_5 - 4]) == (arr_1 [i_5 + 1] [i_2]))) ? (var_3 % -471) : (arr_0 [i_0 - 1] [i_0 + 1]));
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_21 = (max(var_21, (~var_9)));
                            var_22 &= ((var_14 ? (arr_16 [i_0] [i_2] [1]) : var_7));
                            var_23 = max((~-4294967295), ((((arr_15 [i_2] [i_2] [i_2] [i_2] [i_2]) ? -var_3 : ((max(var_7, -88)))))));
                        }
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_24 = (~((-((max(var_1, 1))))));
                            var_25 += (max((arr_28 [i_5 - 3] [i_0 - 1] [i_0 - 1] [i_0 + 1]), (arr_28 [i_5 - 3] [i_2] [i_0] [i_0 + 1])));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            arr_35 [i_0] [i_2] [i_5] [i_2] [i_2] [i_10] = ((var_6 ? (arr_10 [i_5 - 2]) : (arr_24 [i_0] [i_5 + 1] [i_5] [i_0 + 1] [i_0] [i_0])));
                            var_26 = (min(var_26, (((-(arr_23 [i_10] [i_6] [i_5] [i_0]))))));
                        }
                        var_27 &= (max(((((arr_8 [i_0 - 1] [i_0 - 1]) || (arr_8 [i_0 + 1] [i_0 - 1])))), (arr_8 [i_0 - 1] [i_0 - 1])));
                        var_28 = ((~((-var_14 - (726713146128348418 - 378829848819861505)))));
                    }
                }
            }
            var_29 = (max(var_29, (((-(max((arr_1 [i_0 + 1] [i_0 - 1]), (arr_1 [i_0 + 1] [i_0 - 1]))))))));
        }
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            arr_38 [i_11] [10] [i_11] = -29858;
            arr_39 [i_0 + 1] [i_11] [i_11] = var_0;
            var_30 = (!var_3);
        }
        var_31 &= (arr_13 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                {
                    var_32 = (max(var_32, ((var_5 ? (arr_36 [i_0] [4]) : (arr_19 [i_0 + 1] [i_0 - 1] [i_13])))));
                    var_33 = (max(((((arr_19 [i_12] [i_12] [i_12]) > (arr_19 [i_13] [i_0] [i_0])))), (((arr_19 [i_0 - 1] [i_12] [i_13]) ? (arr_11 [i_0] [i_12] [i_13]) : var_13))));

                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {

                        for (int i_15 = 0; i_15 < 13;i_15 += 1)
                        {
                            var_34 = var_12;
                            var_35 = (max(var_35, (((((~(arr_13 [i_0 + 1] [i_0 + 1])))) || ((((arr_13 [11] [i_0 + 1]) ? (arr_13 [i_13] [i_0 - 1]) : (arr_13 [i_12] [i_0 + 1]))))))));
                            var_36 = ((((((((arr_12 [i_15] [i_15] [i_15] [i_15]) == 1)) ? ((max((arr_43 [i_0 - 1] [i_12] [i_13] [i_14]), (arr_20 [i_13])))) : (arr_20 [i_12])))) ? 0 : 12542554261161408351));
                        }
                        for (int i_16 = 1; i_16 < 11;i_16 += 1)
                        {
                            var_37 = (arr_46 [i_0]);
                            var_38 = ((-(arr_48 [i_13] [i_13] [i_13] [i_14] [1])));
                            var_39 = 18803;
                        }
                        arr_52 [i_0 + 1] [11] [i_12] [12] [i_14] = var_3;
                        var_40 = (min(1627208735, -75));
                        arr_53 [i_0 - 1] [i_12] [i_0 - 1] [12] [i_0 - 1] [i_13] = (!var_5);
                    }
                    var_41 -= (max(((((max((arr_3 [i_0]), (arr_32 [i_0] [i_12] [i_12] [i_12] [i_12])))) == (max(var_1, var_12)))), (((arr_4 [i_12] [i_12] [i_12]) < (arr_47 [i_0 + 1] [i_0 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
