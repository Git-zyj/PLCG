/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_18 = ((!(((arr_0 [i_0 - 3] [i_0 - 1]) < (arr_0 [i_0 - 2] [i_0 - 2])))));
        arr_2 [i_0] [i_0] = (min((((var_7 ? ((-(arr_0 [6] [6]))) : (((arr_0 [i_0 - 4] [i_0]) ? (arr_1 [i_0 - 3]) : (arr_0 [i_0] [11])))))), (max(var_9, (min((arr_0 [i_0] [i_0 - 4]), 5774015478573536314))))));
        var_19 = ((((max((arr_1 [i_0 - 1]), 8286))) ? (((((max((arr_1 [i_0 + 1]), 10)))) | (((arr_1 [i_0 - 2]) ? 8242579300505840477 : var_3)))) : (~var_1)));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_20 = (min((arr_3 [i_1]), (arr_3 [i_1])));
        var_21 = (max(8286, (max(var_3, 8242579300505840473))));
    }
    var_22 = var_10;
    var_23 = (var_10 ? var_1 : var_5);
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_2] [i_2] = ((((((max((arr_6 [i_2]), var_8))) | ((15872 ? (arr_11 [i_3]) : (arr_11 [i_2])))))) ? (((arr_8 [i_4 - 1] [i_4 - 1]) ? (min((arr_7 [i_3]), (arr_13 [i_2] [i_2] [i_2] [i_2]))) : (((arr_14 [i_2] [i_3] [i_4]) << (((var_1 + 8615) - 49)))))) : (arr_12 [i_4 + 1]));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_24 = (max((max((max(659172628, var_11)), (arr_6 [i_6]))), (((-(max((arr_19 [i_2] [i_2] [i_2]), (arr_9 [i_2] [i_3]))))))));
                                var_25 = ((((max((arr_16 [i_2] [i_4 - 1] [8] [i_6]), (arr_16 [i_2] [i_4 - 1] [i_4 + 1] [i_5])))) ? ((((max((arr_14 [i_2] [i_2] [i_2]), 10204164773203711143))) ? (((arr_12 [i_2]) ? var_7 : 10204164773203711119)) : (((var_7 ? 556222915 : var_8))))) : (arr_0 [2] [2])));
                                var_26 = var_7;
                            }
                        }
                    }
                    var_27 = (max((arr_10 [i_2] [0] [i_4 + 2]), (((arr_10 [i_2] [i_3] [i_4 + 2]) ? (arr_16 [i_2] [i_2] [i_4 + 1] [i_4 + 1]) : (arr_14 [i_2] [i_2] [i_4 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
