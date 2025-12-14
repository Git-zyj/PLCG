/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 + 1] [10] = ((((((arr_2 [i_1 + 1]) << (arr_7 [i_1 - 1] [i_1 - 2] [i_2])))) ? (min((arr_5 [i_1 - 3] [i_1 - 3] [i_1 + 1] [i_1 + 1]), (arr_2 [i_1 - 1]))) : ((var_5 ? (arr_2 [i_1 - 4]) : (arr_2 [i_1 + 1])))));
                    var_18 = (min(var_18, ((((((~32752) + 2147483647)) << (((arr_5 [i_0] [i_1 + 1] [i_1 + 1] [4]) - 3082140766)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [11] [3] [i_0] [i_0] [i_0] = (((((2182207237678464095 ? var_16 : (((var_12 ? (arr_6 [i_3 - 1]) : 32738)))))) ? ((((((arr_3 [1]) ^ var_8))) ? (var_7 | var_1) : (arr_10 [i_0] [3] [12] [i_0]))) : ((max(var_8, ((31 ? 1 : 1)))))));
                                arr_15 [i_0] [11] [i_0] [i_0] [8] [0] = (((((arr_11 [i_1 - 4] [i_3 - 2]) || (arr_13 [i_1 - 4] [i_3 + 1] [1]))) && ((((arr_11 [i_1 - 2] [i_3 - 2]) ? -1 : (arr_13 [i_1 - 4] [i_3 - 2] [9]))))));
                                arr_16 [1] [1] [i_2] [i_3 - 1] = ((var_14 ? ((2631201906 ? (max(-10, 32758)) : 32761)) : (((arr_3 [i_1 - 1]) ? (max((arr_0 [i_2]), var_16)) : (((arr_6 [i_0]) ? var_0 : var_3))))));
                                var_19 += (((-29 | -23018) * -var_10));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = 4294967288;
    #pragma endscop
}
