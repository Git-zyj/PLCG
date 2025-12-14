/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_11 = ((((arr_1 [i_0]) != (max((arr_1 [i_0 - 3]), (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        arr_8 [i_0 - 3] [i_0] [i_1 - 2] [i_2] [i_3] = var_5;

                        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                        {
                            var_12 = (max(var_12, (arr_7 [i_2] [i_2])));
                            arr_11 [i_0] [i_4] [i_2] [14] [i_4] [i_0] [14] = ((arr_3 [i_0] [i_0] [i_0]) ? (((var_8 ? (arr_7 [i_1] [i_1 - 3]) : (arr_4 [i_1 - 3] [i_1 - 3] [i_1 - 3])))) : (arr_5 [i_0] [i_1] [i_2] [i_3]));
                            var_13 = ((((!(arr_0 [i_3]))) ? ((((arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_2] [i_3] [i_0 - 2]) || (arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [16])))) : (arr_2 [i_0])));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            var_14 = (((~var_4) / (arr_13 [8] [7] [i_2])));
                            arr_15 [i_0] = ((((arr_12 [i_0] [i_0]) ? (arr_12 [0] [i_2]) : (arr_13 [i_0] [i_0] [i_0]))));
                            var_15 = (min(var_15, var_8));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_16 = ((-((~(arr_7 [18] [i_0])))));
                            var_17 = var_6;
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_7] [1] [i_2] [1] [1] = ((((arr_18 [1] [11] [i_2] [i_1 - 3] [i_0]) != (arr_12 [i_0] [i_0]))));
                            var_18 = (max(var_18, var_6));
                        }
                        var_19 = (min(var_19, (arr_0 [i_2])));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        var_20 = (max(var_20, (((((((arr_1 [i_1]) ? ((((arr_4 [i_1 - 3] [i_2] [i_8]) ? var_10 : var_10))) : var_6))) ? (min(var_5, (arr_13 [i_2] [i_1] [i_0 - 2]))) : (((max((arr_22 [i_0 + 3] [i_2] [i_2] [i_1] [i_1] [i_0 + 3]), (max(117, 0)))))))))));

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_21 = (min(var_21, (arr_19 [i_9] [i_8] [i_0] [10] [i_0])));
                            var_22 = (max(var_22, (!0)));
                            var_23 = (((((var_10 & (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0]))))));
                            arr_29 [i_0] [i_1] [i_2] [i_8] [i_2] [5] [8] = ((+((~(((arr_14 [i_0]) + (arr_9 [i_0] [i_0] [i_1] [i_2] [i_8] [i_9])))))));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_24 = arr_26 [i_0];
                            var_25 = ((~(arr_2 [i_1])));
                            var_26 = (min(var_26, (!var_8)));
                            arr_33 [i_0] [12] [i_0] [i_0 - 3] [i_0] = (arr_9 [i_0] [i_0 + 3] [i_0 + 1] [i_0] [i_0] [i_0 + 3]);
                        }
                    }
                    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                    {
                        var_27 = (max(var_27, (((((((-(arr_19 [i_0] [i_2] [i_1] [i_0] [i_0]))))) ? (((arr_2 [i_11]) ? (arr_9 [i_0] [i_0 + 1] [i_1] [i_2] [i_2] [i_1]) : (((-(arr_3 [i_0] [i_0 - 1] [i_0])))))) : var_5)))));
                        arr_37 [i_0] [i_0 + 2] [i_0] [i_0 - 1] [i_0 + 2] [i_0 - 1] = (((arr_25 [i_0]) >> ((((~(6201023534620146418 || 117))) + 8))));
                        var_28 = (min(var_28, ((min((max((max((arr_24 [i_0] [13] [i_0 - 2] [i_0] [i_0] [i_0]), (arr_27 [i_0] [i_1] [i_1] [i_0] [i_0] [i_11] [i_0]))), (arr_20 [i_0] [i_0] [i_0] [i_0 - 3] [i_0]))), -var_9)))));
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {

                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            var_29 = (max((((arr_16 [i_0] [i_0] [i_0] [i_0]) | (arr_32 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 + 3] [i_0 - 3] [i_0 + 3]))), (min((min((arr_19 [i_1 + 1] [i_12] [i_2] [i_1 + 1] [i_0 - 1]), (arr_36 [i_0] [i_0]))), var_8))));
                            arr_42 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0] = (!((min((arr_26 [i_13]), (((arr_26 [i_0 + 1]) + (arr_26 [i_0 - 1])))))));
                        }
                        var_30 = (((arr_17 [i_0] [i_0 - 3] [i_0] [6] [i_2] [i_0]) ? (max((((arr_27 [i_0] [2] [i_0 - 3] [i_0] [i_0] [i_0] [i_0 - 1]) ? (arr_35 [i_0 - 3] [i_0] [i_0] [17]) : (arr_12 [i_0] [i_0]))), (arr_4 [i_0 - 1] [i_0] [i_0 - 1]))) : (1 != 58720256)));

                        for (int i_14 = 0; i_14 < 19;i_14 += 1)
                        {
                            var_31 = ((-((~(arr_35 [i_14] [i_2] [i_1] [i_0])))));
                            arr_46 [i_0] [i_0] [i_2] [i_12] [i_2] = (((((-var_8 ? var_2 : var_3))) ? ((max(((((arr_27 [i_0 - 2] [i_1 + 1] [i_1 + 1] [i_2] [i_12] [i_12] [i_14]) || var_4))), (arr_22 [i_0] [i_0] [i_2] [i_0] [i_14] [i_14])))) : var_7));
                            var_32 = var_3;
                        }
                        var_33 = ((~(min((min(0, 8825878709407696813)), ((var_7 ? (arr_26 [17]) : (arr_13 [i_1] [i_2] [i_2])))))));

                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_34 = (max(var_34, ((((arr_43 [i_0 - 2] [i_0] [i_0] [i_0 - 1] [i_0]) ? var_4 : (arr_20 [i_15] [3] [i_2] [i_0 + 3] [i_0 + 3]))))));
                            arr_49 [i_0] [i_0] [i_0] [8] [i_0 - 2] = arr_6 [i_0 + 1] [i_1] [i_1] [i_1];
                        }
                    }
                    arr_50 [i_1] [i_1] [i_1] [i_1] = ((((max((arr_31 [i_0] [i_0] [i_1 - 2] [18] [18] [i_0]), var_6))) || ((((!-18871) ? (arr_14 [i_2]) : (~var_5))))));
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 10;i_16 += 1)
    {
        var_35 = (min((((((~(arr_39 [i_16] [i_16] [i_16] [i_16] [i_16])))) ? ((~(arr_43 [i_16] [i_16] [i_16] [i_16] [i_16]))) : (((arr_39 [i_16] [i_16] [i_16] [i_16] [i_16]) ^ (arr_21 [i_16] [10] [i_16] [i_16] [i_16] [1] [i_16]))))), (-32767 - 1)));
        var_36 = (((165 / (arr_35 [1] [1] [1] [i_16]))));
        var_37 = (255 | 65535);
        arr_53 [i_16] = ((var_3 ? var_6 : ((((var_10 || ((min(8825878709407696816, 244)))))))));
    }
    var_38 = (((((max(var_1, var_7))) ? var_10 : var_4)));
    #pragma endscop
}
