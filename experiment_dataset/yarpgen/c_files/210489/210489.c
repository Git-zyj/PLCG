/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (min((27376 && 27636), (arr_4 [i_0] [i_1] [i_0])));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_21 = (min(var_21, ((((min(var_4, (arr_6 [i_0] [i_0 + 1] [10] [i_0]))) / -251)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_22 = (((arr_0 [i_3]) ? var_7 : (arr_6 [i_0] [i_1] [i_0] [i_0])));
                        var_23 = ((!((((arr_7 [11] [i_1] [i_2] [i_3]) ? 251 : 114)))));
                        arr_10 [i_3] [i_0] [0] [i_1] [i_0] [i_0] = (((arr_6 [i_2] [i_0] [i_0] [i_0]) ? var_7 : 37916));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_2] [12] = (((5895640194245994666 != -92) ? 792023231117467099 : (((min(29, 11188))))));
                        var_24 = (max((max((arr_0 [i_0 + 1]), -792023231117467095)), ((max((arr_11 [i_0 - 1] [i_0 - 1] [i_0]), var_2)))));
                        arr_14 [i_0 - 2] [i_0] [i_1] [i_2] [i_2] [i_4] = ((!((((27615 - 15325474732225030794) + ((max(106, -5793929996289417924))))))));
                        var_25 = (min(0, (min((max(-92, 149)), -49))));
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_7 = 3; i_7 < 14;i_7 += 1) /* same iter space */
                            {
                                var_26 = (max(var_26, 65));
                                arr_24 [7] [10] [i_0] [i_0] [i_1] [i_0 + 1] = (((arr_20 [i_0] [i_0 + 1] [i_0] [i_0] [i_0]) ? (arr_20 [i_0] [i_0 - 1] [i_7] [i_7 - 1] [i_0]) : var_0));
                                arr_25 [i_0] [i_1] [i_1] [i_6] [i_0] = (((arr_18 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_7 + 1] [i_7 - 3]) ? var_13 : var_19));
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_5] [0] [1] = (((-792023231117467095 / var_11) ? var_17 : (1 / var_16)));
                            }
                            /* vectorizable */
                            for (int i_8 = 3; i_8 < 14;i_8 += 1) /* same iter space */
                            {
                                var_27 = (-792023231117467091 + var_15);
                                var_28 = var_0;
                                var_29 = arr_22 [i_0 + 1] [i_0 - 1] [i_8 + 1];
                                var_30 = ((792023231117467085 ? 792023231117467085 : 4));
                            }
                            arr_29 [i_0] [3] [i_0] [3] = min((((arr_17 [i_6] [i_1] [i_0]) / (((var_14 ? 792023231117467085 : (arr_11 [i_0] [i_1] [i_5])))))), -1);
                        }
                    }
                }
                var_31 = (min(var_31, var_13));
            }
        }
    }

    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_32 = (min((min((max(var_14, 8505933012012018069)), ((792023231117467085 % (arr_31 [i_9]))))), 2026086603871111882));
        var_33 = (min((((!(arr_32 [i_9])))), (((arr_32 [0]) ? (arr_32 [i_9]) : (arr_32 [i_9])))));
        var_34 = (min((((2866601400 || (!var_11)))), ((154 ? 0 : -1762072952))));
        var_35 = ((((min(var_18, ((min(13418, 1)))))) | var_3));
        var_36 = (min(var_36, (((!((((127 ? 13411 : 203)))))))));
    }
    #pragma endscop
}
