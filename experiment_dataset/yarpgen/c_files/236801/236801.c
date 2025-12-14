/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_10 = (min(var_10, ((((((((var_8 ? (arr_1 [i_0]) : 16777215))) | (-9223372036854775807 - 1))) >> ((((-(arr_1 [i_0]))) + 11870)))))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_11 = (!85);
            arr_5 [i_1] [4] = (~2032034259);
        }
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_12 += ((+((1193316588 & (((arr_7 [8]) ? 38 : var_8))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        var_13 = (max(var_13, (arr_15 [i_2] [i_2] [6] [i_4] [i_5] [i_5])));
                        var_14 = ((((min(var_2, 43819))) & ((var_5 << ((((var_8 ? var_4 : var_8)) + 4560785351371559559))))));
                        arr_16 [i_2] [6] [i_4] = (min(var_7, ((max(var_9, -1)))));
                        arr_17 [i_2] [14] [i_2] [1] [i_5] = (min((arr_11 [3] [i_4] [i_5]), ((((arr_12 [i_2] [i_3] [i_4] [i_5]) && (!115))))));
                        var_15 = ((-(min(110, ((40857 ? var_5 : var_7))))));
                    }
                }
            }
        }
    }
    var_16 = (max(var_16, ((((((var_9 ? var_4 : -3)) / ((var_3 ? var_1 : 0)))) / (min((max(var_9, var_1)), (((14623 ? var_3 : 42294)))))))));

    for (int i_6 = 3; i_6 < 20;i_6 += 1) /* same iter space */
    {
        var_17 -= ((((((arr_21 [i_6]) || var_5)))) ? ((((arr_21 [i_6]) ? ((var_4 ? 24677 : 236)) : (13267437510155170046 == 1)))) : (((((((arr_19 [12]) >= 9223372036854775807)))) * (24676 / var_7))));
        var_18 = (max(var_18, (((((var_6 < (arr_19 [1])))) != ((max(13431, (arr_19 [6]))))))));
    }
    for (int i_7 = 3; i_7 < 20;i_7 += 1) /* same iter space */
    {
        var_19 = (((((var_1 / 1) * (29888 / 1193316581)))) ? (((var_1 / var_8) / var_2)) : ((min(var_8, var_7))));

        for (int i_8 = 4; i_8 < 19;i_8 += 1) /* same iter space */
        {
            var_20 = (min(var_20, (!274877906432)));
            arr_27 [i_7 - 3] [i_8] = var_6;

            for (int i_9 = 2; i_9 < 19;i_9 += 1)
            {
                arr_31 [i_7] [i_8 - 3] [17] [i_8] = var_6;
                var_21 = (min(var_21, ((max((((((((arr_28 [i_7 - 1] [i_7 - 1] [i_9] [21]) ? 6 : (arr_21 [3])))) ? ((var_5 ? var_5 : var_7)) : (arr_26 [i_7 - 1] [i_8])))), (((arr_30 [i_8 - 1] [20]) ? (arr_24 [i_7 - 1] [i_7 - 1]) : (arr_24 [i_8] [i_7]))))))));
            }
            for (int i_10 = 1; i_10 < 21;i_10 += 1)
            {
                var_22 = (var_5 ? var_2 : (arr_33 [i_7] [i_8] [i_10 + 1]));
                var_23 = var_6;
            }
            arr_35 [i_8] [i_8 - 1] [i_8 + 3] = (max((((-2 ? (((arr_32 [i_7] [5] [i_8 - 3]) & (arr_28 [8] [19] [i_8] [1]))) : (min(var_5, var_2))))), ((-3601020300397169857 % (arr_22 [i_8 - 2] [i_7 - 1])))));
            arr_36 [i_8] [i_8] = ((((-87 ? 76 : (3221225472 * 134217726)))) ? (((((var_0 ? var_3 : 53063))))) : ((max(var_2, (arr_24 [i_7] [i_8 - 4])))));
        }
        for (int i_11 = 4; i_11 < 19;i_11 += 1) /* same iter space */
        {
            arr_40 [i_11] [i_7 + 2] [10] = (((((var_3 ? ((var_2 ? var_2 : var_7)) : (arr_30 [10] [10])))) ? (arr_18 [12] [i_7 + 2]) : var_3));
            arr_41 [4] [i_7] = (min(((var_8 ? (!var_0) : (((arr_26 [i_7] [i_11]) ? 2323817756191843680 : -847158332)))), (var_9 ^ -113)));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 20;i_13 += 1)
                {
                    {
                        arr_46 [i_7] = (((~(arr_45 [i_7 - 2] [i_7 - 2] [12] [1]))));
                        var_24 = (max(var_24, var_0));
                    }
                }
            }
        }
        var_25 = (max(var_25, ((((16542 ? ((57324 ? 44 : 4294967295)) : -16))))));
        arr_47 [i_7 - 2] = (arr_23 [2]);
        var_26 = (max(var_26, (~1)));
    }
    var_27 = ((((max(3072, 1))) ? (min(var_1, 6646)) : (min(var_1, var_1))));
    var_28 = ((var_1 ? (((((-6 ? 1 : var_1))) ? var_3 : (min(5204477512951880664, var_3)))) : (((var_2 ? 8176 : (var_1 || var_5))))));
    #pragma endscop
}
