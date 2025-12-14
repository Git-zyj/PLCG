/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (min(var_17, 92));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_18 += 2343981186;
                            arr_13 [i_0] [1] [i_0] [i_3] [i_0] = 20436;
                            arr_14 [10] = ((!(arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1])));
                            var_19 = (max(var_19, (arr_2 [i_1] [i_1 - 1])));
                            arr_15 [i_1 - 1] [i_1 - 1] = ((arr_1 [i_3]) ? (((arr_5 [i_2] [i_2] [i_2]) ? var_8 : (arr_2 [i_3] [i_3]))) : -21743);
                        }
                        var_20 = (max(var_20, 9813249590565533359));
                        var_21 = (arr_6 [i_0]);

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_22 -= var_0;
                            var_23 = (((arr_5 [i_0] [i_0] [i_1 + 1]) ? (arr_5 [i_0] [i_1 + 1] [i_1 - 1]) : (arr_5 [i_0] [i_1 - 1] [i_1 + 1])));
                            arr_18 [i_3] [i_3] [i_2] [i_0] [i_0] = ((-20447 ? (arr_11 [i_1 - 1] [i_1 + 1] [i_1 + 1]) : var_9));
                        }
                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = var_1;
                            var_24 += (arr_12 [18] [i_6 - 1] [i_6] [i_6] [i_6]);
                            arr_23 [i_0] [i_0] [i_0] [i_3] [i_3] [i_6 - 1] = ((var_16 ? var_13 : (arr_7 [i_6 + 1])));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            arr_27 [i_0] [i_1 - 1] [i_0] [i_0] [i_7] = ((arr_2 [i_1 - 1] [i_1 + 1]) ? (arr_16 [i_1 - 1] [i_3] [8] [i_3] [i_3] [i_1]) : 1950986110);
                            arr_28 [i_3] [24] [i_3] = (arr_17 [i_0] [i_1 + 1] [i_1 + 1] [i_7]);
                        }
                        arr_29 [9] [22] [i_0] [i_0] [i_0] [i_3] = 21742;
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                    {
                        arr_32 [i_8] [i_8] [i_2] [12] = ((!(arr_30 [i_8] [i_2] [i_8])));
                        arr_33 [i_8] [i_2] [i_8] [i_1] [i_0] = (((arr_24 [i_2] [i_2] [2] [i_2] [i_2]) ? var_0 : var_12));
                        arr_34 [i_0] [i_0] [i_8] [1] = ((12347714216534963277 ? 245 : -21752));
                    }
                    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                    {
                        arr_38 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = (((!-20423) ^ var_15));
                        var_25 = -20447;
                    }
                    arr_39 [i_2] [i_0] = 198;
                    arr_40 [i_1 - 1] [i_1 - 1] [i_0] = (+(((arr_3 [i_1]) ? 119 : var_6)));
                }
                for (int i_10 = 1; i_10 < 22;i_10 += 1)
                {
                    arr_44 [i_1 - 1] = -var_11;
                    arr_45 [i_0] [i_1 + 1] [i_0] [i_0] = (max((!var_4), ((240 * (arr_12 [6] [i_10 + 2] [i_1 + 1] [i_10 + 2] [i_10])))));
                    arr_46 [1] [i_1] [i_1] [1] = (~(max((min(-20447, var_12)), (((-(arr_7 [i_1])))))));
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    arr_51 [i_11] [13] [i_11] = (max(((-21743 ? 222 : 4294967288)), ((min((arr_7 [i_0]), 20447)))));
                    arr_52 [i_0] [i_11] [i_11] [i_1] = (arr_2 [i_0] [i_11]);
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 23;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_26 = ((-(((!(arr_2 [i_1 + 1] [i_12 + 1]))))));
                                arr_59 [i_0] [i_0] [i_0] [i_0] [i_0] = (((((arr_31 [i_13 + 1] [i_13 + 1] [10] [i_12] [i_1 + 1]) >= 10)) ? (min((~var_15), (arr_47 [i_0] [i_0] [14]))) : (((min((arr_57 [i_1 - 1] [i_1 - 1] [i_1 - 1] [7] [i_12 + 1] [i_13 + 3]), 20447))))));
                                arr_60 [i_12] [16] [i_12] [17] [i_1 - 1] [i_0] = (max(4095, 1));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    arr_65 [0] [i_1] [i_1 + 1] [0] |= 1;
                    arr_66 [i_0] [0] [i_0] [12] = (((arr_35 [i_1 - 1] [i_1] [24]) == (arr_24 [i_0] [i_0] [i_1] [i_0] [i_14])));
                    var_27 = -var_9;
                    var_28 ^= (((arr_50 [i_1] [i_1] [i_1 - 1]) ? (arr_61 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]) : (arr_36 [i_14] [2] [i_1 - 1] [i_1 - 1] [2] [i_1 - 1])));
                    arr_67 [21] [21] = -65535;
                }
            }
        }
    }
    var_29 |= var_7;
    #pragma endscop
}
