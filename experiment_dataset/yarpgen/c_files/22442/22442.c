/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min(var_13, 1696171484))) - (((0 / var_4) * (((min(var_1, var_0))))))));
    var_20 = 3933197984;
    var_21 = (((((1400030583 ? 131 : (var_3 + var_3)))) ? ((((!(((var_10 ? var_3 : var_14))))))) : (((-32 != var_11) ? (max(478285007, 131)) : var_4))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_22 = (min(var_22, ((max((-127 - 1), 131)))));
        var_23 = (min(var_23, ((min((arr_2 [i_0]), (arr_1 [i_0]))))));
        var_24 -= (min(-828906167, (((!(arr_1 [i_0]))))));
        var_25 = (((arr_2 [i_0]) ? (min((arr_2 [i_0]), (arr_2 [i_0]))) : 79));
        var_26 -= (min((1383661113089719375 > 828906166), (max((arr_1 [i_0]), (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_6 [11] |= ((~(((((4294967295 ? (arr_4 [i_1]) : (arr_5 [i_1])))) ? (~0) : (arr_1 [i_1])))));
        var_27 = (arr_3 [8] [i_1]);

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_28 = (max(var_28, (arr_4 [i_1])));
                var_29 = (((!0) ? 48 : (arr_12 [i_2])));
                var_30 -= (max(0, var_15));
            }
            arr_13 [i_2] [i_2] [i_2] = (max((((arr_10 [i_1] [i_2] [i_2]) >> (((arr_10 [8] [i_2] [i_2]) - 1608032793)))), ((min((arr_1 [i_1]), (arr_1 [i_1]))))));
            arr_14 [i_2] [i_2] = (((((arr_8 [i_1] [i_2]) ? (arr_11 [i_2] [i_2] [8]) : (arr_4 [i_1]))) < ((((arr_12 [i_1]) ? ((max(250, 4))) : 0)))));
        }
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            arr_17 [8] [i_4] = 6170407054892372873;
            arr_18 [13] [i_1] [i_1] = (!(((((8362038240009033168 >> (3800193573 - 3800193572))) | (arr_11 [i_1] [12] [i_4 - 2])))));
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            arr_22 [14] = (arr_0 [i_5]);
            arr_23 [15] [i_1] [i_1] = (((((arr_9 [i_1] [i_5]) << (((arr_20 [i_1] [i_5] [i_1]) - 3671634428))))) ? (((arr_15 [i_1] [i_1] [3]) | (arr_7 [i_1] [i_1] [i_5]))) : (((((min(var_3, (arr_8 [i_1] [i_1])))) & var_0))));
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_31 = (((((~(arr_3 [i_1] [i_1])))) ? ((((!(arr_3 [i_1] [i_1]))))) : (arr_3 [i_1] [i_6])));
            arr_26 [i_1] [i_6] = (((arr_3 [i_1] [i_1]) ? (arr_8 [8] [i_6]) : ((~(max((arr_25 [i_1] [i_1]), 1147851401))))));
            var_32 = 1;
        }
        arr_27 [i_1] [i_1] = ((~(min((((arr_21 [i_1]) & (arr_11 [i_1] [i_1] [i_1]))), (arr_16 [i_1] [i_1] [10])))));
        arr_28 [i_1] = (((arr_25 [i_1] [i_1]) ? (arr_21 [2]) : (((((arr_3 [0] [10]) != 65531))))));
    }
    #pragma endscop
}
