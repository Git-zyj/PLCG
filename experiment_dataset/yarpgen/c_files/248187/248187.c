/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_6, ((var_7 ^ ((min(106, var_16)))))));
    var_18 = (min(var_18, var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 = (max((((-(arr_6 [i_2 + 2] [i_0] [i_1 - 2] [i_1 - 2] [1] [i_3])))), ((9223372036854775793 ? 9223372036854775807 : -107))));
                                arr_12 [i_0] [i_0] [i_1] [i_0] [i_3] [i_0] [i_4] = var_7;
                                var_20 = ((-119 / (1168495525 / 227)));
                            }
                        }
                    }
                    var_21 = var_12;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_22 += var_10;
                                var_23 ^= ((((max((~65513), 113))) ? ((((arr_13 [i_0] [i_1] [i_0] [2]) | (arr_10 [i_0] [i_1 - 1] [0] [i_5] [i_6] [i_6])))) : ((~(arr_5 [i_0] [i_2 - 2] [10] [i_5 - 1])))));
                                arr_17 [i_0] [i_1] [i_1] [i_1 + 2] = ((min(28, (max((arr_10 [i_0] [i_1] [i_0] [i_5] [i_5] [i_6]), var_3)))));
                                arr_18 [13] [i_1] [i_0] [i_6] = ((((var_14 ? 0 : (arr_13 [i_1] [i_1 - 1] [i_1 - 2] [i_0]))) + (!var_15)));
                                var_24 = (arr_8 [i_6] [i_6] [i_6 + 1] [i_6 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (var_1 | var_2);
    #pragma endscop
}
