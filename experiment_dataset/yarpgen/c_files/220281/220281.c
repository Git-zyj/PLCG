/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_21 = ((-(arr_2 [i_0] [i_1])));
                        arr_10 [2] [3] [i_2] [i_3] [i_3] [i_3] = (arr_8 [i_0]);
                    }
                }
            }
            var_22 = (min(var_22, (arr_8 [i_0])));
            var_23 = var_1;
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 9;i_6 += 1)
                    {
                        {
                            arr_21 [i_4] [i_1] [i_4] [i_4] [i_4] = var_15;
                            arr_22 [i_0] [i_0] [3] [i_4] [0] = ((!(((arr_15 [i_0] [i_1] [i_4] [i_5]) > var_1))));
                            arr_23 [i_4] = -1442769521;
                            arr_24 [i_4] [i_5] [i_6] = var_15;
                            var_24 = var_9;
                        }
                    }
                }
            }
        }
        for (int i_7 = 3; i_7 < 10;i_7 += 1)
        {
            var_25 = (var_9 && var_16);
            arr_29 [i_0] = (~18992);
            var_26 -= (((arr_15 [i_7 - 3] [4] [i_0] [i_7 - 2]) ? (arr_15 [i_7 - 2] [i_7 - 2] [i_0] [i_7 - 3]) : 1658809034197732933));
        }
        var_27 = ((~(arr_5 [i_0])));
        var_28 -= var_19;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        arr_32 [i_8] = (((arr_6 [i_8] [i_8]) > (arr_14 [4] [4] [0] [4] [i_8])));
        var_29 = ((arr_28 [i_8] [i_8]) ? var_11 : (arr_28 [i_8] [i_8]));
        arr_33 [i_8] = 18446744073709551612;
        var_30 = (((((223 ? var_15 : (arr_8 [i_8])))) || ((var_13 < (arr_31 [i_8])))));
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        var_31 = (max(var_31, (~var_11)));
        arr_36 [0] [0] &= (arr_35 [6]);
        var_32 ^= ((((arr_35 [10]) > (arr_35 [4]))));
    }
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            arr_42 [i_11] = (arr_41 [i_11] [i_10] [i_10]);
            arr_43 [i_11] = (max((((arr_34 [i_11]) ? (arr_34 [i_10]) : (arr_41 [i_10] [i_10] [i_11]))), (((236 || (arr_38 [i_10] [i_11]))))));
            arr_44 [i_11] = (((arr_38 [1] [i_10]) ? (~var_16) : (arr_35 [i_11])));
        }
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {

            /* vectorizable */
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                var_33 += (arr_34 [i_10]);
                var_34 = (arr_47 [i_13] [i_12] [i_13]);
                var_35 = (((arr_35 [i_13]) ^ (arr_40 [i_13])));
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                var_36 += ((arr_52 [i_14] [i_12] [i_10]) || (arr_52 [i_10] [i_12] [i_14]));
                var_37 = (((arr_52 [i_10] [i_12] [i_14]) | (arr_34 [i_14])));

                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    var_38 = (min(var_38, ((((110 ^ var_16) != (!var_4))))));
                    arr_57 [i_15] = (((arr_45 [i_10] [i_10] [i_15]) >> (((arr_51 [i_12]) - 4048))));
                }
                arr_58 [i_10] [i_14] &= var_1;
                var_39 = ((-(arr_41 [i_10] [i_10] [i_14])));
            }
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                arr_61 [i_12] [i_12] = ((236 >> (((max((arr_41 [8] [11] [i_10]), (arr_39 [i_10]))) - 2120495317))));
                var_40 ^= var_9;
            }
            var_41 = ((-((var_10 + (223373972 + 3329394824)))));
        }
        var_42 = (((~var_14) ? (((arr_60 [i_10] [i_10]) ? var_1 : var_7)) : (-2147483647 - 1)));
        var_43 = (max(((min((((160 < (arr_60 [i_10] [i_10])))), -127))), (max(580832139, (arr_46 [i_10] [i_10])))));
        arr_62 [i_10] [9] = var_18;
    }
    #pragma endscop
}
