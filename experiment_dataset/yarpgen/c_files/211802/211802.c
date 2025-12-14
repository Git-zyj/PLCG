/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_16 = (arr_2 [i_0]);
        arr_4 [i_0] = ((37807 / ((min(27729, (arr_3 [i_0 + 1] [i_0 + 2]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 = (min(var_17, (((((((((-125 + 2147483647) << (16467059169633067355 - 16467059169633067355)))) / (((arr_5 [4] [i_3]) ? -4306825577508418492 : (arr_1 [i_0]))))) != ((max((arr_11 [i_0] [i_2] [i_2] [i_2] [i_2] [i_2]), (17480 + 23758)))))))));
                        arr_13 [1] [i_1] [i_2] [i_2] [1] [i_0] = (min(((((3930060035 ^ 1963) ? (arr_7 [i_1] [i_1] [i_0 + 1]) : (var_4 & var_6)))), (((arr_0 [i_1]) ? var_2 : (1979684904076484264 - var_5)))));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            arr_16 [23] [i_0] [i_0] [i_0] = ((-1643558116 ? 4306825577508418491 : 35553));
                            var_18 = 37819;
                            var_19 = (max(var_19, (arr_12 [i_0] [20] [i_0] [i_0] [i_0] [i_0 + 1])));
                            var_20 *= ((23758 ? (((arr_11 [i_4] [i_2] [i_2] [i_1] [i_2] [i_0]) ? (arr_6 [i_4]) : (arr_6 [i_0]))) : (-16989 > 29982)));
                        }
                    }
                }
            }
        }
        var_21 = (((((-(arr_5 [i_0 + 1] [i_0 + 1])))) ? (((arr_5 [i_0 - 1] [i_0 + 1]) ? (arr_5 [i_0 - 1] [i_0 + 3]) : (arr_11 [1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1]))) : (((arr_5 [i_0 - 1] [i_0 + 3]) ? (arr_0 [i_0 - 1]) : var_4))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    var_22 = ((~((var_6 ? (arr_18 [i_6]) : 107))));
                    arr_26 [i_5] = -2073150006;
                }
            }
        }
        arr_27 [13] [i_5] = (((((~(arr_0 [3])))) || ((((((arr_6 [i_5]) + 2147483647)) << (((arr_15 [i_5] [i_5] [i_5] [i_5] [i_5]) - 2715143687)))))));
    }
    var_23 = (((max((max(var_5, var_4)), 105)) > ((max(var_12, (var_15 || var_15))))));
    var_24 = (((((13055 ? -43 : 23189))) ? var_11 : (((((25537 ? -125 : 7102))) ? -var_12 : (-470487084 + var_8)))));
    #pragma endscop
}
