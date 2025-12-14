/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((!((min((arr_2 [i_0] [i_0]), (min(var_9, 4398046380032)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = min((((arr_12 [i_1] [i_1 + 3] [i_1 + 2] [i_3] [i_4]) ? var_13 : (max(4398046380032, (arr_1 [i_1]))))), (14 - 4398046380032));
                                var_17 = (max(((((!9147) || ((max((arr_4 [i_4] [i_2] [i_1]), (arr_5 [i_1] [i_1]))))))), ((min(var_16, (arr_2 [i_1] [i_4]))))));
                            }
                        }
                    }
                }
                var_18 = (max(((((((arr_4 [i_1] [i_1] [i_0]) ? 241 : var_13))) ? (((var_7 / (arr_5 [i_1] [i_0])))) : (max(31, (arr_8 [i_1] [i_1] [i_0]))))), (max(((var_13 / (arr_7 [i_0] [i_0] [i_1] [i_1]))), (!9223372036854775807)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        {
                            var_19 = ((!(((var_15 ? (arr_14 [i_6 + 3] [i_1]) : (arr_15 [i_6] [i_6 - 1]))))));
                            arr_19 [i_0] [i_0] [i_1] [i_5] [i_6] = (((arr_4 [i_1] [i_1] [i_0]) ? (!18446739675663171583) : ((-5227740015688391296 ? (max(1375590080209295447, var_15)) : (((min((arr_11 [i_0] [i_1 + 1] [i_5] [i_6] [i_5]), var_15))))))));
                            var_20 = ((-((((max((arr_11 [i_0] [i_0] [i_1] [1] [i_6]), var_13))) ? ((max(241, (arr_4 [i_0] [i_0] [i_6])))) : (arr_16 [i_0] [i_1] [i_0] [i_6])))));
                        }
                    }
                }
            }
        }
    }
    var_21 = var_6;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_22 = (!(max(0, ((!(arr_24 [i_7] [i_8]))))));
                            var_23 = (min((0 * -3779327516106137634), (arr_28 [i_7] [i_8] [i_9] [i_10])));
                        }
                    }
                }

                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    var_24 = var_6;
                    var_25 = 0;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        for (int i_13 = 2; i_13 < 15;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 16;i_14 += 1)
            {
                {
                    var_26 = (((arr_22 [i_13] [i_13]) ? (max((arr_28 [i_14] [i_13 - 1] [i_13] [i_12]), (-12017 + 18446739675663171589))) : (((max(var_13, 0))))));
                    arr_40 [i_12] [i_12] [i_12] [i_12] = min((!var_13), (arr_30 [i_13 - 1] [i_13 - 2] [i_13 + 1] [i_13 + 1]));
                    var_27 = ((((min((arr_36 [i_13 + 1] [i_13 - 2]), 2277255768563206862))) ? (min((arr_36 [i_13 + 1] [i_13 + 1]), 94)) : (max(var_5, (arr_36 [i_13 - 1] [i_13 + 1])))));

                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        var_28 = var_12;
                        var_29 += ((!((1 && (arr_31 [i_15] [i_15] [i_13 - 2] [i_13])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
