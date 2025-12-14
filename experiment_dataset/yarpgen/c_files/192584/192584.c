/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_9 == (min(var_5, var_8))))) != ((((max(-68310417, var_3))) ? var_2 : -68310417))));
    var_11 ^= (((((((max(var_4, var_1)) != var_3)))) * ((((max(var_0, var_7))) ? (((var_7 ? var_8 : var_2))) : (max(var_1, var_3))))));
    var_12 = (((max(((var_6 >> (var_0 + 893979494))), -25499)) != var_8));
    var_13 = (min(((((var_5 ? var_0 : var_7)) / var_3)), var_3));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_14 += arr_0 [i_0 + 2];
        arr_2 [i_0] = (((max((((arr_0 [i_0 - 1]) * (arr_1 [i_0]))), (arr_1 [i_0 - 2]))) - (((1 && 1) ? (arr_1 [i_0]) : ((2147483520 ? (arr_0 [i_0]) : (arr_1 [i_0])))))));
        var_15 = ((-(max((((!(arr_0 [i_0])))), (((arr_0 [7]) - (arr_0 [i_0])))))));
        var_16 = (max(var_7, ((-1174984090 ? 8038313204457132435 : 1))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_17 = ((((-var_3 ? ((max(var_7, 618915131))) : ((var_5 * (arr_1 [i_1])))))) ? (((arr_3 [i_1]) / (arr_3 [i_1]))) : (((arr_4 [8]) * (((arr_0 [8]) / 1)))));
        var_18 += ((((min((arr_3 [i_1]), (max((arr_3 [i_1]), (arr_0 [15])))))) ? (((((arr_0 [9]) && (((var_1 ? var_5 : (arr_0 [1])))))))) : (arr_3 [i_1])));
        arr_6 [i_1] = ((((arr_3 [1]) + 2147483647)) >> ((((-(min(-618915122, var_1)))) - 10378435282323733053)));
        arr_7 [i_1] |= (((!var_1) / (arr_0 [i_1])));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_10 [9] [1] = ((var_3 >= (((!var_2) ? var_6 : (((max(var_8, var_8))))))));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_19 = (min(var_19, var_6));
                    arr_15 [3] [i_4] [1] [1] = (((((((max((arr_13 [i_3] [i_3] [i_4] [i_3]), var_4))) ? (arr_13 [i_3 - 2] [4] [i_4] [4]) : ((var_0 ? (arr_1 [i_3]) : (arr_12 [10] [i_4])))))) & var_2));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_18 [i_5] = -68310417;

        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            arr_30 [15] [15] [i_5] [i_5] [i_9] [10] = (arr_0 [12]);
                            var_20 = ((((max((arr_23 [i_9] [1] [i_5]), (arr_23 [3] [i_6] [i_6])))) ? (((arr_17 [13]) | var_4)) : (~var_8)));
                        }
                    }
                }
            }
            var_21 = (-1730696743904555114 == 1);
        }
    }
    #pragma endscop
}
