/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((!((min(((var_2 ? var_7 : var_5)), var_6))))))));
    var_11 = ((((-(var_7 * 4448659887572586487))) * ((max(((197 ? var_5 : var_3)), (!13321))))));
    var_12 += ((var_8 / (2147483647 / var_5)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = (max((max(((1 ? (arr_2 [15] [i_1]) : var_3)), -6049060684978048365)), (arr_0 [i_1])));
                var_14 = ((max((2147483647 * var_7), ((((arr_1 [i_0]) ? var_8 : 1))))));
                var_15 |= 13696;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 = ((((!((((-9223372036854775807 - 1) ? var_6 : var_3))))) ? (min((arr_2 [i_0 + 1] [i_1 + 1]), (arr_2 [i_0 - 1] [i_1 - 1]))) : ((max((arr_6 [i_4] [i_1] [i_0 - 2] [i_1]), (arr_6 [i_3] [i_3] [i_0 + 1] [i_1]))))));
                                arr_11 [5] [i_1] [i_0] [i_0] [i_0] [i_0] = (22522 / var_3);
                                var_17 |= ((-(((arr_5 [i_0] [i_1 + 1] [i_4 + 2]) / (arr_5 [i_1] [i_1 + 1] [i_4 - 1])))));
                                arr_12 [i_3] [i_3] [7] [2] [i_3] [i_3] [i_1] = (((-(arr_4 [i_4] [i_4 - 1] [i_4 + 2]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(var_18, 65535));
    #pragma endscop
}
