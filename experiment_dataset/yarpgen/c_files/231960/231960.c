/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((-2147483647 - 1) ? (arr_2 [i_0] [i_0]) : (max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))));
        var_14 = var_2;
        arr_4 [6] |= -1;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_15 = (arr_8 [i_2]);
            var_16 |= (arr_9 [10] [i_2]);
            var_17 = (((arr_9 [i_1] [i_2]) ? ((195 >> (((arr_8 [i_1]) - 24704)))) : (var_9 / var_8)));
            arr_10 [i_2] = var_4;
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_14 [i_3] [i_3] = 249;
            arr_15 [i_3] [i_1] [i_3] = ((-(195 & 197)));
            arr_16 [i_3] = (((((0 & (arr_13 [i_3] [i_3] [i_3])))) ? ((var_11 ? 457974217780398275 : (arr_8 [i_1]))) : (arr_9 [i_3] [i_1])));
            var_18 |= 457974217780398290;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_19 = (arr_18 [i_1]);
            var_20 = ((536862720 + ((((!(arr_12 [i_1] [i_4])))))));
        }
        var_21 = ((((((min((-32767 - 1), var_3)) / (((((arr_13 [i_1] [i_1] [i_1]) != (-2147483647 - 1)))))))) / (((arr_5 [i_1]) ? (arr_12 [i_1] [i_1]) : (arr_12 [i_1] [i_1])))));
        var_22 = (max(var_22, (((1089735533658105350 ? 218 : (-2147483647 - 1))))));
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        arr_22 [i_5] = (((min((arr_12 [i_5 - 1] [i_5 - 1]), (arr_6 [i_5 + 1]))) >> (((arr_6 [i_5 + 1]) - 65448))));
        arr_23 [i_5] [i_5 + 1] = (((~(((-457974217780398294 + 9223372036854775807) >> (82 - 34))))));
        arr_24 [8] |= (((((var_5 ? (arr_5 [i_5 + 1]) : (arr_18 [i_5 + 1])))) ? 18 : (arr_5 [i_5 + 1])));
    }
    var_23 = (((((~var_8) ? var_4 : var_5)) != (((var_11 / 18446744073172688881) ? var_6 : 5295))));
    var_24 |= ((((((var_2 >> (-457974217780398276 + 457974217780398301))))) ? (((((~-2147483633) || (var_7 & 2147483626))))) : ((var_0 ? var_6 : (var_5 / var_8)))));
    var_25 |= (((((var_3 >> ((var_12 >> (var_6 - 10679471437064785228)))))) & ((max(var_3, 536862718)))));
    #pragma endscop
}
