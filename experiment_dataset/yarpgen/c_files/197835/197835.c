/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_2;
        arr_4 [i_0] = (((((min((arr_0 [i_0]), var_10))) ? 2033560197304197634 : (((max(9422, var_13)))))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_9 [i_0] = (((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0]))) < ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
            arr_10 [i_0] = (min((((arr_1 [i_0] [i_0]) & 9422)), ((((arr_5 [i_0]) == (arr_5 [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_13 [i_2] [i_0] [i_0] = (max((((var_9 && (arr_11 [i_0] [i_2])))), ((((arr_0 [i_0]) ? (arr_11 [i_0] [i_2]) : (arr_6 [4]))))));
            arr_14 [i_0] = var_1;
            arr_15 [i_0] = ((((min((arr_8 [i_0] [i_2] [i_0]), -56111))) ? var_6 : ((((arr_7 [i_0] [i_0]) ? (arr_6 [i_0]) : (arr_6 [i_0]))))));
            arr_16 [i_0] [i_0] = ((((((arr_2 [i_0]) % (arr_2 [i_0])))) ? 1778392513 : 9422));
            arr_17 [13] [i_2] [i_0] = (arr_5 [i_0]);
        }
    }

    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        arr_20 [1] = (((((var_10 ? (!56114) : (arr_18 [i_3])))) ? 9416 : (((arr_19 [1] [i_3]) ? (max(15925136096546853292, 254)) : ((((arr_19 [i_3] [i_3]) << (4026531840 - 4026531818))))))));
        arr_21 [i_3] = (var_11 == var_0);
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        arr_25 [i_4] [i_4] = ((~(min(((((arr_18 [i_4]) >= var_1))), (arr_22 [i_4])))));
        arr_26 [1] [i_4] = (+-10);
        arr_27 [i_4] = (((((arr_22 [i_4]) % var_5))) ? ((9023190459281855911 ? (arr_22 [i_4]) : (arr_22 [i_4]))) : ((~(arr_22 [i_4]))));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        arr_30 [i_5] = 2065760324999874986;

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 23;i_7 += 1) /* same iter space */
            {
                arr_37 [i_5] [i_6] [9] = 3791151751;
                arr_38 [i_5] [i_6] [i_7] = (((503815544 ? var_19 : (((arr_31 [i_6] [i_6]) / var_1)))));
                arr_39 [i_5] [1] [14] = (-(arr_22 [i_7 + 1]));

                for (int i_8 = 4; i_8 < 24;i_8 += 1)
                {
                    arr_43 [i_5] [i_5] [i_5] [i_5] = -var_19;
                    arr_44 [1] [i_6] [i_5] [i_7 + 1] [13] [i_8] = ((~((var_0 + (((arr_18 [i_8]) ? (arr_19 [i_8] [19]) : (arr_23 [7])))))));
                }
                arr_45 [i_5] [i_5] [1] = (((((var_11 ? 503815544 : var_13))) % (min((arr_23 [i_7 - 1]), (arr_23 [i_7 - 1])))));
            }
            /* vectorizable */
            for (int i_9 = 1; i_9 < 23;i_9 += 1) /* same iter space */
            {
                arr_48 [4] [24] [i_5] = (arr_47 [i_5] [i_5] [i_5]);
                arr_49 [i_5] [12] [i_5] = ((arr_31 [i_9 - 1] [i_9 - 1]) ? var_4 : (((((arr_31 [7] [7]) > (arr_34 [i_5]))))));
                arr_50 [2] = arr_29 [i_5];
            }
            for (int i_10 = 3; i_10 < 23;i_10 += 1)
            {
                arr_54 [i_5] [i_6] [i_10] = (((((14875355326968320526 ? ((1 ? (arr_51 [i_5] [21] [i_10]) : (arr_35 [i_5] [i_5] [i_5]))) : var_14))) ? (((var_7 <= ((56113 >> (10408750971328190284 - 10408750971328190260)))))) : var_7));
                arr_55 [i_5] = var_16;
            }
            arr_56 [i_5] = ((((min((min(9406, 43683)), 56096))) ? ((12 ? 14 : var_19)) : (((var_12 || (arr_19 [i_6] [4]))))));
            arr_57 [i_5] = 39;
        }
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            arr_61 [i_5] = (~var_7);
            arr_62 [i_5] [i_11] [i_11] = (((arr_42 [i_5]) % -13318));
            arr_63 [i_5] = (((arr_22 [i_5]) ^ ((((((!(arr_41 [24] [i_11] [i_11] [i_5] [i_11] [i_5]))))) % (arr_58 [i_11] [i_11] [i_5])))));
        }
    }
    var_20 = var_8;
    #pragma endscop
}
