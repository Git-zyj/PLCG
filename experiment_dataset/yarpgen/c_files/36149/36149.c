/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (max((var_3 == var_11), (-13361 < 13365)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = -13361;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 += (min((((arr_11 [i_0] [7] [7] [i_3]) ? ((var_8 ? var_1 : -13361)) : (((max((arr_7 [i_0 - 1] [i_2]), (arr_9 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0 + 1]))))))), ((((arr_6 [i_1]) && (arr_6 [i_4]))))));
                                arr_16 [6] [1] [i_0] [i_3] [i_4] [6] [i_3] = ((~(((arr_14 [i_0 - 2] [i_0]) - (arr_14 [i_0 - 1] [i_0 - 1])))));
                            }
                        }
                    }
                }
                var_17 = ((!((((arr_8 [i_0 - 1] [i_0]) << (((arr_8 [i_0 - 3] [i_0]) - 48)))))));
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_18 *= (((min((((arr_13 [i_0] [i_0] [i_1] [i_5 + 1] [i_5] [i_6] [i_7 - 1]) * 1)), 1865279488)) / (max(108, (arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [11] [i_0])))));
                                arr_26 [i_0] [i_1] [i_5] [i_6] [i_5] |= ((((((max(var_10, (arr_15 [i_0] [i_0] [10] [i_5 - 1] [1] [i_6] [i_7]))) % 147))) ? var_9 : (arr_5 [i_0] [i_5 + 1] [i_6])));
                                var_19 = (((max(var_7, -827465972))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_1;
    #pragma endscop
}
