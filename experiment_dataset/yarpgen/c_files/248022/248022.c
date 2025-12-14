/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((((!((min(122, var_9)))))), ((+((((arr_0 [i_0] [i_0]) > (arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] [i_0] = (~40354);
        var_13 = 121;
        var_14 = ((~((-(arr_0 [i_0] [i_0])))));
    }

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((((max((arr_0 [i_1] [i_1]), (arr_4 [i_1])))) > -69)));

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_15 = (min(var_15, (arr_5 [i_1])));
            arr_9 [i_1] = 1;

            /* vectorizable */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                arr_13 [i_1] [8] [i_1] [12] = (arr_11 [i_3] [13] [i_3]);
                arr_14 [9] [9] [i_3] = 124;

                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {
                    arr_18 [i_1] [i_2] [i_1] [i_4 - 2] [i_1] = (arr_15 [i_1] [i_1] [i_1] [i_4 - 1]);
                    var_16 += (!(arr_4 [i_4 - 2]));
                    arr_19 [i_1] [i_2] [7] [i_3] [i_3] [i_4 + 1] = ((~(((arr_4 [15]) ? (arr_10 [i_1] [i_2] [i_3] [i_4 - 2]) : 1451098094))));
                    arr_20 [i_4 - 1] [i_3] [i_2] = (arr_10 [i_1] [11] [i_2] [i_1]);
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    arr_23 [i_1] [13] [i_3] [5] = arr_22 [i_1] [i_2];
                    var_17 ^= (arr_8 [13]);
                    var_18 = ((0 ? ((((!(arr_1 [i_1] [i_5]))))) : 1));
                    arr_24 [4] [i_3] [i_3] [i_2] [i_1] [i_1] &= ((0 ? (arr_1 [i_2] [i_5]) : (arr_5 [i_3])));
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    arr_28 [0] [i_2] [i_3] [12] [i_6] [i_6] = ((-67 ? var_10 : -1579415112));
                    var_19 = (max(var_19, (arr_10 [i_1] [i_2] [2] [i_6])));
                }
            }
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                arr_31 [i_1] [i_1] [i_1] = 3561773873;
                arr_32 [i_1] [i_2] [i_1] [i_7] = (max(((((arr_4 [i_1]) > 0))), 13421614289261140534));
                var_20 += (((!var_9) > -var_7));
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 15;i_9 += 1)
                    {
                        {
                            arr_39 [i_9 - 2] [i_8 - 2] [i_7] [i_2] [i_1] = ((-(arr_11 [i_9] [15] [i_1])));
                            arr_40 [i_7] = (min((max((arr_11 [i_8] [i_7] [i_1]), ((var_3 ? (arr_21 [i_1] [i_2] [i_7] [i_1] [i_9]) : 112)))), (arr_34 [i_9] [i_1] [i_1] [i_1])));
                        }
                    }
                }

                for (int i_10 = 3; i_10 < 15;i_10 += 1)
                {
                    arr_43 [i_1] [i_7] [i_10] [i_2] [i_1] = (arr_37 [i_10 - 2] [i_2] [i_7] [i_7] [i_1]);
                    arr_44 [i_1] [i_10] [i_7] [13] = (arr_41 [i_1] [14] [i_2] [14] [i_10 - 3] [i_10]);
                    arr_45 [i_1] [i_1] [i_10] [i_1] = (arr_17 [i_10] [i_7] [15] [i_1]);
                    arr_46 [i_1] [5] [10] [i_10] = -33;
                }
            }
            arr_47 [i_2] = (min((arr_11 [i_1] [i_1] [i_1]), (arr_11 [i_1] [6] [i_1])));
            arr_48 [i_1] [i_1] [i_2] = (arr_1 [i_1] [22]);
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            arr_53 [i_1] [i_11] = ((((max(73, var_3))) ? (min((arr_12 [i_1] [i_11]), (arr_10 [i_1] [i_1] [i_11] [i_11]))) : (((((arr_10 [i_1] [i_1] [i_1] [i_1]) > (arr_10 [i_11] [i_11] [i_11] [i_11])))))));
            arr_54 [11] = ((~(arr_17 [i_11] [i_1] [i_1] [i_1])));
        }
        arr_55 [i_1] [i_1] = arr_17 [i_1] [i_1] [i_1] [i_1];
    }
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        var_21 = (min(var_21, -var_12));
        arr_59 [i_12] = var_8;
        var_22 = (((arr_58 [i_12] [i_12]) > ((((var_5 ? -41 : var_4))))));
    }
    #pragma endscop
}
