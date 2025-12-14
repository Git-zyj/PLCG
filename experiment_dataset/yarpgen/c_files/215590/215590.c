/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_5 | 1) <= var_14)) ? -228400866 : ((((-var_14 <= ((var_19 ? var_16 : 2097120)))))));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (min((arr_1 [i_0]), ((((arr_0 [i_0 - 2] [i_0 + 1]) == var_12)))));
        arr_4 [i_0 + 2] [i_0 - 1] = (((max((arr_0 [i_0 - 2] [i_0 + 2]), (arr_0 [i_0 + 2] [i_0 - 1]))) != ((((max(2097118, var_9)) != ((((arr_1 [i_0 + 1]) ? var_0 : (arr_0 [i_0] [i_0 + 2])))))))));
        var_21 = (~-var_14);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            var_22 = (((((var_8 >> (((arr_1 [i_2 + 2]) + 656850677))))) != (min((~var_1), (arr_2 [i_2] [i_2])))));
            arr_9 [i_1] = (((--1125899906842623) >> (((((((-(arr_7 [i_1])))) ? ((-2014200795 ? (arr_1 [0]) : 1)) : var_4)) + 656850705))));
            arr_10 [i_1] [i_1] = (((arr_5 [i_1] [4]) & (((arr_7 [i_2 - 1]) << (((arr_1 [i_2 + 1]) + 656850726))))));
            var_23 = (((var_6 < 11814935762578749892) | (((arr_2 [i_2 + 2] [i_2 + 2]) ? (arr_2 [i_2 + 2] [i_2 + 1]) : var_13))));
        }
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            arr_13 [i_1] [i_3] [i_3 - 1] = ((-((((((arr_6 [i_3 - 1]) ? (arr_8 [i_1] [i_3] [i_1]) : var_13))) / (arr_12 [i_1] [i_3])))));

            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                var_24 = (max(var_24, (((((((((arr_5 [i_3] [i_3]) && 1657068701776657539)) ? (-1685212854 - var_2) : ((var_10 ? -1685212854 : (arr_2 [i_1] [i_1])))))) ? (arr_1 [i_3 - 1]) : (min((arr_5 [i_4] [i_1]), -2097120)))))));
                arr_16 [i_1] [1] [i_3] [i_1] = ((min(var_14, (arr_14 [i_3] [i_3 - 1] [i_3]))));
                var_25 = (((arr_8 [i_4] [i_4 - 1] [i_4 - 1]) >> ((((~(arr_8 [i_4 - 1] [i_4] [i_4 - 1]))) + 132))));
                arr_17 [i_1] [i_3 - 1] [i_3] = (((((arr_2 [i_4] [i_3]) + 2147483647)) << (((max(((var_2 ? var_0 : var_18)), (arr_0 [i_3 - 1] [i_4 - 1]))) - 1708183835))));
            }
            var_26 *= (max(var_6, var_5));
        }
        var_27 = (min(var_27, ((((((var_12 >> (-var_2 + 59)))) ? (((1 ? -1643351640 : 9223372036854775807))) : (((arr_1 [i_1]) ^ ((1001769637 ? (arr_5 [7] [i_1]) : var_14)))))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                {
                    arr_25 [i_6] [i_6] [i_6] [i_6] = ((!((((arr_24 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6]) ? var_13 : (arr_24 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 - 1]))))));
                    var_28 = var_2;
                    var_29 = ((!((((arr_15 [i_6 + 2] [i_1] [i_6 + 2]) / (arr_12 [i_1] [i_1]))))));
                    var_30 = (((18054131479520624440 ? 6845004849526305097 : -2097131)) ^ 1);
                }
            }
        }
    }
    #pragma endscop
}
