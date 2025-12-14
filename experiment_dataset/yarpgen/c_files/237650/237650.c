/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (arr_1 [i_0] [i_0]);

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            arr_4 [i_1 - 2] [i_0] [i_0] = (arr_0 [i_0] [i_1]);

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {

                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    arr_10 [i_3] [i_3] = (arr_6 [i_3 - 1] [i_2] [i_1] [i_0]);
                    arr_11 [i_3 - 1] [i_0] [i_1 - 2] [i_0] [i_0] |= (((arr_1 [i_3 - 1] [i_3 + 1]) ? (arr_1 [i_3] [i_3 - 1]) : (arr_1 [i_3] [i_3 + 1])));
                    arr_12 [i_3] [i_1 - 1] [i_1] = (arr_6 [i_0] [i_1] [i_2] [i_3 - 1]);
                }
                arr_13 [i_2] [i_2] [i_2] [i_2] = (((arr_1 [i_1] [i_1 - 2]) ? (arr_7 [i_0] [i_0] [i_1] [i_1] [i_1]) : (((!(arr_2 [i_0] [i_1] [i_2]))))));
                var_15 = (min(var_15, (arr_5 [i_0] [i_1 - 2] [i_2] [i_2])));

                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    var_16 = var_3;

                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        var_17 += ((~(((arr_5 [i_0] [i_1 + 1] [i_0] [i_5]) >> (((arr_6 [11] [i_1] [i_1] [i_1]) - 9301321952795268436))))));
                        var_18 += -1479541050;
                    }
                    for (int i_6 = 4; i_6 < 19;i_6 += 1)
                    {
                        arr_23 [i_6 - 1] [i_1] [i_1] [i_2] [i_6] = (arr_22 [i_6] [i_2] [i_2] [i_4] [1]);
                        var_19 = (min(var_19, (arr_16 [i_6 - 4])));
                        arr_24 [i_0] [i_1 - 1] [i_2] [i_4 - 1] [i_6 - 4] |= (-(arr_16 [i_0]));
                        arr_25 [i_0] [i_4] [i_4] = (!var_4);
                    }
                }
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    arr_28 [i_7 - 1] [i_2] [i_1] [i_1] [i_0] [i_0] = (!var_8);
                    var_20 = (!var_0);
                    var_21 = (arr_7 [i_1 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7]);
                    var_22 = (max(var_22, ((((arr_18 [i_0] [i_0] [i_1 - 2] [i_1] [i_1 - 1] [i_2] [i_7 - 1]) ? (arr_8 [i_7 - 1] [i_2] [i_1 - 2] [i_0]) : (arr_8 [i_7 - 1] [i_2] [i_1] [i_0]))))));
                }
                var_23 = (!248);
            }
            arr_29 [i_0] = (arr_17 [8] [20]);
        }
        var_24 = (arr_21 [i_0] [i_0] [15] [i_0]);
    }

    for (int i_8 = 3; i_8 < 16;i_8 += 1)
    {
        var_25 = (min(var_25, -var_6));
        var_26 = (arr_3 [i_8 - 1] [i_8] [i_8]);
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 10;i_9 += 1) /* same iter space */
    {
        var_27 = (min(var_27, ((((arr_9 [i_9 + 1] [19] [i_9 + 3] [i_9] [i_9]) ? (arr_9 [i_9 - 2] [i_9] [i_9 + 3] [i_9] [i_9 - 3]) : var_0)))));

        for (int i_10 = 2; i_10 < 11;i_10 += 1)
        {

            for (int i_11 = 4; i_11 < 11;i_11 += 1)
            {
                var_28 |= ((!(!var_7)));
                var_29 = ((-(var_1 - var_7)));
                var_30 = -var_2;
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        {
                            arr_45 [i_9] [i_10] [i_11 + 1] [i_12] [i_11 + 1] = -var_11;
                            var_31 += -7;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 11;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 11;i_15 += 1)
                {
                    {
                        var_32 = (((arr_44 [i_9] [i_10 + 2] [i_9 - 3] [i_9] [11]) ? (arr_35 [i_10 + 1] [7]) : (arr_35 [i_10 + 1] [i_10 - 1])));

                        for (int i_16 = 0; i_16 < 13;i_16 += 1)
                        {
                            arr_57 [i_9] [i_14] [4] [i_10] [4] [i_16] [i_16] |= (((arr_5 [i_9 - 2] [i_14 - 1] [i_15 - 2] [i_16]) ? (arr_35 [i_9 - 1] [i_9]) : (arr_35 [i_15] [i_16])));
                            var_33 = (max(var_33, (arr_33 [i_14 + 2])));
                            var_34 += (~var_6);
                        }
                        var_35 = (max(var_35, ((~((var_12 | (arr_2 [i_9] [i_10 - 2] [i_15])))))));
                    }
                }
            }
        }
        for (int i_17 = 1; i_17 < 1;i_17 += 1)
        {
            arr_62 [i_17 - 1] = ((!(arr_53 [3] [i_17 - 1] [i_17 - 1] [i_9 + 2] [i_17 - 1])));
            var_36 += (arr_40 [i_17 - 1]);
        }
        for (int i_18 = 0; i_18 < 13;i_18 += 1)
        {
            arr_65 [i_18] |= var_0;
            var_37 = (arr_14 [i_9] [i_9] [i_18]);
            var_38 = (((arr_60 [i_9 + 1] [i_9 + 2] [i_9]) * (arr_60 [i_9 - 2] [i_9 - 2] [i_9 + 2])));
            var_39 |= (arr_56 [i_18] [i_18] [i_18] [2] [i_18]);
        }
        var_40 = arr_43 [i_9] [i_9];
    }
    /* vectorizable */
    for (int i_19 = 3; i_19 < 10;i_19 += 1) /* same iter space */
    {

        for (int i_20 = 3; i_20 < 10;i_20 += 1)
        {
            var_41 = ((var_0 ? 1660048989 : (arr_42 [i_20 + 2])));
            var_42 += (arr_37 [i_20 - 1]);
            /* LoopNest 3 */
            for (int i_21 = 2; i_21 < 12;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 12;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 13;i_23 += 1)
                    {
                        {
                            arr_80 [i_19] [i_20 + 2] [i_21 - 2] [i_20 + 2] [i_19] [i_20 - 3] = ((arr_26 [i_19] [i_19] [i_19] [i_19 - 3] [i_20] [i_20 - 2]) ? (arr_9 [i_21] [i_21] [i_21 + 1] [i_22] [i_22 + 1]) : (arr_26 [i_19] [i_19] [i_19] [i_19 - 1] [i_20 + 2] [i_20 + 1]));
                            var_43 += (((arr_36 [i_19]) * (arr_15 [i_21 - 1] [i_20 - 1] [i_19] [i_19 + 1])));
                            arr_81 [10] [i_20] [i_21] [i_22 + 1] [10] [i_23] |= (~var_1);
                        }
                    }
                }
            }
            var_44 = (arr_46 [i_20] [i_20 + 3] [i_20 + 3]);
        }
        for (int i_24 = 2; i_24 < 12;i_24 += 1)
        {
            arr_85 [i_19] [i_24] = (((!-4796) ? (arr_68 [i_19 + 2] [i_24 + 1]) : (arr_67 [i_19])));
            arr_86 [i_24] [i_19] [i_19 - 3] = arr_17 [i_19 + 1] [i_19 - 1];
        }
        var_45 = (max(var_45, 4773));
        var_46 += ((~(arr_34 [i_19 + 3])));
    }
    for (int i_25 = 0; i_25 < 14;i_25 += 1)
    {
        arr_90 [i_25] [i_25] |= ((!(((3703170345452156189 * ((((!(arr_89 [i_25] [i_25]))))))))));
        var_47 = (((!-4796) >= var_3));
    }
    #pragma endscop
}
