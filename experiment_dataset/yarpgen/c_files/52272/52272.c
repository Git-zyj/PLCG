/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_10 = (min((arr_3 [i_2 + 1] [i_2] [i_0]), ((((min(var_3, var_3))) - (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                                var_11 = (((((((29384 ? var_4 : (arr_0 [i_0] [i_4])))) ? (((arr_4 [i_0] [i_2 - 1] [i_3]) ? (arr_1 [i_0]) : var_8)) : var_4)) | var_0));
                                var_12 = (max(var_12, ((min(((((var_0 ? var_9 : var_2)) * (((arr_5 [i_0] [i_2] [i_4]) / -1168519736664315970)))), ((((((arr_0 [i_0] [i_4]) ? var_6 : 3877)) / (((-1168519736664315970 ? var_9 : (arr_2 [3] [i_3]))))))))))));
                            }
                        }
                    }
                    arr_12 [i_0] [i_0] [i_2 + 2] [i_0] = -var_8;
                }
            }
        }
    }
    var_13 = ((var_6 ? (max((~769100558), ((-179749515 ? 23177 : var_2)))) : var_7));
    var_14 = (min(var_14, (((~((var_4 ? -23177 : var_6)))))));
    var_15 = (((((23174 ? 42359 : 1))) ? (((((var_8 ? var_4 : 179)) + var_7))) : (((((139 ? var_5 : var_7))) ? (var_7 - 129) : (min(var_2, var_9))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            {
                var_16 = (min(var_16, (((-((-(var_3 || 1168519736664315970))))))));
                arr_20 [i_6] = (((((var_9 ? (239 || 1) : (arr_19 [i_6 + 2] [i_6 - 1] [i_6 - 2])))) >= ((var_0 ? (((min(var_9, var_3)))) : (((arr_18 [i_5] [8]) >> (56477 - 56414)))))));
            }
        }
    }
    #pragma endscop
}
