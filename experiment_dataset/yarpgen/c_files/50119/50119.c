/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            var_19 = (max(var_19, ((((+(min((arr_5 [i_0]), (arr_1 [i_3]))))) | (min(4219589330, var_0))))));
                            arr_10 [i_0] [i_0] [i_2] [i_3] [i_2] = (arr_2 [i_0] [i_4 - 2] [i_4 - 2]);
                        }
                        var_20 = 64;
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_21 *= (((arr_4 [i_1] [i_1] [i_1]) >= ((var_6 | (min((arr_12 [i_1] [i_0]), var_4))))));
                        arr_13 [i_0] [i_1] [i_2] [i_2] [i_1] [i_2] = -var_0;
                        var_22 *= -var_1;
                        var_23 &= ((max((arr_12 [i_2] [i_5]), (arr_12 [i_0] [i_2]))));
                        var_24 = (min(var_24, (((((((((33963 ? 0 : 0))) ? ((6 ? var_9 : var_7)) : 56566))) ? (min(((4219589330 - (arr_12 [i_0] [i_0]))), (arr_1 [i_0]))) : var_10)))));
                    }
                    arr_14 [i_0] [i_1] [i_2] = ((var_10 * (arr_8 [i_0] [i_0])));
                    arr_15 [i_0] [i_0] = (arr_9 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 18;i_7 += 1)
        {
            {
                arr_22 [i_6] = ((+((((var_1 ? (arr_19 [i_7] [i_7]) : (arr_18 [i_6] [i_7]))) - ((((arr_16 [i_6 - 1] [i_7]) >= 13011881265883091610)))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_25 = (min(var_25, ((((max(131056, (((~(arr_27 [i_8] [i_7] [i_8] [i_7])))))) << (!20))))));

                            for (int i_10 = 0; i_10 < 20;i_10 += 1)
                            {
                                arr_32 [i_9] = ((65535 ? -4219589330 : (342188712241160578 && 0)));
                                var_26 = (max(var_26, (((arr_25 [i_6 - 1]) * (arr_23 [i_6] [i_7] [i_7] [i_10])))));
                                var_27 = (max(var_27, ((min(2471457077076526474, 4294967295)))));
                            }
                            for (int i_11 = 0; i_11 < 20;i_11 += 1)
                            {
                                var_28 *= (max((!20), 1152917106560335872));
                                var_29 = min((arr_20 [i_6 + 1]), ((65515 ? 16015423465265258794 : 37900)));
                                arr_36 [i_6 - 2] [i_6 + 1] [i_6 - 1] [i_8] [i_6 + 1] [i_6 - 2] &= arr_21 [i_6] [i_7 + 2] [i_11];
                            }
                            for (int i_12 = 0; i_12 < 20;i_12 += 1)
                            {
                                var_30 = (min(var_30, var_3));
                                var_31 = var_12;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
