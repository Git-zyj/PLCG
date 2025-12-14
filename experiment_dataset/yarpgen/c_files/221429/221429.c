/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max(((var_0 & (max(var_12, var_9)))), (var_1 <= var_7));
    var_14 = ((var_9 ? (var_5 & var_12) : var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 = ((((arr_5 [i_4] [i_3] [i_1 + 1]) ? (arr_5 [i_0] [i_1 - 1] [i_2 + 1]) : var_5)) / (((arr_5 [i_0] [i_1] [i_2 + 1]) / (arr_5 [i_1] [i_1] [i_4]))));
                                var_16 += ((~((((var_8 ? (arr_11 [i_0] [17] [i_1] [i_2 + 1] [i_2 - 3] [i_3 - 1] [i_4]) : var_10)) & (((((arr_8 [i_0] [i_1] [i_2] [i_3 - 1]) && var_7))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_20 [i_5] = (((((arr_14 [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1]) << (((min((arr_14 [i_0] [i_1] [i_5] [23]), (arr_1 [i_0]))) + 5035970363845146204)))) << (((arr_6 [i_0] [i_1] [i_0]) + 1526274864479086808))));
                            var_17 = (min(var_17, (((-(((((var_7 + (arr_7 [i_0] [i_1] [i_5] [i_5] [i_6])))) ? (~var_8) : (max(var_12, (arr_17 [i_0] [i_1 + 1] [2]))))))))));
                            arr_21 [i_0] [i_1] [i_5] [i_6] = ((((((var_1 * (arr_13 [i_0] [i_1] [i_5] [i_6]))) / (arr_8 [i_0] [i_1] [i_5] [i_6])))));
                            var_18 = (((arr_2 [22] [i_0] [i_0]) ^ var_11));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
