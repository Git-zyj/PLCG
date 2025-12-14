/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((var_15 * var_12), (((-(var_4 / var_5))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 = var_11;
        var_18 = ((((((-2147483647 - 1) ? (((29850 ? var_6 : (arr_0 [i_0])))) : ((1 ? 7878117437556171208 : 10568626636153380407))))) ? (arr_1 [i_0]) : 1));
        arr_2 [6] = ((var_1 ? ((max(((max((arr_1 [i_0]), var_2))), ((0 ? (arr_0 [i_0]) : 0))))) : (max(14415476619861628860, 96))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_19 = ((-var_10 ? (arr_4 [i_1]) : (((max((arr_5 [i_1]), (arr_5 [i_1])))))));
        arr_6 [i_1] = ((!((((arr_5 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1]))))));
        arr_7 [i_1] = ((!((max((((arr_4 [i_1]) ? 4031267453847922739 : var_14)), (4031267453847922756 + 1))))));
        arr_8 [i_1] = ((var_4 ? var_6 : var_8));
        var_20 = var_9;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = var_12;
        arr_12 [i_2] [i_2] = (var_2 ? (arr_3 [i_2]) : var_4);
        arr_13 [i_2] = arr_10 [i_2] [i_2];

        for (int i_3 = 4; i_3 < 22;i_3 += 1)
        {
            arr_16 [i_3 - 2] [i_3] [i_3 - 1] = ((((~(arr_9 [i_2])))) ? (arr_15 [i_2]) : -4031267453847922739);
            arr_17 [i_2] [i_2] [i_3 + 3] = (arr_10 [i_3 - 3] [i_3 - 3]);
        }
    }

    for (int i_4 = 3; i_4 < 16;i_4 += 1)
    {
        arr_20 [i_4 - 1] = ((~(arr_1 [i_4 + 1])));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
            {
                arr_26 [i_4] [i_5] [i_5] [i_6] = ((-1 < ((44 ? 71 : var_13))));
                arr_27 [i_4 - 3] [i_5] = (arr_9 [4]);
                arr_28 [i_4] [i_4] = 7878117437556171195;
                arr_29 [i_4 - 1] [i_4 - 3] [i_4] [i_4 - 1] = (((arr_23 [i_5] [i_6]) ? (arr_23 [i_6] [i_4 - 3]) : (arr_23 [i_4 - 2] [i_5])));
            }
            for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
            {
                arr_34 [i_4] [i_7] = (~var_9);
                arr_35 [i_4] [i_5] [i_5] [i_7] = (!0);
            }
            for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
            {
                var_21 = ((2888707836 * (arr_5 [i_8])));
                arr_38 [i_8] [i_5] = ((-((var_2 ? 4031267453847922739 : (arr_19 [i_4 - 1])))));
                arr_39 [i_8] [i_5] [0] = ((var_5 >= (arr_33 [i_8])));
                arr_40 [i_8] [i_5] [i_8] = (arr_14 [i_4] [i_5] [i_8]);
            }
            arr_41 [i_4 - 3] [i_4] [i_4 - 3] = (((arr_33 [i_4 - 2]) ? (arr_33 [i_4 - 2]) : var_5));
        }

        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                arr_46 [i_10] = (((max((arr_4 [i_9]), (var_15 != var_6))) | (((((((!(arr_23 [i_4 - 3] [i_9]))))) + var_10)))));
                var_22 = (arr_21 [i_4] [i_4]);
                arr_47 [i_10] [i_9] [i_4 - 2] = (arr_19 [i_4 - 1]);
                var_23 = var_8;
            }
            var_24 = ((((max(-28280, 1423377236))) <= (((((var_5 ? var_13 : (arr_10 [i_4 + 1] [i_9])))) ? (arr_32 [i_9]) : (!0)))));
            var_25 = (min((arr_21 [i_4 + 1] [i_9]), (-2147483647 - 1)));
        }
    }
    var_26 = (((((var_13 ? var_15 : var_12))) ? (max(var_0, (min(var_12, 101)))) : ((max((76 != var_10), var_6)))));
    #pragma endscop
}
