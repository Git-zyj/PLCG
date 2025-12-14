/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = (arr_5 [i_2]);

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_16 = ((((((min((arr_5 [i_2]), (arr_2 [i_0] [i_0] [i_2])))) && ((max(var_0, (arr_1 [i_3])))))) ? (((6 ? (arr_1 [i_0]) : (((arr_8 [i_3]) ? (arr_3 [i_0] [i_0] [i_0]) : 1))))) : (((((-(arr_4 [i_0])))) ? 4294967295 : 42))));
                        var_17 += (((((((arr_1 [i_0]) != (arr_3 [i_0] [i_0] [i_0]))) ? (((var_0 + (arr_0 [i_1] [i_2])))) : (min((arr_4 [i_2]), (arr_5 [i_0]))))) != (arr_6 [1] [i_1] [i_0])));
                        arr_9 [i_0] [i_0] [i_2] [i_2] [2] = ((!((min((arr_0 [i_0] [i_0]), (arr_0 [i_3] [i_0]))))));
                        var_18 = (max(((max(127, -1874))), var_1));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_19 = ((-(((~var_5) ? (arr_7 [i_0] [i_0] [i_1] [i_2] [i_4] [i_4]) : (max(var_9, (arr_3 [i_0] [i_1] [i_2])))))));
                        var_20 = (min((((217 * 0) * ((var_3 ? 0 : var_10)))), ((max((max((arr_0 [i_4] [i_0]), (arr_7 [i_0] [i_1] [11] [i_2] [i_4] [i_4]))), (max(255, (arr_4 [i_0]))))))));
                        var_21 *= var_8;
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_22 = ((((((((arr_5 [i_2]) + 9223372036854775807)) >> ((var_2 ? var_11 : (arr_12 [i_2] [i_1] [i_1] [i_2])))))) || ((max(27, 0)))));
                        arr_16 [5] [i_0] [i_2] [i_2] [9] [i_5] = (((((((min(var_11, 0)))) & 5))) ? (arr_1 [10]) : (arr_0 [i_0] [6]));
                    }
                }
            }
        }
        var_23 = (max((((arr_3 [13] [13] [i_0]) ? var_11 : var_1)), var_7));
        var_24 = (min(((((((var_5 + (arr_8 [i_0])))) && (((var_2 ? var_8 : (arr_5 [i_0]))))))), (min((var_12 - 100), (arr_6 [i_0] [i_0] [i_0])))));
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        var_25 = ((-(arr_15 [i_6] [i_6] [i_6] [12])));
        var_26 = (min((max((6 > -19805), (arr_6 [i_6] [i_6] [i_6]))), (((~0) ? (arr_3 [i_6] [i_6] [i_6]) : 61809))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_27 = (var_13 ? var_12 : var_1);
        arr_21 [18] [18] = (!var_5);
    }
    var_28 = 1;
    #pragma endscop
}
