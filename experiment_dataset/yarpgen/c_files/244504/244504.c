/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    var_19 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = var_12;
                    var_21 = ((!((((var_2 % var_4) ? (arr_6 [i_1 - 3] [i_1 + 2] [i_1 - 3] [i_1 + 1]) : ((max((arr_0 [i_2]), (arr_1 [i_1 + 2])))))))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_22 = 30652;
                        var_23 = (max(var_23, 5696439062283498937));
                    }
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_1] = ((max((arr_11 [i_0] [i_1 - 1] [i_2] [i_4 - 1]), (((arr_12 [i_0] [9] [i_2] [i_4 + 1]) ? 32767 : 25)))));
                        var_24 += (((((((min(12750305011426052659, 5696439062283498937))) ? var_16 : ((26568991 ? (arr_7 [2] [i_4] [i_2] [i_1] [2] [10]) : (arr_6 [i_2] [i_2] [i_2] [i_2])))))) ? (((!0) ? (arr_7 [i_4 - 2] [15] [i_2] [i_1 - 2] [16] [1]) : (-9223372036854775807 - 1))) : ((max((((227 ? (arr_0 [19]) : var_11))), (arr_12 [i_0] [i_0] [i_0] [i_0]))))));
                        arr_14 [i_1] [i_0] [i_1] [i_1] [i_1] [i_1] = (((((1604477633 ? 1 : 0))) ? (1 <= -9991) : 0));
                        var_25 = ((((((arr_4 [i_4 + 1] [i_1 - 1] [i_1]) << ((((var_4 ? 78 : (arr_9 [i_0]))) - 73))))) ? ((7921 ? 242 : (arr_10 [i_0] [14] [i_2] [i_4] [1] [i_4]))) : (((4294967295 ? 1 : 8050)))));
                        arr_15 [i_2] [i_1] [i_2] [i_4] [i_2] [i_2] |= (((((min(148776438, var_9))) & -var_13)) >> (((((0 > 127) - (((arr_5 [i_0] [i_1] [i_2]) & (arr_5 [i_0] [i_1 - 3] [i_2]))))) - 1683642406)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
