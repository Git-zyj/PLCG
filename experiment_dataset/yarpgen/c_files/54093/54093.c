/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((max(-var_0, (((var_5 ? var_7 : var_5)))))) ? (((~var_8) ? (var_3 & var_11) : var_4)) : var_2)))));
    var_15 = var_6;
    var_16 = (max(((-27747 ? 85 : 1)), (~var_9)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (((((+((var_2 ? (arr_1 [i_0]) : (arr_0 [i_0])))))) ? (((~(arr_0 [1])))) : (min(var_10, ((((arr_0 [i_0]) - var_4)))))));
        arr_3 [i_0] = ((var_0 ? ((((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))) ? (var_9 & var_1) : (arr_0 [i_0]))) : ((-(arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        var_18 = ((!(arr_1 [i_0])));
                        arr_10 [i_0] [i_1] [i_1] [8] [i_1] = ((!(!var_9)));
                    }
                    for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        var_19 = (((arr_1 [i_0]) ? var_11 : ((((!(arr_5 [i_1]))) ? ((((arr_5 [i_0]) ? var_12 : var_11))) : (max((arr_12 [i_0] [i_0] [i_1] [i_2] [i_4] [i_4]), (arr_4 [i_0] [i_0])))))));
                        var_20 = var_5;
                        var_21 = ((((min(var_6, (arr_4 [i_4 - 1] [i_4 + 3])))) ? (((((arr_6 [i_4 - 1]) / (arr_1 [i_1]))))) : (~var_12)));
                        var_22 = ((((-var_5 ? ((var_9 ? var_5 : var_2)) : var_10)) & var_1));
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_23 = (arr_5 [i_0]);
                        var_24 = (arr_6 [i_0]);
                        var_25 = ((!((min((arr_6 [i_5]), 255)))));
                    }
                    var_26 = (((-(arr_11 [24] [i_0] [i_0] [i_0]))));

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_27 = (max(-1073741824, 3927125182));
                        arr_18 [i_0] [23] [14] [i_0] = (((arr_6 [i_2]) ? (((+(((arr_13 [i_0] [i_1] [i_2] [i_6]) * var_10))))) : (((arr_8 [i_0] [i_1] [i_0] [i_6]) - ((-(arr_1 [i_1])))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 23;i_7 += 1)
                    {
                        var_28 = ((arr_12 [i_7 + 2] [i_7 + 2] [i_2] [i_1] [i_0] [i_2]) ? (arr_8 [i_0] [i_7 + 1] [i_0] [i_2]) : ((((arr_19 [i_7]) * var_2))));
                        arr_21 [i_0] [i_0] [1] [i_7] = (arr_4 [i_7 + 2] [i_7 + 2]);
                        var_29 = (min(var_29, var_7));
                        var_30 &= (arr_12 [1] [i_1] [i_1] [i_2] [1] [8]);
                        arr_22 [i_0] [i_1] [i_7] [i_7] = (4294967291 * -49);
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_31 = (min(var_31, var_7));
        arr_26 [i_8] = ((((((arr_4 [i_8] [i_8]) / (arr_23 [i_8])))) ? (((arr_16 [i_8] [15] [i_8] [i_8]) / ((max((arr_13 [i_8] [i_8] [i_8] [i_8]), var_11))))) : (arr_13 [i_8] [i_8] [12] [i_8])));
    }
    var_32 = (min(var_32, ((min((max(((var_8 ? var_8 : var_13)), ((var_5 ? var_13 : var_2)))), (((-((var_11 ? var_1 : var_9))))))))));
    #pragma endscop
}
