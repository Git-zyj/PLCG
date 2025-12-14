/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_8));
    var_19 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 6;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [7] [i_0] = (((((1 ? ((min(var_8, -11))) : (arr_9 [i_0] [i_1] [i_1] [i_3] [i_4])))) | ((var_14 ? (arr_5 [4] [i_4 - 1] [4] [i_3 - 1]) : (var_4 | 79)))));
                                arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (min(79, (((arr_6 [i_3 + 3] [i_1] [i_0]) | 32767))));
                                var_20 ^= (min((min(9223372036854775807, 65535)), ((min(var_5, var_3)))));
                                arr_14 [i_0] [i_1] [i_2] [i_3 + 4] [i_2] = (((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) && ((max(var_4, 9624721565218875348)))));
                                arr_15 [1] [i_1] [i_2] [i_3] [2] [i_2] = (min(var_12, ((((176 ? 184 : 2881677185750705789))))));
                            }
                        }
                    }
                    var_21 -= (((((arr_3 [i_0] [i_0] [i_0]) ? ((var_6 ? var_4 : (arr_0 [i_0]))) : ((var_3 ? (arr_11 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]) : (arr_7 [i_0] [i_1] [i_2]))))) | ((((arr_7 [i_2] [i_1] [i_0]) ? (arr_7 [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0]))))));
                    var_22 = (max(var_22, ((max(((((min(var_6, var_1))) | ((18446744073709551615 | (arr_3 [i_0] [i_0] [i_0]))))), (~18446744073709551615))))));
                    arr_16 [i_0] = var_7;
                }
            }
        }
    }
    #pragma endscop
}
