/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_1, -var_10));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_4;

        for (int i_1 = 4; i_1 < 11;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_0] [i_1] = var_17;

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                arr_10 [i_0] [i_1 - 2] [i_2] = (arr_9 [i_1 + 1] [i_1 - 2] [i_1 - 3]);
                arr_11 [i_0] = (arr_0 [i_1]);
            }
        }
        for (int i_3 = 4; i_3 < 11;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_16 [i_0] [i_3 - 3] [i_4] = (((!var_17) || (arr_6 [i_0])));
                arr_17 [i_3 - 3] [i_3] [i_4] [i_0] &= (((arr_13 [i_0] [i_0]) ? (arr_13 [i_4] [i_0]) : ((max(729284290, 1)))));
            }
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                arr_21 [i_5] [i_3] [i_3] [i_3 - 3] = ((((((((min((arr_4 [i_3 - 3] [i_0]), 1987)))) - ((var_17 ? 0 : 0))))) || ((min((arr_18 [i_3 - 4]), var_14)))));
                var_21 = ((arr_19 [i_0] [i_3] [i_5] [i_5]) - ((((arr_2 [i_3 - 3]) / (arr_14 [i_3] [i_3 + 1] [i_3 - 4] [i_3])))));

                /* vectorizable */
                for (int i_6 = 4; i_6 < 10;i_6 += 1)
                {
                    arr_26 [i_0] [i_3] [i_5] [i_5] [i_6] &= (((arr_20 [i_6 - 3] [i_5] [i_3 - 1] [i_6]) < (arr_20 [i_6 + 1] [i_5] [i_3 - 1] [i_6])));
                    arr_27 [i_0] [i_3] [i_5] [i_6] = (((arr_19 [i_3 - 4] [i_5] [i_6 - 4] [i_6 - 4]) || (arr_9 [i_3 + 1] [i_0] [i_6 - 1])));
                    var_22 |= (arr_20 [i_6 - 1] [i_6 - 3] [i_6] [i_6 + 2]);
                    var_23 = (arr_20 [i_0] [i_3] [i_5] [i_6]);
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    arr_30 [i_5] [i_5] [i_3] [i_0] [i_5] = ((var_12 ? (!var_4) : (((arr_19 [i_3] [i_3 - 2] [i_3] [i_3 + 1]) ? (arr_19 [i_3] [i_3 - 4] [i_3 - 4] [i_3 - 4]) : 1985798805))));
                    var_24 = (min(var_24, (min(((61050 ? ((((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (arr_4 [i_5] [i_0])))) : (arr_19 [i_0] [i_3 - 3] [i_5] [i_7]))), 6042471286641404043))));
                }
                for (int i_8 = 4; i_8 < 10;i_8 += 1)
                {
                    arr_33 [i_0] [i_5] [i_5] = (((((-(arr_23 [i_8] [i_8 - 2] [i_8 - 4] [i_8] [i_8 + 1] [i_8 + 1])))) || (((min(61050, var_2))))));
                    var_25 = (((arr_32 [i_3 - 2]) && ((min(6042471286641404043, 0)))));
                    var_26 *= (arr_8 [i_3 - 3] [i_8 - 3] [i_8 - 2] [i_8 - 3]);
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    var_27 = ((-(arr_24 [i_3 - 3] [i_5] [i_5] [i_9] [i_0])));
                    var_28 = (min(var_28, 133));
                    var_29 |= ((0 ? (arr_9 [i_3 - 3] [i_3] [i_5]) : (~122)));
                    arr_38 [i_5] [i_3 - 4] [i_3] = var_4;
                }
                arr_39 [i_5] = (arr_8 [i_0] [i_0] [i_0] [i_0]);
                arr_40 [i_0] [i_5] [i_5] = (min(((((var_3 * var_15) >> (2193087716 - 2193087714)))), var_18));
            }
            arr_41 [i_0] [i_0] [i_0] |= var_19;
            arr_42 [i_0] [i_0] [i_0] = (max((4850643678894881281 * 7414420590692839575), 1));
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            arr_46 [i_10] [i_10] [i_10] = (-(((13330 ? 13330 : 127))));
            arr_47 [i_10] = (min(((-(((arr_12 [i_0]) ? (arr_24 [i_0] [i_0] [i_10] [i_10] [i_10]) : var_6)))), (arr_12 [i_0])));

            for (int i_11 = 4; i_11 < 8;i_11 += 1)
            {
                arr_52 [i_10] [i_10] [i_11] = (min(var_19, (min((0 || var_16), -var_7))));
                arr_53 [i_10] = (!(arr_25 [i_0] [i_11]));
            }
        }
        for (int i_12 = 2; i_12 < 10;i_12 += 1)
        {
            arr_56 [i_0] [i_0] = ((((+(((arr_19 [i_12] [i_12] [i_0] [i_0]) - 885530726)))) >> (775201632 - 775201589)));
            var_30 = 149;
            arr_57 [i_12] &= (max(((((min((arr_12 [i_0]), (arr_55 [i_12]))) >> (((arr_2 [i_12 + 2]) - 3638930132))))), ((~(arr_0 [i_12 - 1])))));
            var_31 = (((0 ^ var_10) > ((~(((var_8 || (arr_50 [i_0] [i_12] [i_12]))))))));
        }
    }
    var_32 = (((-20 ? 0 : 4294967294)));
    #pragma endscop
}
