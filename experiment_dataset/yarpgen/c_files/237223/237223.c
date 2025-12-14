/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = ((+(min((var_1 / 171), (min(var_4, var_7))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_1 [i_0]) & (!var_9))) << (((((((2485179708 ? 7229450521594207827 : -6232577878807600680))) ? 28045 : -25221)) - 28014))));

        for (int i_1 = 3; i_1 < 16;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] = (((((((-(arr_1 [i_1 + 2]))) + 85))) ? ((((min((arr_4 [i_1]), -7198375489073722609))) ? (max(14599677290483277568, 28054)) : ((max(1809787580, (arr_1 [i_1 - 3])))))) : ((-1809787587 ? (((arr_1 [i_0]) ? 7 : (arr_0 [i_0]))) : (arr_0 [i_1 - 2])))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_8 [i_0] [i_0] [i_0] [i_0] = (arr_3 [i_2]);
                arr_9 [i_2] [i_1] [i_0] = min((((arr_0 [i_1 + 2]) ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 + 2]))), (((arr_0 [i_1 - 2]) ? (arr_0 [i_1 - 2]) : 2)));
                arr_10 [i_0] [i_1] [i_2] = ((max((min(var_0, (arr_7 [i_2]))), (arr_3 [i_0]))) / ((min(29, ((var_1 ? 47285 : (arr_6 [i_0])))))));
                arr_11 [i_0] = ((~(max((min((arr_1 [i_0]), (arr_0 [4]))), (arr_3 [i_1 - 2])))));
            }
            arr_12 [i_0] [i_1] = (min((((((var_3 - (arr_6 [i_0])))) ? ((min(var_3, 32))) : (max((arr_6 [i_1]), (arr_7 [i_1]))))), ((((arr_7 [i_1 + 1]) > 6)))));
            arr_13 [i_0] = (arr_3 [i_0]);
        }
        for (int i_3 = 3; i_3 < 16;i_3 += 1) /* same iter space */
        {
            arr_16 [i_0] = ((((+(((arr_7 [0]) + (arr_1 [i_0]))))) / (arr_0 [i_0])));
            arr_17 [i_0] [i_0] [i_3] = (min(((((arr_6 [i_3 - 3]) ? (arr_6 [i_3 + 2]) : (arr_6 [i_3 - 2])))), (~13743797499815899547)));

            for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
            {
                arr_20 [i_4] [i_4] = (((((((((arr_7 [1]) ? (arr_3 [i_0]) : var_5)) <= ((-51 ? 1 : (arr_1 [i_3]))))))) | (min((arr_19 [i_3 - 1] [i_3 - 3] [i_3 - 3]), 8077643332002471304))));
                arr_21 [i_0] [i_0] [i_4] &= (max((max((arr_18 [i_0] [i_3] [0]), 816266905192864228)), 244));
                arr_22 [i_4] [i_4] [i_4] = ((min(-31884, 1986921167)) <= (((arr_14 [i_0] [i_3 - 2] [i_0]) | ((max((arr_1 [i_0]), var_2))))));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        {
                            arr_29 [i_3] [i_3] = (arr_18 [i_0] [i_0] [i_0]);
                            arr_30 [i_7] [i_6] [i_5] [10] [i_3 - 1] [i_0] [i_0] = ((!(arr_4 [i_0])));
                            arr_31 [1] [i_0] [i_3] [i_5] [i_6] [i_6] [1] = ((arr_26 [i_3 + 2] [i_3] [i_3 + 2] [i_3]) >> (((arr_26 [i_3 - 3] [i_3] [13] [i_3 - 2]) - 2137160774)));
                        }
                    }
                }
                arr_32 [i_5] [i_5] [2] [i_5] = 25238;
            }
        }
        arr_33 [i_0] [i_0] = 17004524673950218446;
    }
    #pragma endscop
}
