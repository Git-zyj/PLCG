/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(((((var_15 ? var_13 : var_3)) | ((max(var_8, var_2))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 *= ((-12426 ? 12434 : 0));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_22 = ((((((var_5 & var_15) ? (var_12 >= 12434) : ((max((arr_9 [i_1] [i_0] [i_2]), (arr_12 [i_4] [i_1] [i_0]))))))) == ((((((arr_9 [i_1] [i_2] [7]) ? 87520950 : var_2))) | (9182 ^ 18446744073709551611)))));
                                arr_13 [i_0] [i_1 + 1] [i_1] [i_3 + 2] = ((!((5 || (((arr_9 [i_1] [i_1 - 3] [i_2]) != (arr_9 [i_1] [i_4] [i_2])))))));
                                arr_14 [i_0] [i_1] [i_0] [i_3 + 2] [i_0] = ((min((((arr_5 [i_1 - 3] [i_2]) ? (arr_10 [i_1] [i_2 - 1] [i_3] [i_4]) : var_18)), ((max((arr_8 [i_0] [i_2] [i_3] [i_4]), 1))))));
                            }
                        }
                    }
                    arr_15 [i_1] [i_1] [i_2] = (arr_11 [i_0] [i_0] [i_0]);
                    arr_16 [i_1] [i_1] [i_2 - 2] = arr_3 [i_1] [i_2 - 4];
                }
            }
        }
    }
    var_23 = (min(var_6, (max((min(var_11, 5747590394054746375)), (((var_3 ? var_8 : var_0)))))));
    var_24 = ((var_1 ? ((87520969 ? (-94 & 218) : ((0 ? (-2147483647 - 1) : -8989)))) : var_15));
    #pragma endscop
}
