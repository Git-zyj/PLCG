/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((var_12 >> (var_13 - 25)))) ? ((62 ? -85 : 1654722048)) : var_4))) && ((((!var_12) / ((var_3 ? var_0 : 1)))))));
    var_16 = (min((((max(var_13, var_10)))), var_11));
    var_17 |= (641 <= var_13);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] &= (~-62);
        arr_4 [i_0] = (((((min((arr_2 [i_0] [i_0]), (arr_0 [i_0]))) + (((~(arr_0 [i_0])))))) > ((((arr_2 [i_0] [i_0]) ? (max((arr_1 [i_0]), (arr_0 [i_0]))) : ((((arr_1 [i_0]) && (arr_0 [i_0])))))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_1] = ((((!((((arr_5 [i_0] [i_0] [i_1]) ? (arr_1 [i_1]) : (arr_6 [i_0] [i_0])))))) && ((((-62 + 2147483647) >> (62 - 58))))));
            arr_8 [i_1] = (arr_0 [i_0]);
        }
        arr_9 [i_0] [i_0] = var_14;

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_14 [i_2] [i_0] = (((arr_11 [i_0] [i_0] [i_2]) ? ((-(((arr_11 [i_0] [i_2] [i_0]) + (arr_2 [i_0] [i_2]))))) : (arr_12 [i_0] [i_2] [i_2])));
            arr_15 [i_0] [i_0] [i_2] = (arr_13 [i_0]);
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_19 [i_0] [i_3] [i_0] |= (((arr_13 [i_3]) ? (arr_18 [i_0] [i_0] [i_3]) : (arr_18 [i_0] [i_0] [i_3])));
            arr_20 [i_0] [i_3] [i_3] = (arr_1 [i_0]);
            arr_21 [i_3] = ((-(!2147483647)));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_30 [i_0] [i_3] [i_3] [i_4] [i_4] [i_5 + 2] [i_3] = (arr_25 [i_6 + 1] [i_5 - 2]);
                            arr_31 [i_0] [i_3] [i_0] = (((arr_22 [i_0]) ? 1 : var_5));
                            arr_32 [i_3] [i_3] [i_4] [i_5] [i_5] [i_5 - 3] = ((+(min((min((arr_13 [i_5]), var_8)), 128))));
                        }
                    }
                }
            }
        }
        for (int i_7 = 2; i_7 < 17;i_7 += 1)
        {
            arr_36 [i_7] [i_7] [i_0] = ((((min((((arr_25 [i_7] [i_0]) ? (arr_25 [i_0] [i_7]) : (arr_1 [i_7]))), (arr_25 [i_0] [i_7])))) >= (max(var_10, (arr_33 [i_0] [i_7 + 3] [i_0])))));
            arr_37 [i_0] [i_0] [i_7] = (+(((arr_10 [i_7] [i_0] [i_0]) ? (max(var_2, (arr_22 [i_0]))) : (((((arr_28 [i_0] [i_0] [i_0] [i_7] [i_7] [i_0]) == (arr_27 [i_0] [i_0] [i_0] [i_0]))))))));

            for (int i_8 = 1; i_8 < 19;i_8 += 1)
            {
                arr_40 [i_0] [i_7] [i_8] = (arr_16 [i_0]);
                arr_41 [i_0] [i_0] [i_0] [i_8] = (!((((arr_33 [i_0] [i_7 + 1] [i_8 - 1]) * (arr_23 [i_7] [i_0] [i_8 + 1] [i_8])))));
                arr_42 [i_8] = min((arr_13 [i_0]), (arr_26 [i_0] [i_7] [i_0]));
                arr_43 [i_0] = (arr_13 [i_0]);
            }
            for (int i_9 = 3; i_9 < 18;i_9 += 1)
            {
                arr_46 [i_0] [i_7 + 2] [i_7] [i_9] = 29995;
                arr_47 [i_0] [i_7 + 2] [i_7] [i_0] = ((!(((arr_22 [i_0]) > (arr_22 [i_7])))));
                arr_48 [i_9] [i_7 + 2] [i_9] [i_9] = ((!(((arr_35 [i_0] [i_7]) && ((max(33077, var_10)))))));
            }
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                arr_54 [i_0] [i_0] &= (arr_22 [i_0]);
                arr_55 [i_0] [i_0] [i_0] &= ((((-(arr_35 [i_11] [i_0]))) >= (arr_34 [i_10])));
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                arr_58 [i_0] [i_12] = (!var_9);
                arr_59 [i_10] [i_10] = (arr_38 [i_0] [i_10] [i_12]);
            }

            /* vectorizable */
            for (int i_13 = 1; i_13 < 18;i_13 += 1)
            {
                arr_63 [i_0] [i_10] [i_10] = var_9;
                arr_64 [i_0] [i_10] [i_0] [i_0] = (arr_6 [i_13 - 1] [i_13 + 1]);
            }
            arr_65 [i_10] = ((((!(arr_11 [i_10] [i_10] [i_10]))) && (((arr_11 [i_0] [i_0] [i_10]) <= (arr_11 [i_0] [i_10] [i_10])))));
        }
    }
    #pragma endscop
}
