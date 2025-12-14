/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (((((55 ? -4561 : 69))) ? (min(9223372036854775807, 8)) : (min(((32767 ? -9223372036854775806 : var_13)), (var_9 <= var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [i_3] [i_3] [i_2] [i_3] |= (((((!(((69 ? 127 : -69)))))) <= (((((var_0 + (arr_6 [i_0] [i_2] [i_3]))) > (arr_8 [i_0] [i_0] [i_0] [i_1 - 1]))))));
                            var_17 = (max(var_17, (arr_2 [i_3] [i_1] [9])));
                            var_18 = (max((arr_7 [i_0]), (((arr_0 [i_1 + 1]) / (arr_7 [i_0])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_17 [i_1] [i_0] = var_10;
                            var_19 ^= (min((max(((max(9223372036854775807, 46))), ((16140724383545828696 ? (-127 - 1) : var_15)))), (((!(((5175 ? 127 : 65530))))))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [4] = (max((arr_1 [i_0] [2]), ((((((arr_10 [i_4] [i_4] [i_4]) | var_1))) ? -127 : (arr_11 [i_1 + 1] [i_0] [i_5 - 1])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
