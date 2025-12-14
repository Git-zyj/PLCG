/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_3 [18] &= (max((arr_2 [i_0]), (arr_2 [i_0 - 1])));
        var_11 = (min(((var_4 < (arr_1 [i_0 + 2]))), (((arr_1 [i_0 + 2]) || (arr_1 [i_0 + 3])))));
        var_12 = (max(1562784114, (arr_0 [i_0 - 1])));
        var_13 = ((((!(arr_2 [i_0 + 1]))) ? (arr_1 [i_0 + 2]) : -92));
        arr_4 [i_0] = ((((var_1 ? (~98) : ((max(127, (arr_0 [i_0])))))) * 35));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        arr_8 [i_1 + 2] [i_1 + 2] = (arr_5 [i_1 + 2]);
        var_14 = ((96 < ((((229 == (arr_5 [i_1]))) ? ((((arr_6 [13] [i_1]) != 231))) : (((!(arr_7 [i_1 + 2] [i_1 + 2]))))))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_15 = (max(var_15, (((((~(arr_6 [i_2] [i_2]))) >> (249 / 31))))));
        var_16 = (((arr_10 [i_2] [i_2]) > var_5));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_17 = (max(var_17, (((-((max((arr_17 [9] [i_3] [2] [i_2] [i_6] [2]), 224))))))));
                                var_18 = (((((var_0 * (arr_23 [i_2] [i_4 + 3] [i_4 - 1] [i_4 + 3] [i_2])))) ? (arr_15 [i_3] [i_2] [i_5] [i_6]) : (max((arr_22 [i_2] [i_5 + 1] [i_4 - 1]), (arr_11 [i_2])))));
                            }
                        }
                    }
                    var_19 = ((var_5 + (arr_1 [i_2])));
                }
            }
        }
    }
    var_20 = ((((min((35 * var_4), var_8))) ? ((((35 ? var_2 : var_3)) ^ var_7)) : 7));
    var_21 = 172;

    for (int i_7 = 1; i_7 < 21;i_7 += 1)
    {
        arr_27 [i_7] = (((((~(max(216, 1578230002))))) || ((((arr_25 [i_7 + 1]) % (arr_6 [i_7 - 1] [4]))))));
        var_22 = (-((((arr_24 [i_7 + 1]) && 5))));
        var_23 -= ((!((((arr_7 [i_7 - 1] [i_7 - 1]) ^ ((var_2 ? var_7 : 17067448056778248292)))))));
    }
    #pragma endscop
}
