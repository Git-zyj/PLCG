/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = var_8;

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_14 = ((~((~(max(4294967295, 4294967275))))));
        var_15 = (((~var_11) ? (min(4294967282, ((65518 ? var_1 : (arr_2 [i_0] [i_0]))))) : ((((arr_2 [i_0] [i_0]) + (((!(arr_0 [i_0 + 1])))))))));
        arr_3 [0] &= -65535;
        arr_4 [i_0] = (max((((~8) ? (arr_1 [i_0]) : (max((arr_1 [i_0]), 23)))), ((((((min(var_9, (arr_2 [i_0] [i_0 + 2]))))) != (max((arr_2 [i_0] [i_0]), 18446744073709551615)))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_16 &= 245;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_17 = (max(var_17, (((-29 & (18446744073709551599 ^ var_7))))));
                    arr_20 [i_1] [i_2] [i_2] [i_3] [i_4] [i_4] |= var_7;
                    arr_21 [i_1] = (arr_17 [i_1] [i_1] [i_1] [i_1]);
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_18 = ((~(arr_19 [i_1] [i_1])));

                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        var_19 = (arr_13 [i_2] [i_3] [i_6 - 2]);
                        var_20 = ((((((arr_16 [i_2] [i_2] [i_2] [i_2] [i_2]) - 57344))) ? (arr_16 [i_3] [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6 - 2]) : (arr_25 [i_1] [i_2] [i_1] [i_6 + 1] [i_6])));
                    }

                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_21 = (max(var_21, (((!(arr_7 [i_3] [i_5]))))));
                        arr_30 [i_1] [i_2] [i_3] [i_5] [17] = (arr_14 [i_2] [i_3] [i_3]);
                        var_22 |= (arr_13 [i_1] [i_1] [i_1]);
                        var_23 = (~34);
                    }
                    var_24 = (min(var_24, 12));
                    var_25 = ((2931591623 ? var_3 : 43));
                }
                var_26 = (arr_5 [i_2] [i_3]);

                for (int i_8 = 1; i_8 < 14;i_8 += 1)
                {
                    arr_35 [i_1] [i_3] [i_8] = (arr_16 [i_1] [i_1] [i_2] [14] [i_8 + 4]);
                    var_27 |= 4294967259;
                }
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    var_28 = 16656;

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_29 = ((-(255 * var_7)));
                        var_30 = (min(var_30, (((arr_9 [i_3] [i_9] [i_10]) ? 0 : var_2))));
                    }
                    for (int i_11 = 2; i_11 < 16;i_11 += 1)
                    {
                        var_31 = (((arr_41 [i_2] [i_2] [i_11 + 1] [i_11 - 1] [i_11 + 1]) / (arr_41 [i_3] [i_11 + 2] [i_11 + 1] [i_11 + 1] [i_11])));
                        arr_43 [i_1] [i_2] [i_3] [i_1] [i_11] = (arr_41 [i_2] [i_2] [10] [10] [i_11 - 2]);
                        var_32 = (arr_39 [i_11 - 2] [i_11 + 1] [i_11 + 1] [i_11] [i_11 - 2]);
                    }
                    var_33 = (min(var_33, (165 * 15)));
                }
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    var_34 = (((((var_5 >> (((arr_31 [i_1] [i_1] [i_3] [i_12] [i_3]) - 7846798475326458419))))) <= (arr_45 [i_12] [i_3] [i_2] [i_2] [i_1])));
                    var_35 = (min(var_35, (((arr_39 [i_1] [i_1] [i_1] [i_1] [i_1]) - (arr_39 [i_1] [i_1] [i_2] [i_12] [i_1])))));
                }
                var_36 = (((194 ? var_1 : 18446744073709551602)));
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                arr_51 [i_1] [i_1] [i_13] = ((0 ? (arr_39 [i_1] [i_1] [i_1] [i_1] [i_1]) : ((((!(arr_18 [i_1] [i_1] [16] [i_1])))))));
                var_37 = arr_18 [i_1] [i_1] [i_1] [i_1];
            }
            var_38 = (max(var_38, var_0));
            var_39 += (((arr_42 [i_2]) & (arr_42 [i_1])));
            var_40 = (min(var_40, ((((arr_34 [i_1] [i_1] [i_2] [i_2]) + (arr_34 [i_1] [i_2] [i_1] [i_1]))))));
            var_41 *= arr_41 [i_1] [i_1] [i_1] [i_1] [i_1];
        }
        arr_52 [i_1] = (min(((-(min(var_8, (arr_39 [5] [i_1] [i_1] [i_1] [i_1]))))), (((37 ? 63 : 57330)))));
        arr_53 [i_1] &= var_11;
    }
    var_42 = (min(((var_10 ? ((0 << (36 - 16))) : var_7)), var_6));
    #pragma endscop
}
