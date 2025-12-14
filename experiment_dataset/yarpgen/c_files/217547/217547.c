/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_12 = (arr_4 [i_1] [i_1]);
                            arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] = ((((((((arr_8 [i_0] [i_1] [i_0] [i_0]) ? (arr_8 [i_0] [i_1] [i_2] [i_3]) : (arr_1 [i_1] [i_1])))) ? (min((arr_2 [2] [2]), 255)) : 44910)) <= ((max((((arr_5 [i_1] [i_2] [i_1]) & (arr_0 [i_0] [i_1]))), 0)))));
                            arr_11 [i_0] [i_0] [i_0] [i_1] = ((((((~20625) ? (arr_0 [i_0] [i_1]) : var_10))) && var_4));
                        }
                    }
                }
                var_13 = (max(var_13, ((((((var_10 << (((arr_2 [i_0] [i_0]) - 6920375705486077771)))) - (var_6 == var_0)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    arr_19 [i_4] [i_5] [i_6] = min(((-((((arr_13 [i_4]) != 110))))), (1 && -9223372036854775807));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 21;i_8 += 1)
                        {
                            {
                                arr_26 [i_8] [i_7] [i_4] [i_6] [i_5] [i_4] [i_4] = -var_0;
                                var_14 |= (min((min((arr_18 [i_4] [i_4 + 4]), var_1)), ((((arr_1 [i_4] [i_4 + 3]) ^ (arr_20 [i_4] [i_4 + 2] [i_5 + 1] [i_7 + 1]))))));
                                arr_27 [i_8] [i_7] [i_6] [i_4] [i_4] [i_4] = var_1;
                                arr_28 [i_4 + 2] [i_4] |= (((!-850316400) ? (max(((min(44910, -75))), var_3)) : ((((!((!(arr_14 [i_4] [i_4] [i_6])))))))));
                                arr_29 [i_4] [i_5] [i_6] [i_6] [i_8] = 4294967295;
                            }
                        }
                    }
                    arr_30 [i_4] [i_5 + 1] [i_6] [i_6] = ((-((var_8 ? ((var_7 ? -1 : (arr_2 [i_5] [i_4]))) : (((((arr_23 [i_4 + 4] [i_5 + 1]) && (arr_21 [i_4 - 2] [i_5])))))))));
                    arr_31 [i_6] [i_5] [i_4] = ((arr_0 [i_4 + 4] [i_5 - 1]) ? (arr_0 [8] [i_5 - 1]) : ((max((arr_0 [22] [i_5 - 1]), 7))));
                }
            }
        }
    }
    var_15 |= ((((min(7381597745042482433, ((max(436201173, (-9223372036854775807 - 1))))))) ? var_4 : ((var_2 - ((max(var_7, 65216)))))));
    var_16 = (max(var_16, var_11));
    var_17 = (((max(2147483638, var_4))));
    #pragma endscop
}
