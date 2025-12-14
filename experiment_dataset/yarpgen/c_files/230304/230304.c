/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 10;i_1 += 1) /* same iter space */
        {
            var_19 = (((((685012679 % (((arr_2 [i_0]) / var_10))))) ? ((max((arr_3 [i_0] [i_1 - 2]), (arr_3 [i_1 + 2] [i_0])))) : ((((min(var_12, var_16))) ? (max(var_3, (arr_4 [i_0] [i_0]))) : ((max(var_11, (arr_1 [i_0] [i_1]))))))));
            arr_6 [i_0] [i_1] = var_4;
        }
        for (int i_2 = 3; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_20 -= ((((0 ? 3 : 54940))) ? 65535 : ((-(arr_3 [i_0] [i_0]))));
            var_21 = (max(var_21, -var_12));
            arr_9 [i_0] [i_0] [i_2] = (arr_3 [i_0] [i_0]);
            var_22 = ((((max(1732398479, (((arr_2 [i_0]) | 0))))) ? (max(((max(0, 49))), ((var_15 ? (arr_5 [i_0]) : var_6)))) : ((((arr_1 [i_0] [i_2]) ? ((-(arr_8 [i_0] [i_0]))) : var_15)))));
        }
        arr_10 [i_0] = (((var_1 * ((-(arr_5 [i_0]))))) * ((((((arr_1 [i_0] [i_0]) << (arr_0 [i_0]))) >= ((var_8 ? var_3 : (arr_8 [2] [i_0])))))));
        var_23 += (120 / 125);
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_24 = (max((((!(arr_13 [i_3])))), (~var_9)));
        arr_14 [i_3] = ((((max(4402, var_8))) ? var_13 : (max((((arr_11 [i_3] [i_3]) ? var_9 : (arr_13 [i_3]))), ((max(var_16, var_9)))))));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                {
                    arr_20 [i_5] [i_5 - 1] [i_4] [i_5 - 1] = ((((min((max(12274155850227596693, 18446744073709551615)), 27851))) ? ((var_3 ? var_13 : (~var_2))) : ((56 ? (arr_11 [i_3] [i_4]) : (arr_17 [i_3] [i_3] [i_5])))));
                    var_25 |= max((1879153387 / var_2), (arr_16 [i_3] [i_3] [i_3]));
                    arr_21 [i_4] [i_4] = (arr_12 [i_3]);
                    var_26 = var_0;
                }
            }
        }
        var_27 = var_8;
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 15;i_7 += 1)
            {
                {
                    var_28 *= (((-((max(var_1, var_16))))));
                    var_29 -= (arr_18 [16] [i_3] [i_7]);
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 16;i_8 += 1)
    {

        /* vectorizable */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_30 &= 0;
            var_31 |= (arr_31 [i_9] [i_9]);
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_32 = ((((2147483647 ? 0 : 1)) | (max(var_9, (min(var_5, (arr_23 [i_8] [i_8] [i_8])))))));
            arr_35 [i_8] = var_2;
            var_33 &= ((+(((0 * 4064882145) ? (arr_29 [i_8] [1]) : var_3))));

            /* vectorizable */
            for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
            {
                arr_39 [i_8] [i_10] [i_8] [i_8] = (arr_24 [i_8 - 1] [i_8 - 1]);

                for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        var_34 = ((3746332378 ? ((var_6 ? (arr_44 [i_8] [i_10] [i_10] [i_12] [i_11]) : var_16)) : (arr_22 [i_8 + 1] [i_8 + 1])));
                        arr_45 [i_8] [i_8] [i_11] [i_12] [i_12] [i_13] = (((arr_32 [i_13] [i_12] [i_8]) ? (((arr_18 [i_8] [i_8] [i_8]) | var_6)) : ((((arr_30 [i_8] [i_8]) << var_8)))));
                    }
                    arr_46 [i_8] [i_8] [i_12] [i_8] = ((((((var_6 ? (arr_37 [i_8 - 2] [i_10] [i_8]) : var_13)) + 2147483647)) << ((((((var_2 ? (arr_24 [i_8] [i_8]) : var_13)) + 32550)) - 18))));
                }
                for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                {
                    arr_50 [10] |= (~255);
                    var_35 = var_2;
                    var_36 = (((~var_11) * (((arr_16 [i_10] [i_8] [i_14]) * var_3))));
                }
                var_37 = (arr_17 [i_8] [1] [i_8]);
            }
            for (int i_15 = 0; i_15 < 17;i_15 += 1) /* same iter space */
            {

                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    var_38 = (min(var_38, ((((max(var_4, var_11)))))));
                    var_39 = (min(var_39, var_0));
                }
                arr_56 [i_8] [i_10] [i_8] = max(200444408, 0);
            }
            /* vectorizable */
            for (int i_17 = 1; i_17 < 15;i_17 += 1)
            {
                arr_59 [i_8] [i_8] [13] [i_8 - 1] = (+((var_13 ? (arr_22 [i_8] [i_8]) : var_0)));
                arr_60 [i_8] [i_10] [i_17 + 1] [i_8] = (((((var_16 ? -1722431963 : (arr_19 [i_8] [i_8] [i_8])))) ? (arr_19 [i_10] [i_10] [i_8]) : ((((var_9 || (arr_51 [i_8] [i_8] [i_8])))))));
            }
        }
        var_40 = var_0;
    }
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        arr_63 [i_18] [i_18] = var_4;
        arr_64 [i_18] [i_18] = (i_18 % 2 == 0) ? ((((((var_12 << (((((var_16 + 2147483647) << (((((arr_29 [i_18] [i_18]) + 1939909313)) - 30)))) - 2147462162))))) || var_5))) : ((((((var_12 << (((((var_16 + 2147483647) << (((((((arr_29 [i_18] [i_18]) - 1939909313)) - 30)) + 1250031711)))) - 2147462162))))) || var_5)));
        arr_65 [i_18] = ((!((((arr_18 [i_18] [i_18] [i_18]) ? 1 : (arr_41 [i_18]))))));
    }
    #pragma endscop
}
