/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max(var_7, (var_2 != 1)))) ^ var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = var_2;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                arr_11 [16] [i_0] [1] [i_1] [i_2] [i_0] [i_4] = (((((arr_10 [i_3 - 2] [i_1] [i_3] [i_3] [i_4]) / (arr_10 [i_3 - 2] [i_1] [i_3 - 2] [i_3] [i_4]))) % (((((max((arr_8 [i_0] [i_2] [i_1] [i_0]), (arr_2 [i_0] [i_0])))) % ((1621310347 ? 65535 : 1)))))));
                                arr_12 [i_0] = ((((arr_8 [i_0] [i_1] [i_3 - 2] [i_3 - 1]) ^ (!20785))) % 61777);
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_19 = ((1 != (arr_0 [i_0] [i_2])));
                                arr_15 [i_0] [i_0] = (i_0 % 2 == 0) ? (((arr_7 [i_0] [i_3 - 1] [i_5]) >> (((arr_9 [12] [i_0] [i_3 - 1] [i_3] [i_3] [i_3 - 2]) - 37142)))) : (((arr_7 [i_0] [i_3 - 1] [i_5]) >> (((((arr_9 [12] [i_0] [i_3 - 1] [i_3] [i_3] [i_3 - 2]) - 37142)) + 32003))));
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                arr_18 [i_0] [1] [i_2] [i_3] [i_6] = (arr_8 [i_0] [i_2] [1] [i_6]);
                                arr_19 [i_0] [i_0] [10] [i_0] [i_0] [i_0] [3] = (((((arr_17 [i_0] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_0]) + (arr_17 [i_0] [i_3 + 1] [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_0]))) <= (arr_17 [i_0] [i_3 - 2] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_0])));
                            }
                            var_20 = var_13;
                            var_21 = (34 >= 4);
                            arr_20 [i_3] [i_3] [i_2] [i_1] &= ((0 + ((7 ? var_12 : (((((arr_9 [16] [i_1] [16] [i_3 - 1] [1] [i_3 - 1]) >= (arr_0 [i_1] [5])))))))));
                        }
                    }
                }
                var_22 += (max((arr_1 [i_1]), (((arr_0 [i_0] [i_1]) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_1] [i_0])))));
            }
        }
    }
    var_23 = var_5;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {
                var_24 += (arr_9 [i_7] [i_7] [i_7] [i_8] [i_8] [i_8]);
                arr_26 [i_7] [i_7] = (((((18446744073709551615 != 16383) ^ 11832512437464978782))) ? ((var_0 ? (arr_13 [i_7] [i_7] [i_7] [i_7] [i_7] [14] [i_7]) : (arr_25 [i_7] [i_8]))) : (((arr_4 [i_7] [i_7] [i_7]) ? ((((arr_2 [i_7] [i_7]) != (arr_5 [i_8])))) : (arr_6 [i_8]))));
            }
        }
    }
    #pragma endscop
}
