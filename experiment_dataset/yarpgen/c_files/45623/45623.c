/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_10, ((1 ? 4 : (((1 ? 1 : 65523)))))));
    var_14 = ((!(((min(var_6, 1)) >= ((var_6 ? var_3 : var_9))))));
    var_15 = var_3;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 ^= var_2;
        var_17 = ((var_4 ? (max(1023, 20)) : ((((arr_1 [i_0]) - var_3)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_18 = ((((((arr_4 [i_1] [i_1]) ? (arr_3 [i_1]) : 250))) ? ((((!((min(var_12, var_5))))))) : (min(((var_9 ? var_11 : (arr_4 [i_1] [i_1]))), (arr_2 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_19 = ((!var_10) | (-9223372036854775807 - 1));
                    var_20 = (max(var_20, (arr_2 [11])));
                    var_21 = ((+(min((5 ^ var_4), 1))));
                }
            }
        }
        var_22 = ((-(((((var_4 / (-9223372036854775807 - 1)))) ? (((max(var_12, var_2)))) : 1))));
        var_23 = -8589934590;
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        var_24 = 6;
        var_25 = 16352;
        var_26 = (arr_3 [i_4 - 1]);

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                arr_18 [i_6] [i_6] = ((-((var_4 ? 4294967273 : (arr_9 [i_4])))));
                var_27 ^= (18446744065119617025 ? 0 : 23);
            }
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                var_28 = (min(var_28, (((!(arr_14 [i_4 - 2]))))));
                arr_21 [i_4 + 4] [5] [i_7] [3] = ((var_11 ? (arr_15 [i_4] [i_4 + 2] [i_4 - 2] [i_7]) : (arr_15 [i_4] [i_5] [i_5] [i_4 - 2])));
                var_29 &= (4294967283 ^ 247);
                arr_22 [i_4] [5] [i_7] [10] = var_1;
            }
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    var_30 = ((var_3 ? 1012 : 0));
                    var_31 = var_11;
                }
                arr_29 [i_4] [i_4] [i_4] = 1;
                var_32 = ((2305843009213693948 ? 3 : (arr_0 [i_4 + 2])));
            }
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                var_33 = (min(var_33, 1043));
                var_34 |= 111;
                arr_32 [i_4 + 4] [i_4] = (arr_12 [i_10]);
            }
            var_35 = -var_10;
            var_36 = (min(var_36, (1 <= 65493)));
        }
        for (int i_11 = 4; i_11 < 12;i_11 += 1)
        {
            var_37 = (-9223372036854775805 ? 127 : var_8);
            arr_36 [i_11] [5] = 1;
        }
        for (int i_12 = 1; i_12 < 1;i_12 += 1)
        {
            arr_40 [i_4] [i_12] = (arr_19 [i_4]);

            for (int i_13 = 1; i_13 < 13;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
                {
                    var_38 = 1;
                    arr_47 [1] [i_13] [i_13] &= (((arr_16 [i_4] [i_4] [i_13] [i_4]) ? (arr_16 [i_4] [i_12] [i_13] [i_14]) : var_12));
                    var_39 = -var_8;
                    var_40 -= (!23);
                }
                for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
                {
                    arr_52 [i_13 + 1] [6] [i_13 + 1] [i_13 + 1] |= ((-9223372036854775796 % (arr_11 [i_4 - 1])));
                    arr_53 [i_4 + 1] [i_12 - 1] [i_15] = (((arr_13 [i_4 + 1]) + var_6));
                    var_41 = (max(var_41, -0));

                    for (int i_16 = 3; i_16 < 13;i_16 += 1) /* same iter space */
                    {
                        var_42 = ((~(arr_37 [i_13 + 1] [i_13 - 1] [i_13 - 1])));
                        var_43 += var_2;
                        var_44 += ((var_3 ^ (arr_14 [i_13 - 1])));
                        arr_58 [11] [i_16] [1] [i_16] [i_16 + 1] = ((((-127 - 1) != 2305843009213693956)) ? var_5 : (-9223372036854775807 - 1));
                        var_45 = (((236 ? (-2147483647 - 1) : 31)));
                    }
                    for (int i_17 = 3; i_17 < 13;i_17 += 1) /* same iter space */
                    {
                        var_46 = (arr_55 [i_4 + 4] [i_12 - 1] [i_13 + 1] [i_17 - 1]);
                        var_47 += (arr_27 [i_12 - 1] [i_13 - 1] [i_17 + 1] [11] [i_17]);
                        var_48 = (~-115);
                    }
                    for (int i_18 = 3; i_18 < 13;i_18 += 1) /* same iter space */
                    {
                        var_49 = ((233 ? 125829120 : (var_9 > 1)));
                        var_50 = 32736;
                        var_51 = (min(var_51, (arr_26 [i_4 - 1] [i_4 - 2])));
                    }
                }
                arr_64 [i_4] [i_12] [i_13] = (((arr_7 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 + 1]) - 23));
                var_52 = var_5;
                var_53 += var_0;
            }
            var_54 += var_12;
        }
        for (int i_19 = 0; i_19 < 14;i_19 += 1)
        {
            arr_67 [i_4 + 4] [i_19] = (10 || var_2);
            arr_68 [i_19] [i_4] = (((arr_54 [i_4 + 3] [i_4 - 2]) > var_11));
            var_55 = (((arr_8 [i_4 + 2] [15]) ? 29 : (arr_8 [i_4 + 2] [i_19])));
            var_56 = ((65526 ? (-2147483647 - 1) : (!var_3)));
        }
    }
    #pragma endscop
}
