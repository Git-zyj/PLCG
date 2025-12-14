/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0 + 1] &= (((arr_1 [i_0 + 1]) % (~203)));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_13 = var_6;

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                var_14 &= (max(((+((max((arr_5 [i_0] [i_1]), 64))))), ((~((var_1 ? (arr_4 [1]) : 255))))));
                var_15 = ((-(884141595 / 253)));
                var_16 = ((-((~(~742627766)))));
                var_17 = var_2;
            }
            arr_10 [i_0] [10] = (3410825700 * 0);

            /* vectorizable */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_18 = ((8437023716605512108 ^ (arr_5 [i_0 + 1] [8])));
                var_19 ^= 0;
                var_20 = ((~(arr_0 [i_0 + 1] [i_0 - 1])));
            }
        }
        var_21 = 192;
    }

    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_16 [23] = (+(max((~1), (min((arr_13 [6] [6]), (arr_14 [i_4]))))));
        var_22 *= (((var_3 >= (arr_14 [i_4]))));

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {

            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                var_23 = (!0);
                arr_21 [i_4] [i_5] [i_5] = (!var_6);
            }
            var_24 = (max(var_24, ((min((((max(var_1, 1)))), (min((max((arr_18 [0]), (arr_15 [i_5]))), ((max((arr_17 [i_4] [i_4] [1]), var_9))))))))));

            for (int i_7 = 1; i_7 < 24;i_7 += 1)
            {
                arr_24 [i_4] [i_4] [i_5] = (arr_15 [1]);

                for (int i_8 = 1; i_8 < 24;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 3; i_9 < 22;i_9 += 1)
                    {
                        arr_32 [i_5] [i_5] [i_7] [i_5] [i_9] [i_7] [i_7] = 6;
                        var_25 ^= 1297283585;
                    }
                    for (int i_10 = 3; i_10 < 22;i_10 += 1)
                    {
                        var_26 = ((!(1 + 64)));
                        var_27 = (~((~(((arr_27 [i_4] [i_4] [i_4] [i_4]) ? 253 : (arr_26 [i_8]))))));
                    }
                    arr_36 [i_5] [i_5] [i_7] [i_5] = 64;

                    for (int i_11 = 2; i_11 < 24;i_11 += 1)
                    {
                        var_28 ^= ((-(max((arr_33 [7] [7] [i_7] [i_8] [i_11]), (~18446744073709551615)))));
                        arr_40 [i_5] [i_5] = ((((((((arr_13 [i_7] [i_11]) - (arr_19 [i_5] [i_5] [i_5] [i_8]))) / ((min((arr_28 [18] [i_5] [i_7] [i_8] [i_11 - 1] [i_7] [i_11]), 14)))))) ? ((var_1 ? 38 : ((max((arr_31 [i_4] [i_5] [i_7] [i_5] [i_11]), var_6))))) : (min((min(var_3, var_10)), ((max(var_2, var_8)))))));
                    }
                    for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                    {
                        arr_45 [i_5] [i_8] [i_8] = (-var_0 < -1);
                        var_29 = ((!((((var_8 / 15) ? ((var_0 ? (arr_31 [22] [22] [i_7 + 1] [16] [i_12]) : (arr_44 [i_5]))) : ((~(arr_35 [i_4] [i_4] [i_4] [i_4] [i_4] [8]))))))));
                        var_30 &= (max(179, 39));
                        var_31 = (min(var_31, (((max((arr_26 [i_4]), (arr_42 [i_5] [i_5] [i_7] [i_7] [i_12])))))));
                        arr_46 [23] [i_4] [i_5] [i_5] [i_8] [i_12] [i_12] = (max(-var_1, ((((var_2 ? 1272553097 : (arr_17 [i_5] [i_7] [i_8 - 1])))))));
                    }
                    for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
                    {
                        arr_50 [7] [i_5] = (~(((var_6 && var_6) ? 1829348280 : ((max(3, 1))))));
                        var_32 -= -206;
                        var_33 -= 1;
                        var_34 = ((((-(arr_48 [i_4] [i_5] [i_4] [i_8] [i_5] [i_5]))) >= ((((arr_18 [i_5]) ? var_7 : var_3)))));
                    }
                    var_35 = (max((((!((min(var_2, var_0)))))), (min((((arr_18 [i_5]) ? -97 : -1)), (~65535)))));
                    arr_51 [20] [2] [i_7] [i_8] |= (max(((-((~(arr_42 [i_8] [i_8] [18] [i_8] [i_8]))))), (arr_33 [i_4] [9] [i_4] [i_4] [i_5])));
                }
                /* vectorizable */
                for (int i_14 = 1; i_14 < 24;i_14 += 1) /* same iter space */
                {
                    var_36 = var_8;
                    var_37 = (((((var_8 ? var_1 : var_9))) ? (var_9 * -24) : (((arr_19 [i_5] [i_5] [i_7 + 1] [i_14]) + var_8))));
                    var_38 = ((126 ? (arr_17 [i_7 + 1] [i_14 - 1] [i_14 - 1]) : 50876));
                    arr_56 [24] [6] [i_7] [i_14] [6] [i_5] = (87 / 123);
                }
                for (int i_15 = 1; i_15 < 24;i_15 += 1) /* same iter space */
                {
                    var_39 ^= (max((~-127301511), ((~(arr_37 [i_7 + 1] [i_15 - 1])))));
                    arr_60 [i_4] [i_5] [i_5] = (max(((((min(0, 12294123044081559522))) ? (min(var_3, var_0)) : 113)), (arr_33 [i_4] [i_4] [i_4] [18] [i_4])));
                    arr_61 [i_5] [i_5] = ((167 != ((+((49 ? (arr_18 [i_5]) : (arr_44 [i_5])))))));
                    var_40 &= var_4;
                }
                var_41 = (var_3 >= 23496);
                var_42 ^= (((((-1 ? ((max(var_6, (arr_18 [14])))) : 4))) ? ((+((max((arr_48 [i_4] [2] [i_5] [4] [i_7] [i_7]), var_11))))) : -21));
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 24;i_17 += 1)
                {
                    {
                        var_43 = -114;
                        var_44 = ((!(((((253 ? (arr_64 [i_4] [i_5] [i_5]) : var_6))) && (((4294967295 ? 45 : 0)))))));
                        var_45 ^= ((~(max(241, var_8))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
