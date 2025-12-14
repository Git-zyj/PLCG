/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = 5;
        var_11 += ((((arr_2 [i_0]) + 1)));
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_12 = -0;
        arr_7 [i_1] [i_1] = ((var_1 ? (arr_0 [i_1]) : ((((arr_0 [i_1]) && var_2)))));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_13 = (((((max(var_4, var_5))) ? -19 : (arr_0 [i_1]))));
            var_14 = 1;
        }
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            arr_16 [i_1] [i_3] [i_1] = ((~((((arr_11 [i_1] [i_1] [i_1]) ? var_10 : 1)))));
            var_15 = (min(var_15, (((((((arr_5 [i_1]) && (arr_0 [1]))))) == (arr_4 [i_1] [i_1])))));
        }
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            arr_19 [i_1] = (((arr_5 [i_4 - 1]) ? (((arr_15 [i_1]) >> (arr_14 [i_4 + 1] [i_1] [i_1]))) : (((((5 << (arr_10 [6])))) ? ((var_5 ? var_5 : (arr_6 [i_1]))) : (arr_10 [i_1])))));
            arr_20 [i_1] [i_1] = ((((max(18446744073709551599, (arr_9 [i_4])))) ? ((((((464685291 ? (arr_5 [i_1]) : 0))) ? (((arr_1 [i_4 + 1]) + var_7)) : (arr_0 [i_1])))) : (((-1525652837629668769 + 9223372036854775807) << (244 - 244)))));
            var_16 = (((arr_14 [i_4 - 1] [i_4 - 1] [i_4 - 1]) / (3830282004 / 1)));
            var_17 = (min(var_17, ((((arr_17 [0]) >> ((((18446744073709551599 >> (18446744073709551599 - 18446744073709551549))) - 16364)))))));
        }
        var_18 = (arr_9 [5]);
        var_19 = ((3830282005 ? ((max((min(1632228752, (arr_1 [7]))), -1))) : (1 / 61)));
    }
    var_20 = ((((((var_10 | 1) ? (3830282005 * 47043) : (((var_3 ? var_1 : var_1)))))) && (((-(var_7 / 1811618169))))));
    #pragma endscop
}
