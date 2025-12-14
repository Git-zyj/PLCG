/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((((((-25524 <= (var_15 % 121)))) < (arr_7 [i_0]))))));
                                var_20 = (min(var_20, ((((min((arr_6 [i_0] [15] [1] [i_3] [i_4]), var_0)) + (((((arr_4 [i_0 - 2] [i_1 + 2] [i_2]) * (arr_6 [i_0] [i_0] [i_0] [i_3 - 2] [i_4]))) - (((var_4 + (arr_5 [i_0 - 4] [1] [18])))))))))));
                                var_21 = var_3;
                                var_22 = (min(var_22, ((((!-81) < (arr_5 [17] [i_2 - 3] [i_1 + 1]))))));
                            }
                        }
                    }
                    var_23 = (max(((((arr_0 [i_0]) <= (arr_6 [i_1] [i_2 - 1] [i_2] [i_1 - 1] [i_0 - 2])))), (((~127) | var_6))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_24 = ((~(min(var_15, (arr_7 [i_5])))));
        arr_13 [i_5] [i_5] = var_1;
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_16 [i_6] = ((arr_1 [i_6]) / ((((max(var_1, 121))) & (min(var_13, var_15)))));
        var_25 |= (min((var_9 || var_9), (max((arr_10 [i_6] [i_6] [i_6] [i_6] [8]), -2126451469))));
        arr_17 [i_6] = (81 || (((min(-1185464220, (arr_8 [i_6]))) < var_18)));
    }
    var_26 = (max(var_26, (((var_1 || (81 || -81))))));
    #pragma endscop
}
