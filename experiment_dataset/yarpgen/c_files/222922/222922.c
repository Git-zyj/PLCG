/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(((~var_9) ? ((var_6 ? 6459902622702973183 : 127)) : var_12))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = ((114 ? ((var_1 ? var_7 : (min(116, (arr_4 [i_1] [i_1 + 1] [i_0]))))) : (min((min(18446744073709551615, 11986841451006578433)), (arr_7 [i_1 + 1] [i_0 - 1])))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_15 = (((!113172582) ? (((!(arr_1 [i_0 - 1])))) : ((var_12 << (((arr_6 [i_0 - 1] [i_0 + 1] [i_1 + 1]) - 216))))));
                    var_16 = (4181794714 ^ var_0);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_0] [i_1] [i_2] [10] [i_1] [13] = ((~((((var_8 - var_1) == (arr_1 [i_1 + 1]))))));
                                var_17 = ((((((~(arr_6 [i_0] [i_0 + 2] [i_0 + 2]))) + 9223372036854775807)) << (((min(((112 ? 107 : 113172594)), (arr_15 [i_0] [i_0 - 2] [i_0 - 3] [i_1 - 1] [i_1 + 1] [i_4]))) - 107))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    var_18 = (~(var_1 - 94));
                    var_19 = 120;
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    var_20 = -8710864440797583856;
                    arr_21 [5] = (((arr_0 [i_0 - 2]) + -var_0));
                }
            }
        }
    }
    var_21 = var_6;
    #pragma endscop
}
