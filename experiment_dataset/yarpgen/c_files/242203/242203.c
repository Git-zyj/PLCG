/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((min(var_3, 63657)))) << (13459 < -66969762)));
    var_13 *= ((((max(44114, -15))) + (min((var_6 & 0), ((max(1, var_11)))))));
    var_14 -= var_10;
    var_15 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = 21423;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_8 [i_1] [i_1] [i_1] = ((((((arr_7 [4]) ? var_3 : (arr_3 [i_0])))) ? 160 : 58779));
            var_16 = (min(var_16, (0 / 21438)));
            var_17 *= (((arr_5 [i_0] [i_1]) ? (arr_1 [i_0]) : ((10 / (arr_0 [i_0])))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_18 ^= (((arr_6 [i_0] [i_0]) ? (arr_6 [i_0] [i_2]) : var_4));
            var_19 |= ((var_8 ? 1 : var_5));
            arr_11 [i_0] [i_0] = (arr_5 [i_0] [i_0]);
            var_20 = ((43492 ? 21420 : var_9));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_21 = var_0;
            var_22 = (arr_13 [i_0]);
            var_23 *= ((!(arr_3 [i_0])));
            var_24 -= (((arr_5 [i_0] [i_3]) > 240));

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                var_25 = (var_1 ? var_7 : var_11);
                arr_18 [i_4] [i_3] [i_4] [i_0] = ((1 ? var_10 : 64786));

                for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                {
                    arr_22 [8] [i_4] = (((arr_3 [i_5]) ? (arr_10 [i_0] [6] [i_4]) : var_6));
                    var_26 *= ((var_8 ? 89095528 : (arr_12 [i_0] [i_0] [i_0])));
                    var_27 = var_7;
                }
                for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    var_28 = (1 == (arr_16 [i_6]));
                    var_29 = (((arr_15 [i_0]) | (arr_24 [i_6])));

                    for (int i_7 = 2; i_7 < 8;i_7 += 1)
                    {
                        var_30 = ((((64870 ? (arr_14 [i_0]) : (arr_27 [1] [i_3] [i_4] [i_7] [i_7])))) ? (!1) : (arr_6 [i_0] [i_7 - 2]));
                        arr_30 [i_6] [i_6] [i_4] [i_6] [i_7 + 3] [i_6] = -0;
                        var_31 ^= ((!(arr_13 [i_7 + 3])));
                    }
                    var_32 = 44098;
                    var_33 = (var_9 > 4);
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                {
                    var_34 = 89095528;
                    arr_34 [i_3] [i_3] [i_3] [1] = (var_3 && (((var_5 ? (arr_31 [i_0] [10] [i_4] [i_4] [i_8]) : var_1))));
                    arr_35 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = var_6;
                }
                var_35 = (~15574);
                arr_36 [6] [i_3] [i_4] = ((!1) || ((((var_6 + 2147483647) >> (((arr_0 [i_0]) - 103))))));
            }
            for (int i_9 = 2; i_9 < 7;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_36 = (max(var_36, (arr_26 [i_0] [i_9] [i_9])));
                    var_37 |= ((var_0 ? (arr_26 [i_9] [i_9 + 2] [i_9]) : 1));
                }
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    var_38 = (max(var_38, var_11));
                    var_39 = ((arr_28 [i_9] [i_9] [i_9] [i_11] [i_9 - 1] [i_3] [2]) ? 210 : 32512);
                    var_40 = (max(var_40, (65523 + -89095528)));
                    arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (1 >= (arr_38 [i_9 - 2] [i_9 - 2] [i_9]));
                }
                arr_45 [i_0] [i_3] [i_9] [5] = ((var_10 ? 4 : (arr_28 [i_0] [i_3] [i_3] [i_9] [i_9] [i_3] [7])));
                var_41 *= ((-(arr_7 [i_9 + 4])));
                var_42 = (max(var_42, (((var_6 || (arr_20 [2] [i_0] [i_9 - 2] [i_0]))))));
                var_43 = ((1440216612 ? 56333 : 182));
            }
        }
        for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
        {
            var_44 = (max(var_44, (1 == var_4)));
            var_45 = (max(var_45, 0));
            var_46 = (max(var_46, (!-218977140)));
        }
        var_47 = var_3;
        var_48 = (((1 / 1) ^ var_5));
    }
    for (int i_13 = 1; i_13 < 7;i_13 += 1)
    {
        var_49 = (((var_5 ? (165 >> 0) : (~-117))));
        var_50 *= ((((65535 ? 2147483647 : var_4)) < (min(((239 ? var_7 : 1)), ((min(27, 65532)))))));
        var_51 = (min((((arr_26 [i_13] [i_13] [i_13 - 1]) ? (arr_26 [i_13] [0] [i_13 + 3]) : var_5)), 118));
        var_52 = (((((((((arr_1 [i_13]) / 17011))) ? var_6 : var_9))) ? (var_8 ^ 9904) : var_8));
    }
    #pragma endscop
}
