/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (-(((arr_0 [i_0]) ? ((((arr_2 [7] [2]) ? 219 : (arr_0 [i_0])))) : ((-(arr_2 [i_0] [i_0]))))));
        arr_4 [i_0] [0] = (min(((max((arr_0 [i_0]), (arr_0 [i_0])))), (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        arr_5 [i_0] [7] = (-(max((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0]))), (arr_2 [1] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_9 [i_1] = ((((((((arr_8 [i_1]) ? (arr_7 [i_1] [i_1]) : (arr_6 [i_1] [i_1])))) ? (((arr_6 [4] [i_1]) ? (arr_6 [i_1] [i_1]) : var_2)) : 438873690)) > ((~(arr_7 [i_1] [i_1])))));
        arr_10 [i_1] = (+(((arr_8 [i_1]) ? (arr_8 [i_1]) : (arr_8 [i_1]))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_14 [10] = arr_12 [i_2] [i_2];
        arr_15 [i_2] [i_2] = (!var_3);
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_11 = ((!((!((max(var_0, (arr_11 [10] [4]))))))));
        arr_19 [i_3] = ((((min((arr_11 [i_3] [i_3]), 192))) ? ((((min(179, var_1))) ? (min(2667442628, (arr_12 [i_3] [i_3]))) : (arr_17 [i_3]))) : (arr_18 [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 14;i_5 += 1)
            {
                {
                    arr_26 [i_4] = ((((min((arr_25 [i_5] [i_5 - 1] [i_5 - 2] [10]), (arr_25 [i_5 - 3] [i_5 - 3] [i_5 + 3] [i_5 - 1])))) ? (max((arr_20 [i_5 + 4] [i_5] [i_5 + 4]), (arr_20 [i_5] [i_5 + 2] [i_5 + 4]))) : ((~(arr_25 [i_5] [i_5] [i_5 + 2] [i_5])))));
                    arr_27 [i_3] [i_4] [i_5] = (arr_25 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 2]);
                    arr_28 [i_4] [i_4] = (((max(var_9, ((var_3 ? var_9 : (arr_13 [i_5])))))) ? (arr_24 [i_5 - 3]) : (max(((495017403 ? (arr_22 [i_4]) : (arr_23 [i_4]))), ((3535532312 ? 97 : (arr_23 [i_4]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_34 [i_3] [i_4] [i_7] [i_6] [i_7] [i_4] = (((arr_31 [i_4] [i_5 + 3] [i_3] [i_4]) ? (max(247, (arr_20 [i_5 - 3] [i_5 - 3] [i_7 - 3]))) : (((arr_31 [i_4] [i_5 + 2] [i_4] [i_4]) ? (arr_31 [i_4] [i_5 + 1] [i_3] [i_4]) : (arr_20 [i_5 + 2] [i_4] [i_7 - 2])))));
                                arr_35 [7] [7] [i_4] [7] [i_7 - 3] = max(((((arr_24 [i_3]) ? (arr_17 [i_3]) : 4294967264))), 1762163279);
                                arr_36 [i_7] [i_7] [i_6] [i_4] [i_4] [i_4] [3] = (max(((~((var_2 ? (arr_23 [i_4]) : (arr_16 [i_3]))))), (max(var_6, (((arr_11 [i_4] [i_7]) ? (arr_13 [i_3]) : (arr_17 [i_3])))))));
                                arr_37 [i_4] [i_4] = ((!(arr_25 [i_3] [i_5 - 1] [i_3] [i_7 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = ((-(((var_0 <= ((var_2 ? var_0 : var_7)))))));
    var_13 = min(var_3, var_8);
    #pragma endscop
}
