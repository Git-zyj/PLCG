/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = var_8;
        var_12 *= (((((-(arr_0 [i_0])))) ? (max((arr_0 [i_0]), (arr_0 [i_0]))) : ((max(-29, 4294967292)))));
        var_13 = (max(((-var_0 | (arr_2 [i_0] [i_0]))), (((((4294967276 ? var_8 : var_3))) ? var_8 : (((arr_3 [i_0] [i_0]) ? var_0 : var_7))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((+(min(((((arr_5 [11]) / (arr_4 [i_1])))), (max(var_7, 4))))));
        var_14 = (max(3, (((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1])))));
        var_15 = ((((((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_5 [i_1])))) ? -var_9 : (max(((977447441 ? -8940748446303365204 : 170)), ((-79 ? (arr_4 [i_1]) : -2177111990722268266))))));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_16 = (min(var_16, (min((max((((arr_5 [17]) ? 1405784817 : 6)), (arr_4 [i_1]))), (((((arr_4 [i_1]) ? 32755 : var_1))))))));
            arr_9 [i_1] = var_0;
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_17 |= -var_0;
            arr_12 [i_1] [i_3] = (((((((max(4, var_1))) ? (max(2147483647, 12)) : -1523723936))) & ((((min(var_8, (arr_4 [i_1])))) ? (((max(1, var_2)))) : (max((arr_7 [i_1]), var_6))))));
        }
        var_18 = -1;
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        var_19 = (min(var_19, (--24023)));
        var_20 = (((var_1 ? (arr_15 [i_4]) : (arr_15 [i_4]))));

        for (int i_5 = 2; i_5 < 22;i_5 += 1)
        {
            var_21 ^= ((-(max((((arr_7 [i_4]) ? var_6 : var_1)), (arr_10 [i_5 - 1] [i_5 + 3] [i_5 + 1])))));
            var_22 = (max((max((arr_14 [i_4] [i_4]), var_8)), -var_0));
            var_23 = (max((((1270598125 ? 14723 : -2147483647))), ((((((arr_10 [i_4] [i_4] [i_4]) ? var_5 : 734104822))) ? (((max(-1, 53)))) : (arr_17 [i_4] [i_5 + 1] [i_4])))));
            var_24 = 2074129619;
        }
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            arr_22 [i_4] [i_4] = (-(-var_4 || var_8));
            var_25 = (max((max((((arr_7 [i_6]) ? 16458431184640455149 : -3)), 1)), ((((((-(arr_10 [i_4] [i_4] [i_4])))) ? (max(99383207, var_4)) : -var_9)))));
            var_26 = (max(var_26, (arr_10 [i_4] [i_6 + 1] [i_6 + 3])));
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 24;i_7 += 1)
        {
            var_27 = (max(var_27, (((var_7 ? (((~(arr_11 [i_4])))) : -2416411780247550956)))));
            var_28 = (max(var_28, (((22456 ? 641682204294655370 : ((122 ? 1588172904521001825 : 2097151)))))));
            var_29 = ((((((arr_15 [i_4]) % var_8))) ? ((1071910105788342745 ? 2890868240 : 4364618027311157018)) : 2860390833993680518));
        }
        var_30 += (((((-(var_1 & var_2)))) ? (((-var_9 & (arr_15 [i_4])))) : (min((((arr_11 [i_4]) ? var_6 : var_7)), ((max(var_2, 1229735953)))))));
        var_31 = (((((-((1284003613 ? -22456 : (arr_18 [i_4])))))) ? ((((((min(1, var_2))) > ((var_9 ? 2147483635 : 1)))))) : ((-207 ? (((((arr_13 [i_4]) == -308339599)))) : (max((arr_14 [i_4] [i_4]), (arr_4 [i_4])))))));
    }
    #pragma endscop
}
