/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_19 = (min(var_19, ((((arr_4 [i_0] [i_1]) ? (arr_0 [i_1]) : (((var_2 ? (arr_9 [i_0] [i_1] [i_2]) : (arr_9 [i_0] [i_0] [i_2])))))))));
                        var_20 = (max(var_20, ((((arr_2 [i_1] [i_1]) ? (~var_15) : (((arr_4 [i_1] [i_3]) & 0)))))));
                        arr_12 [i_2] = (arr_5 [i_0]);
                        arr_13 [i_2] = (arr_9 [i_0] [i_2] [i_3]);
                    }
                }
            }
        }
        arr_14 [i_0] = (arr_10 [i_0] [i_0] [i_0] [i_0]);
        arr_15 [i_0] = (((arr_5 [i_0]) ? (arr_5 [i_0]) : (arr_5 [i_0])));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 19;i_6 += 1)
                {
                    {
                        arr_24 [i_0] [i_0] [i_4] [i_5] [i_6 + 1] &= (arr_23 [i_4 - 1] [i_6 + 2] [i_6] [i_6 + 2]);
                        var_21 = ((-(arr_20 [i_4 + 1] [i_4 + 1] [i_4 - 1])));

                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            arr_29 [i_0] [i_0] = (((arr_10 [i_4 - 1] [i_4 - 1] [i_6 - 3] [i_6 - 2]) | (arr_11 [i_0] [i_6 - 3])));
                            var_22 = (((arr_27 [i_4] [i_4 + 1] [i_4 + 1]) / (arr_27 [i_0] [i_0] [i_4 + 1])));
                            var_23 = ((~(arr_27 [i_4 - 1] [i_4 - 1] [i_6 - 1])));
                            arr_30 [i_0] [6] [i_5] [i_6 - 3] [i_7] [i_7] &= ((-(arr_20 [i_4 + 1] [i_5] [i_5])));
                        }
                    }
                }
            }
        }
    }

    for (int i_8 = 1; i_8 < 10;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    {
                        arr_41 [i_8] = (((min((((!(arr_25 [i_9] [i_9] [i_9] [i_11])))), (max(var_1, var_12)))) * ((((-127 - 1) * ((min((arr_31 [7] [7]), (arr_3 [i_9])))))))));
                        arr_42 [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1] [i_10] [i_11] = ((+(max((31 + 255), ((-(arr_21 [i_8] [i_9] [i_8] [i_10] [i_11])))))));
                        var_24 = (max(var_24, ((((arr_25 [i_8] [i_9] [i_8] [i_8]) ? (arr_22 [i_8] [i_10]) : ((((var_6 / (arr_26 [i_8 + 1] [i_8 + 1] [i_9] [i_10] [i_8 + 1] [i_11] [i_8 + 1]))) * (arr_17 [i_8 + 1] [i_8 + 1]))))))));
                    }
                }
            }
            var_25 = (min(var_25, ((max((~9172), ((((min((arr_18 [i_8] [0] [i_9] [i_9]), -9176))) ? (max(var_10, (arr_38 [i_8 + 2] [i_8]))) : -var_9)))))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 11;i_13 += 1)
                {
                    {
                        var_26 = ((!((max((arr_35 [i_8 - 1] [i_13 - 1]), (arr_35 [i_8 - 1] [i_13 - 1]))))));
                        var_27 |= ((var_14 & (max((arr_43 [i_8 - 1] [i_13 - 1] [i_12] [i_13]), (arr_43 [i_8 - 1] [i_13 - 1] [i_12] [i_13])))));
                        arr_48 [i_9] [i_9] [i_9] [i_9] [i_8] = (max((arr_19 [i_8 + 2] [i_8 + 2] [i_13 - 2] [i_13]), (min(var_4, (arr_19 [i_8 + 2] [i_12] [i_13 - 2] [i_8 + 2])))));
                    }
                }
            }
            arr_49 [i_8] [i_8] [i_8] = (arr_2 [i_8] [i_9]);
        }
        for (int i_14 = 1; i_14 < 10;i_14 += 1) /* same iter space */
        {
            var_28 -= (+(min((max((arr_8 [i_8] [i_8] [8]), (arr_8 [10] [i_8 + 1] [10]))), (arr_7 [i_8 + 1] [i_14] [i_14 + 2]))));
            arr_52 [i_8 + 2] [i_8] = (((min(((~(arr_38 [i_8] [i_8]))), -var_9)) * (arr_7 [16] [i_8] [i_14])));
        }
        for (int i_15 = 1; i_15 < 10;i_15 += 1) /* same iter space */
        {
            var_29 = (max(var_29, (arr_1 [i_8])));
            var_30 = var_13;
        }

        for (int i_16 = 1; i_16 < 8;i_16 += 1)
        {
            var_31 &= var_3;
            var_32 = (((((arr_2 [i_8 + 1] [i_16 + 1]) + (((arr_19 [i_8] [i_8] [i_8] [i_8]) ? (arr_21 [i_8] [i_8] [i_8] [i_8] [16]) : (arr_54 [i_8] [i_16])))))) + (min((arr_37 [i_8 - 1]), (((arr_54 [i_8] [i_16]) ? (arr_4 [i_8] [i_16]) : (arr_11 [i_8] [i_16 + 4]))))));

            for (int i_17 = 2; i_17 < 10;i_17 += 1)
            {
                arr_61 [i_8] [6] [i_17] &= min(((-(((arr_33 [i_17 - 1] [i_16 + 3]) - (arr_16 [i_17]))))), (((((arr_9 [i_8] [i_16 + 2] [i_17]) - 20)))));
                var_33 = (max(var_33, (arr_10 [i_17] [i_17 + 2] [i_17] [i_17])));
                var_34 = (-(arr_21 [i_8] [i_8] [i_8] [i_8] [i_17 - 2]));
            }
            for (int i_18 = 0; i_18 < 12;i_18 += 1)
            {
                var_35 = ((+(max(var_18, ((max((arr_59 [i_8 - 1]), (arr_62 [i_16]))))))));
                var_36 = ((var_2 ? (min((arr_44 [i_8] [i_16] [i_8 - 1] [i_16 + 1]), (arr_19 [i_8 - 1] [i_16 + 1] [20] [i_8 - 1]))) : var_11));
                var_37 = (arr_8 [i_8 + 2] [i_8 + 1] [i_8]);
                var_38 = (((((+((max((arr_31 [i_8] [i_16]), var_6)))))) ? (arr_60 [i_18] [i_8] [i_18]) : (((arr_34 [i_8] [i_8 + 1] [i_16 + 1]) + (((arr_45 [i_8] [i_8] [i_8]) - (arr_57 [i_8])))))));
            }
            arr_65 [i_8] [i_8] [i_8] = (((arr_32 [i_8 + 2] [i_8 + 2]) | (arr_26 [i_8] [12] [i_8] [i_8 - 1] [i_8] [i_16 + 1] [12])));
        }
        for (int i_19 = 1; i_19 < 11;i_19 += 1)
        {
            arr_68 [i_8] [i_19] [i_19] = (min((arr_4 [10] [i_19]), ((((((var_3 > (arr_46 [i_8] [i_19] [i_19] [i_8] [1])))) / ((max(var_8, var_15))))))));
            arr_69 [i_8] = (((arr_58 [i_8 - 1] [i_19]) * (((arr_58 [i_8 - 1] [i_19]) * (arr_58 [i_8 - 1] [i_19 + 1])))));
            var_39 = (max(var_39, ((min((max((arr_4 [i_19 + 1] [i_19 + 1]), (arr_4 [i_19] [i_19 - 1]))), (min((arr_4 [i_19 - 1] [i_19 - 1]), (arr_4 [i_19 + 1] [i_19 + 1]))))))));
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
        {
            var_40 = (((arr_47 [i_8] [i_8 - 1] [i_8] [i_8] [i_8] [i_20]) || 4294967288));
            var_41 = var_17;
            arr_72 [i_8] [i_20] [i_8] = 31;
            var_42 = (((arr_53 [3] [i_8]) ? (arr_62 [i_8 + 2]) : ((((arr_36 [i_8] [i_20] [i_8] [i_20]) && var_5)))));
        }
        for (int i_21 = 0; i_21 < 1;i_21 += 1) /* same iter space */
        {
            var_43 = (min(var_43, ((max((!var_3), (((arr_28 [i_8 + 2] [20] [i_8] [i_8] [i_8 + 1] [i_21] [i_21]) ? (arr_28 [i_8 + 2] [i_21] [i_8 + 2] [i_8] [i_21] [i_21] [i_8]) : (arr_28 [i_8 + 2] [i_21] [i_8 + 2] [11] [i_8] [i_8] [i_8]))))))));
            var_44 = (max(var_44, (((!(((~(arr_71 [8])))))))));
            arr_75 [i_8 - 1] [i_8] [i_8 + 2] = var_17;
        }
    }
    var_45 = var_9;
    var_46 = ((var_15 == (-var_14 == var_3)));
    #pragma endscop
}
