/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(32767, var_5));
    var_15 = var_7;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 4] = var_10;
        var_16 = 0;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_17 = (-2147483647 - 1);

        /* vectorizable */
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            arr_8 [i_1] = ((~(arr_6 [i_2 + 3] [i_2 + 3])));
            arr_9 [i_1] = (!4294967295);
            arr_10 [i_1] [2] = var_8;
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_18 = (-1260215332 - 1);

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                arr_17 [1] [i_4] = ((-var_10 != (((-(arr_12 [i_4]))))));
                arr_18 [i_1] [i_1] [i_1] [i_1] = -637167080;
            }
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                arr_23 [i_1] = ((((min(var_1, (arr_11 [i_1] [i_3] [i_5]))))));
                arr_24 [0] [i_3] [i_3] [i_1] = (arr_5 [i_1] [i_3]);
                arr_25 [i_1] [i_3] [i_5] = var_2;

                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    arr_29 [i_6] = (((arr_26 [i_6]) ? ((-125 - (!432915028))) : -126));
                    var_19 = (((~4294967295) > ((((!(-46 && 1)))))));
                    arr_30 [i_6] [i_6] [i_6] [i_1] = ((((-((-(arr_20 [0]))))) * 1));
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_20 = 107;

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_21 = (max(var_21, (((((((arr_3 [i_1]) != (~var_2)))))))));
                        var_22 |= 19407;
                        var_23 = (arr_35 [i_1] [i_3] [i_5] [i_7] [i_8]);
                        var_24 = (min(var_24, 0));
                    }
                    for (int i_9 = 4; i_9 < 11;i_9 += 1)
                    {
                        var_25 = (max(((max(245680855, (arr_37 [i_3] [i_5] [i_7] [i_9 - 2])))), ((min(1, 866591090)))));
                        var_26 = ((((!(!var_7))) ? (arr_39 [3] [i_9] [i_9 - 3] [i_9 + 1] [i_9 - 4] [i_9 - 3]) : -1559162399));
                    }
                    var_27 = (max((18446744073709551615 <= 18446744073709551608), (arr_4 [i_1])));
                    arr_40 [i_5] [i_5] [0] [6] = (max(1, 163));
                }
                for (int i_10 = 2; i_10 < 10;i_10 += 1)
                {
                    arr_43 [2] [i_3] [1] [i_5] [i_5] [i_10 - 2] = (~0);
                    arr_44 [1] [8] [7] [i_10] [4] [i_5] = ((23857 ? 4294967295 : (!0)));
                    arr_45 [i_1] [i_5] = 4294967295;
                }
            }
        }
        for (int i_11 = 3; i_11 < 10;i_11 += 1)
        {
            arr_48 [i_11 + 2] = (((9223372036854775807 ? (arr_39 [i_1] [i_1] [7] [i_11] [i_11 - 3] [i_11 + 1]) : var_10)));

            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                var_28 = (max(var_28, ((max(28318, (((2147483647 <= ((2753619426 ? (arr_22 [5]) : 2147483647))))))))));
                arr_52 [i_11] [i_11 - 2] [i_11 + 2] = (252 == var_3);
                arr_53 [i_12] [i_11] [i_1] = ((min(((var_9 ? 4294967295 : 2977)), ((max(-222572972, var_13))))));
                arr_54 [3] [i_12] [i_12] [i_12] = (-127 - 1);
            }
        }
        var_29 = (min((arr_46 [i_1] [i_1]), (max((arr_46 [11] [i_1]), (arr_46 [i_1] [i_1])))));
        arr_55 [i_1] = (min(37031, 19));
    }
    #pragma endscop
}
