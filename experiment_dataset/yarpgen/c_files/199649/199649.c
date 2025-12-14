/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((max(((var_7 ? var_10 : var_16)), -41)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 = ((var_5 ? (((arr_0 [i_0]) ? (((arr_0 [i_0]) ? var_1 : var_7)) : (((-1 || (-127 - 1)))))) : (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_4 [i_1] = ((~(1 + -42)));
            var_22 += (!(((var_0 ? ((-21 ? -19304 : 255)) : ((19304 ? 65535 : 14))))));
            var_23 = max((((((1266169959 ? (arr_1 [i_1]) : var_1))) ? (arr_3 [i_0] [i_1]) : 41)), (((37 ? (arr_3 [i_0] [i_0]) : ((65535 ? -7 : 16))))));
            arr_5 [i_1] [i_1] [i_0] = (((((!160) ? -3065959053984605767 : ((10430 ? -109 : (arr_1 [i_0]))))) * (arr_2 [i_0] [i_0] [i_0])));
            arr_6 [i_0] [i_0] [i_0] &= (arr_1 [i_1]);
        }
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        var_24 = ((-((min(var_17, var_5)))));
        var_25 = (min((((var_9 ? 9 : 0))), ((((max(var_15, var_6))) ? var_6 : (((-2125211582 && (arr_7 [i_2 + 1]))))))));

        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            var_26 = var_4;
            arr_14 [i_3] = ((((arr_7 [i_2 - 1]) ? (arr_12 [i_2 + 2] [i_3 - 1] [i_3 - 1]) : (arr_11 [i_2 - 1] [i_3 - 2]))));
            var_27 = (max(var_27, (((~(((1 && (((var_11 ? var_8 : var_18)))))))))));
        }
        /* vectorizable */
        for (int i_4 = 4; i_4 < 21;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_28 = (-2134 && var_12);
                        var_29 ^= ((var_10 ? (arr_16 [i_2 - 1]) : (((arr_15 [i_5]) ? var_14 : var_19))));
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        arr_27 [i_8] |= (arr_11 [i_2] [i_4 - 3]);
                        arr_28 [i_2] [i_6] [i_5] [i_5] [i_8] = -92;
                    }
                    arr_29 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = var_3;
                }
                arr_30 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] = (((arr_16 [i_2 + 1]) + var_6));
                var_30 = var_9;
                arr_31 [i_5] [i_4 - 2] [i_2] = ((((255 ? var_10 : var_9)) ^ (arr_15 [i_4 + 1])));
            }
            for (int i_9 = 1; i_9 < 22;i_9 += 1)
            {
                var_31 = (max(var_31, -var_19));

                for (int i_10 = 1; i_10 < 21;i_10 += 1)
                {
                    var_32 = var_10;
                    var_33 = var_18;
                }
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    var_34 = var_9;

                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        var_35 = (arr_32 [i_2 + 2] [i_4 - 3] [i_9 + 1]);
                        var_36 = var_11;
                        var_37 -= (~var_1);
                        var_38 = (~0);
                    }
                    var_39 = (arr_37 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_11] [i_4 + 2] [i_9 - 1]);
                }
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                var_40 -= -14;
                var_41 = (min(var_41, ((((var_17 ? var_16 : (arr_15 [i_2])))))));
            }
            var_42 = (min(var_42, var_8));
        }
    }

    /* vectorizable */
    for (int i_14 = 0; i_14 < 15;i_14 += 1)
    {
        var_43 = 32768;
        var_44 = (((~var_17) | ((65535 ? (arr_36 [i_14]) : var_7))));
    }
    var_45 = var_2;
    #pragma endscop
}
