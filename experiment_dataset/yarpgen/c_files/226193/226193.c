/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = max((((1 && (arr_0 [i_0])))), (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
        var_18 -= (((((-(((-2147483647 - 1) ? var_14 : (arr_3 [i_0] [i_0])))))) ? (~var_15) : (arr_2 [i_0])));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            var_19 = (((arr_2 [i_0]) ? (arr_0 [i_1 - 1]) : (arr_1 [i_0])));
            var_20 = (((arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 2]) ^ (arr_5 [i_1 - 2] [i_1 - 3] [i_1 - 1])));
            var_21 = (arr_3 [i_1 - 3] [i_1 - 3]);
            var_22 = (max(var_22, (arr_6 [i_1 + 1] [i_1 + 1] [i_1 - 3])));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_23 |= (((var_9 ? (1 + 5832744033669423609) : var_12)));
            arr_10 [i_2] = (arr_3 [i_0] [i_2]);

            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                arr_13 [i_3] [i_3] = var_12;
                var_24 = (min(var_24, ((max(63533, 14)))));
                var_25 = (((((((min(var_3, (arr_9 [i_3])))) ? (arr_2 [i_0]) : var_14))) ? (arr_5 [i_3] [i_2] [i_0]) : (((arr_5 [i_2] [i_3 + 4] [i_3 + 4]) ? ((var_0 ? var_13 : var_9)) : var_5))));
            }
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                var_26 -= ((((min(var_0, var_0))) ? var_11 : (max((min((arr_12 [i_0] [i_2]), (arr_15 [i_4 - 1] [i_2] [i_0] [i_0]))), (((var_3 ? (arr_14 [i_0] [i_0] [i_4 - 1] [i_4]) : var_10)))))));
                var_27 = var_10;

                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    var_28 = var_4;
                    var_29 = ((1 ? ((((((2020 ? (arr_6 [i_0] [i_0] [i_4]) : (arr_11 [11] [i_0] [i_4])))) ? var_5 : (!var_11)))) : ((var_9 - (~2757133580)))));
                }
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {

                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    arr_27 [i_0] [i_7] [i_0] [i_6] [i_7 + 1] = 1312853281;

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_30 |= (arr_19 [i_8] [i_6] [i_0] [i_0]);
                        var_31 = (((arr_21 [i_0] [i_0] [i_0]) << (arr_25 [i_0] [i_7] [i_7 + 2] [2])));
                        arr_31 [i_0] [i_7] [i_0] = 9223372036854775807;
                    }
                    for (int i_9 = 2; i_9 < 11;i_9 += 1)
                    {
                        arr_35 [i_7] [i_6] [i_9 + 1] = (((((max((arr_20 [i_0] [i_0] [i_0]), (arr_32 [i_7] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))) - (arr_29 [i_0] [i_2] [i_6] [6])));
                        arr_36 [10] [10] [10] [i_7 - 1] [i_7] = (arr_33 [i_9] [i_7] [1] [i_7] [i_0]);
                        var_32 += var_16;
                        var_33 = var_7;
                    }
                    for (int i_10 = 4; i_10 < 10;i_10 += 1)
                    {
                        arr_40 [i_7] [i_7 + 1] [i_6] [i_2] [i_2] [i_7] = var_5;
                        var_34 = (max(var_4, (((arr_19 [i_7 + 1] [i_10 - 2] [i_10 + 1] [i_10 + 1]) << var_12))));
                        arr_41 [i_7] [6] [i_6] [i_6] [6] = ((~(arr_14 [i_0] [i_0] [i_0] [i_0])));
                    }
                }
                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {
                    var_35 ^= (min(((((arr_9 [i_11 + 1]) / 63700))), (max(2757133580, (arr_9 [i_11])))));
                    var_36 *= min(((var_16 ? (arr_34 [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1]) : var_15)), (arr_34 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 1]));
                    var_37 = ((var_12 ? ((+(min((arr_28 [i_11 + 1] [i_11] [i_6] [i_2] [i_0] [i_0] [i_0]), (arr_26 [i_11] [i_11 + 1]))))) : -var_11));
                }
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    arr_48 [i_0] [i_2] [i_6] [i_12] [i_12] &= 63510;
                    var_38 = (arr_29 [i_0] [i_2] [i_6] [i_0]);
                    var_39 *= var_1;
                }
                arr_49 [i_0] [i_2] [6] [i_0] = (arr_38 [i_0] [9] [i_6] [9] [i_6] [i_6]);
                var_40 = (max(var_40, (((((((-3732275594481744567 ? var_4 : var_12))) & (arr_26 [i_2] [i_2])))))));
            }
        }
        var_41 = ((max((min((arr_21 [i_0] [0] [i_0]), (arr_2 [i_0]))), var_16)));
    }
    var_42 = (max((max(-1312853282, 0)), -1378653061));
    var_43 = var_2;
    #pragma endscop
}
