/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_12 = 2064851533;
                arr_7 [i_1] [i_1] [i_2] = ((-(max(var_7, (arr_4 [i_0 + 1] [i_1] [i_1 + 2])))));
            }
            for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
            {
                var_13 = arr_2 [i_1 + 1];
                arr_12 [i_1] = (max((((arr_2 [i_1 + 1]) ? (arr_2 [i_1 + 1]) : var_8)), (arr_2 [i_1 + 3])));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_14 = ((-7214694255655502175 ? ((((!(arr_15 [i_0] [i_0] [i_0] [i_0]))))) : 6614424064739822829));

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_22 [i_0] [i_0] [11] [i_0 - 1] [i_0] [i_1] = (((var_4 ? 7214694255655502175 : var_10)));
                        var_15 = (arr_1 [i_6]);
                        var_16 = var_0;
                        var_17 = ((var_7 ? (arr_3 [i_1 + 2] [i_0] [i_0 - 1]) : (arr_3 [i_1 - 1] [i_1] [15])));
                    }
                }
                var_18 = -7214694255655502176;
                var_19 = (~var_11);
                var_20 = arr_4 [i_1] [i_1] [i_4];
            }
            for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    var_21 = -6614424064739822817;
                    var_22 = (((!7214694255655502175) ? (-1657691740 + var_11) : (((arr_6 [i_0] [i_1 - 1] [i_1 - 1] [15]) ? -1657691735 : 47034))));
                    var_23 = (arr_9 [i_1]);
                    var_24 = ((arr_28 [i_1] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 + 3]) || var_10);
                    arr_29 [i_1] [i_7] [i_8] = 511;
                }
                arr_30 [i_1] [11] [i_0] = (((((6314312267001487428 & 0) ? -1657691740 : (arr_4 [i_0] [i_1] [i_7]))) > 512));
                var_25 = (arr_3 [4] [i_1] [i_7]);
            }
            var_26 = (arr_25 [i_0] [i_0 - 1]);
            var_27 = max(var_11, (-56 - var_5));
        }
        arr_31 [2] [i_0 - 2] = (min(var_8, var_4));
        var_28 = ((2147483647 ? (arr_14 [i_0] [i_0 + 2] [i_0 + 2] [i_0]) : (max((31 + var_7), (((var_8 ? var_4 : (arr_11 [i_0]))))))));
        var_29 = (!8);
        var_30 = ((-104 && ((((((0 ? var_5 : var_0))) ? var_6 : var_6)))));
    }
    for (int i_9 = 2; i_9 < 14;i_9 += 1) /* same iter space */
    {
        var_31 = (((max(var_11, (arr_10 [i_9])))) * (((var_5 ? var_3 : var_8))));
        var_32 = ((103 / (arr_23 [i_9] [2] [i_9] [i_9])));
        var_33 = (((((-(arr_20 [i_9])))) % (min(((-7214694255655502176 + (arr_8 [i_9] [i_9] [i_9]))), ((((arr_11 [i_9]) ? 23149 : var_11)))))));
        arr_35 [i_9] = ((max((((arr_32 [3]) ? (arr_3 [i_9] [i_9] [i_9]) : var_1)), (max(var_9, (arr_27 [i_9] [i_9] [i_9]))))) != var_0);
        var_34 = (arr_19 [i_9 - 2] [i_9] [10] [i_9] [i_9]);
    }
    var_35 = var_1;
    #pragma endscop
}
