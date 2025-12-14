/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(107, (var_8 > 0)))) ? ((((!((max(var_8, var_0))))))) : (max((min(var_12, var_12)), 0))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_19 = (max(var_19, ((((1514277961262583658 ? (arr_8 [i_0]) : (arr_14 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1 - 2] [i_3 - 2])))))));
                            var_20 = (max(var_20, (((((((max(108, 125))) - ((var_7 ? var_0 : 9077))))) ? (max((var_14 - 3295185014), (7 + var_12))) : var_7))));
                        }
                        var_21 = (max(((min(var_17, (arr_3 [i_1 + 2] [17])))), (((arr_15 [i_1 + 2] [9] [9] [i_1 + 2] [24] [9]) ? -106 : var_9))));
                        var_22 = ((!((max((arr_2 [i_1 + 2] [i_3 - 2]), var_1)))));
                        arr_16 [i_0] [i_1 + 2] = 3295185004;
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_23 -= (((min((min(999782286, var_13)), -9088)) == (((((var_13 ? (arr_0 [i_5]) : 999782289))) ? ((8195759653141389865 ? (arr_4 [i_0] [i_1]) : (arr_0 [i_5]))) : (min(8195759653141389865, var_10))))));
                        arr_19 [i_0] = arr_2 [i_0] [i_1 + 2];
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_24 = ((9053 ? (((((var_12 ? var_7 : var_15))) ? (arr_3 [14] [i_1 + 1]) : ((((arr_3 [13] [i_1 + 1]) ? (arr_18 [i_0] [i_0] [i_0] [23]) : var_8))))) : (((~(~var_11))))));
                        var_25 = ((~((min((max(var_17, (arr_22 [i_0] [i_0]))), (arr_20 [6] [6] [13] [i_6] [i_1]))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        arr_27 [i_0] [i_0] [18] [i_0] = ((var_9 ? (arr_3 [i_1 + 1] [i_1 + 2]) : (arr_3 [i_1 + 1] [i_1 + 2])));
                        var_26 = (((arr_15 [i_0] [i_1] [1] [i_7] [i_0] [19]) ? (((var_1 ? var_1 : var_16))) : ((var_13 ? (arr_21 [i_2]) : 10250984420568161750))));
                        var_27 = (((arr_14 [11] [i_1] [i_1] [i_7] [i_0] [i_2] [i_7]) ? ((var_17 ? var_10 : (arr_24 [i_0] [i_1 - 1]))) : var_0));

                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            arr_30 [18] [i_7] [18] [6] [i_7] = (118 | 3);
                            var_28 = (arr_10 [i_8] [i_7] [i_7] [i_2] [i_1] [i_0]);
                            arr_31 [i_0] [i_0] [21] [23] = var_17;
                            var_29 = 999782307;
                        }
                    }
                    arr_32 [i_0] [i_0] = 999782289;
                }
            }
        }
    }
    #pragma endscop
}
