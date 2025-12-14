/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_17 = var_10;
        arr_2 [i_0] [i_0] = (((arr_0 [i_0 - 1]) ^ (arr_0 [i_0 - 1])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_18 = (max((((arr_1 [i_1]) ? (arr_1 [i_1]) : var_15)), (((((min(var_16, var_9))) ? ((var_9 ? (arr_3 [i_1]) : var_12)) : (arr_3 [i_1]))))));

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_19 |= ((((min((arr_6 [i_2 - 1] [i_2] [i_2 - 1]), (arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1])))) ? ((((var_10 >= (arr_6 [i_2 - 1] [i_2] [i_2 - 1]))))) : (((arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1]) & var_11))));
            var_20 = ((((arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1]) && var_16)));
        }
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            arr_9 [i_3] = ((((min((~var_4), var_12))) + ((var_15 ? (max(var_7, var_7)) : (((((arr_6 [i_1] [i_1] [i_3 + 1]) || var_15))))))));
            arr_10 [i_1] [i_3] = (max(0, -1));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_21 = (((arr_6 [i_1] [i_1] [i_4]) + (arr_12 [i_1] [i_3] [i_4] [i_3 - 1])));
                arr_13 [i_3] [i_3] [i_4] [i_3] = (((arr_4 [i_3 - 1]) > (((var_10 && (arr_0 [i_3 + 1]))))));
                var_22 = ((arr_12 [i_1] [i_1] [i_3 - 1] [i_4]) + (arr_12 [i_1] [1] [1] [i_1]));
            }
            arr_14 [i_3] [i_3] [i_3] = (((min((15 && 140), (var_4 % var_16))) ^ ((max((arr_8 [i_1]), (((5739399468380744802 ? 0 : -309731337))))))));

            for (int i_5 = 1; i_5 < 7;i_5 += 1)
            {
                var_23 += var_4;
                arr_17 [i_3] = (((min((var_5 || var_11), 761497767))) && (((var_5 % (arr_16 [i_3 - 1] [i_5 + 2] [i_5 + 3])))));
            }
            for (int i_6 = 3; i_6 < 9;i_6 += 1)
            {
                var_24 = (max((((arr_18 [i_6 - 3] [i_3]) ? (arr_18 [i_6 - 2] [i_3]) : var_6)), 7560952767982037534));
                arr_20 [i_3] = ((((((var_3 && ((min(var_9, (arr_5 [i_1])))))))) + var_7));
                var_25 = (((((((((arr_5 [i_1]) % (arr_12 [i_1] [i_3] [7] [i_6])))) ? (arr_5 [i_3 + 1]) : ((~(arr_8 [i_1])))))) ? ((-(arr_5 [i_1]))) : (arr_6 [i_1] [i_3 - 1] [9])));
            }
            for (int i_7 = 2; i_7 < 6;i_7 += 1)
            {

                for (int i_8 = 2; i_8 < 9;i_8 += 1)
                {
                    var_26 = ((((min((arr_16 [2] [2] [i_8 - 2]), var_6))) ? var_3 : var_16));
                    var_27 = (min(((max((arr_6 [i_3 - 1] [i_3 + 1] [i_3 + 1]), (arr_6 [i_3 - 1] [i_3 + 1] [i_3 - 1])))), var_9));

                    for (int i_9 = 1; i_9 < 8;i_9 += 1)
                    {
                        arr_29 [i_1] [1] [i_7 + 4] [i_3] [i_3] = var_14;
                        arr_30 [i_1] [i_1] [i_3] [i_7] [i_3] [7] [5] = ((((max(((~(arr_5 [i_1]))), var_15))) ? var_0 : (max((arr_27 [i_3] [i_3 - 1] [i_7] [i_8] [i_8 - 2] [i_8] [i_3]), (max((arr_23 [i_3] [i_3] [i_3] [i_3]), var_1))))));
                    }
                    for (int i_10 = 4; i_10 < 6;i_10 += 1)
                    {
                        arr_33 [i_1] [i_3] [i_7] [i_3] [i_1] = ((((arr_6 [i_1] [i_3 - 1] [i_7 + 2]) && var_4)));
                        arr_34 [6] [i_3] [6] [i_8 - 1] [9] = max(((((((-(arr_8 [i_10])))) & (arr_18 [i_1] [i_3])))), var_13);
                        arr_35 [i_1] [i_3] [i_7] [i_8] [i_10 - 3] = ((((min((arr_26 [i_3 + 1] [i_3 - 1] [i_3] [i_3] [i_3]), (arr_26 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3] [i_3])))) >= ((((arr_26 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) && (arr_26 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 6;i_11 += 1)
                    {
                        var_28 += var_14;
                        arr_38 [i_1] [i_7] [i_8 + 1] [i_3] = (arr_24 [i_1] [i_3] [i_7 + 4] [i_7 + 4] [i_11]);
                        var_29 -= ((arr_4 [i_1]) == (arr_4 [i_11 + 3]));
                        var_30 |= (arr_15 [i_1] [i_1]);
                    }
                }
                var_31 = arr_8 [9];
                arr_39 [i_1] [i_3] = -var_6;
                arr_40 [i_3] [i_7] = (min(0, (max(8532845536373083977, 1475137356))));
                var_32 = ((max((((var_15 == (arr_36 [i_1] [i_3] [i_3] [i_3] [i_1] [i_3]))), var_0))));
            }
        }
        var_33 = (min(var_33, (arr_22 [i_1])));
    }

    for (int i_12 = 1; i_12 < 10;i_12 += 1)
    {
        var_34 = var_16;
        arr_45 [i_12] = ((((max((arr_1 [i_12 + 1]), ((max(var_12, var_4)))))) ? (max((arr_1 [i_12]), ((min((arr_0 [i_12]), var_14))))) : (arr_1 [i_12 + 1])));
        var_35 = (min(((1475137356 ? (arr_1 [i_12 - 1]) : var_7)), (max(var_3, (arr_1 [i_12 - 1])))));
    }
    for (int i_13 = 1; i_13 < 1;i_13 += 1)
    {
        var_36 *= (arr_15 [1] [i_13]);
        arr_49 [i_13] [i_13 - 1] = ((((min(var_14, (arr_46 [i_13 - 1] [i_13 - 1])))) ? 1510944051 : (7446 & 5076265183146893589)));
        arr_50 [i_13] = ((-var_7 ? (max(var_1, (arr_32 [i_13]))) : ((var_8 ? (95 - 1) : 33444))));
        arr_51 [i_13] = ((var_5 ? ((var_15 ? (arr_36 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1]) : (arr_12 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1]))) : (~4984)));
    }
    #pragma endscop
}
