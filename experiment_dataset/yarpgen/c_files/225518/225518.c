/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [1] |= var_13;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {
                        var_17 = ((var_12 ? (arr_8 [i_0] [i_1] [6] [i_0]) : var_9));
                        arr_12 [i_1] [i_1] = 1;

                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            var_18 = (~var_10);
                            var_19 = var_13;
                            var_20 = ((arr_0 [i_3 + 3]) ? (arr_0 [i_3 - 1]) : var_12);
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_19 [i_0] [i_5] |= (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [10] [10] [i_2 + 1] [i_0] [i_0] [i_2 + 1]) : (arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [9] [i_1 - 1])));
                            var_21 = (((arr_8 [7] [i_1] [i_1 - 1] [15]) ? (arr_8 [i_1] [i_1] [i_1 + 1] [i_1]) : (arr_8 [i_1] [i_1] [i_1 + 1] [i_1])));
                            var_22 = (max(var_22, (((-(arr_18 [i_0] [i_0] [i_2 + 2] [1] [i_1 + 1] [i_0] [9]))))));
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_22 [16] [16] [i_1] [16] [16] = (arr_13 [4] [4] [4] [4] [4]);
                            var_23 = (arr_9 [i_2] [i_2] [13] [i_1] [13] [i_2]);
                            var_24 = (arr_4 [i_3 + 2] [i_3 + 1]);
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_25 = var_7;
                            var_26 = (max(var_26, (arr_18 [4] [4] [4] [11] [4] [4] [4])));
                        }
                    }
                }
            }
        }
        var_27 = var_7;
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {

        /* vectorizable */
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            arr_33 [i_8] [i_8] [i_8] = (~var_8);
            arr_34 [i_8] [8] [8] = (~(arr_30 [i_8] [i_9]));
        }
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            var_28 = ((((-(arr_28 [18] [i_10]))) + ((~(min((arr_29 [0]), (arr_32 [i_8])))))));
            var_29 *= ((+((((arr_35 [i_8] [i_8]) / (arr_35 [10] [10]))))));
            arr_37 [18] [18] [18] = (arr_27 [i_8]);
        }
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            var_30 += (64506 | 430246231);
            var_31 = (arr_27 [i_8]);

            for (int i_12 = 2; i_12 < 19;i_12 += 1)
            {
                arr_43 [i_8] [i_8] [1] = (arr_31 [i_8] [i_8]);
                var_32 += arr_32 [i_8];
            }
            for (int i_13 = 3; i_13 < 21;i_13 += 1)
            {
                var_33 = (min(((((arr_27 [i_8]) ? (arr_42 [i_13 - 1] [i_13 - 2]) : ((-(arr_36 [i_13])))))), var_8));

                for (int i_14 = 2; i_14 < 21;i_14 += 1)
                {

                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        var_34 = (arr_45 [i_14 - 2]);
                        var_35 = (max(var_35, var_7));
                        var_36 = (((var_15 ? (arr_30 [i_8] [i_8]) : (arr_42 [i_13] [i_13]))));
                    }
                    for (int i_16 = 1; i_16 < 1;i_16 += 1)
                    {
                        var_37 = min((min((arr_42 [i_13] [8]), (max((arr_40 [i_11] [i_11]), var_5)))), (!430246231));
                        var_38 = (min(var_38, (arr_32 [i_14])));
                    }
                    var_39 *= 430246231;
                }
                for (int i_17 = 1; i_17 < 20;i_17 += 1)
                {
                    var_40 &= (arr_44 [i_11] [i_11] [i_11] [5]);

                    /* vectorizable */
                    for (int i_18 = 2; i_18 < 19;i_18 += 1)
                    {
                        arr_59 [i_13] [2] [i_13] [12] = (((arr_54 [i_13] [i_17 + 2] [i_17 + 1] [i_18 + 1]) ? (arr_46 [i_18] [i_18 - 2] [i_18 + 3] [i_18 + 3] [6] [i_18 + 3]) : (arr_46 [i_8] [i_8] [i_8] [i_8] [12] [i_8])));
                        arr_60 [i_8] [i_8] [i_8] [17] [i_13] = (arr_35 [i_8] [i_8]);
                    }
                }
                var_41 = (min(var_41, (arr_51 [i_8] [20])));
            }
        }
        var_42 = ((!((((((var_4 ? var_15 : (arr_41 [2] [2])))) ? (arr_39 [11] [4] [11]) : ((-(arr_51 [i_8] [i_8]))))))));
        arr_61 [i_8] = ((-(((arr_57 [i_8] [20] [i_8] [i_8] [i_8]) * (arr_38 [17] [17] [i_8])))));
        var_43 = var_0;
        var_44 = ((((!var_2) ? (arr_58 [i_8]) : var_13)) / ((var_0 + (min(var_6, (arr_52 [i_8] [i_8] [4] [i_8] [4] [i_8] [i_8]))))));
    }
    /* vectorizable */
    for (int i_19 = 2; i_19 < 13;i_19 += 1)
    {
        arr_64 [i_19] &= ((!(arr_41 [i_19] [i_19])));
        var_45 = ((((((arr_0 [i_19]) ? (arr_9 [i_19] [i_19] [i_19] [i_19] [12] [i_19]) : (arr_1 [i_19])))) ? ((~(arr_39 [7] [7] [17]))) : (((arr_36 [i_19]) ^ var_0))));
        var_46 = ((!(arr_55 [i_19 - 1] [i_19 - 1] [i_19 + 2] [i_19 + 1] [i_19 + 2])));

        for (int i_20 = 0; i_20 < 15;i_20 += 1)
        {

            for (int i_21 = 0; i_21 < 15;i_21 += 1)
            {
                var_47 *= (((arr_67 [i_19 - 1]) ? var_5 : var_2));
                /* LoopNest 2 */
                for (int i_22 = 1; i_22 < 14;i_22 += 1)
                {
                    for (int i_23 = 3; i_23 < 13;i_23 += 1)
                    {
                        {
                            arr_78 [i_23] = (!var_3);
                            var_48 *= var_0;
                        }
                    }
                }
            }
            var_49 = var_14;
        }
    }
    var_50 = (max(var_50, var_12));
    var_51 -= var_14;
    #pragma endscop
}
