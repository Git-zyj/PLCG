/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (min(((min((arr_4 [i_0]), (arr_1 [i_1])))), (max((arr_4 [i_0]), 395413603058977129))));
                var_17 = ((((var_11 ? (arr_1 [i_0 - 1]) : (arr_3 [i_0 + 1] [i_0]))) * (((-2097136 + 2147483647) >> (-457030837 - 51)))));
                arr_5 [i_0] [i_1] = (((((((arr_1 [i_0 - 1]) | var_1)) * (((var_4 / (arr_1 [i_1]))))))) ? ((min(var_6, (arr_1 [i_0 + 1])))) : (max((arr_2 [i_0] [i_1] [i_0]), (arr_2 [i_0] [i_1] [i_0]))));
            }
        }
    }
    var_18 &= ((((min(285536412, -1))) ? ((var_12 & (var_15 & var_12))) : ((var_6 ? ((min(var_9, var_6))) : (1835973690 | var_2)))));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_2] = (var_0 & (arr_7 [i_2 - 1] [6]));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_19 = ((((-(arr_12 [i_6 - 2] [i_6 - 2] [i_6 + 1]))) | ((var_15 ? 255 : (arr_14 [i_6 - 1])))));
                                var_20 = ((-((-(arr_4 [i_6 - 1])))));
                                var_21 = (((~((-2027702064 ? var_0 : var_7)))));
                                arr_21 [i_6] [i_5] [12] [i_2] [i_2] = (((~-335696239) * (max(13589, (-9223372036854775807 - 1)))));
                                arr_22 [i_6] [i_5] [i_3] [i_3] [i_2] = 96;
                            }
                        }
                    }
                    arr_23 [i_3] = ((var_11 % (min((((var_8 ? 477470133 : var_0))), (arr_0 [i_3])))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_22 = ((~((~(arr_0 [i_3])))));
                                arr_30 [i_2] [i_2] [i_2] = (((min((arr_17 [i_2 + 1] [i_2 + 1] [i_7] [i_8] [i_8]), var_14)) % (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])));
                            }
                        }
                    }
                    arr_31 [i_2] [i_3] = (min((min((var_11 ^ var_2), (((119 % (arr_12 [i_2] [i_2 - 1] [i_2 + 1])))))), (max((!16), (min(67108864, 96))))));
                }
            }
        }
    }
    var_23 = ((-(~var_14)));
    #pragma endscop
}
