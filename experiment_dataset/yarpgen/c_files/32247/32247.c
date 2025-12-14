/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = (min(var_12, 107));
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_14 -= ((~(0 * var_4)));
                        arr_11 [i_0 - 2] [i_0 + 1] [i_0] [i_0] [i_1] [i_0 - 1] = ((min((min(73, 18446744073709551615)), ((min((arr_1 [i_1]), var_4))))));
                        var_15 = (max(var_15, ((((((((arr_8 [i_0 + 2] [i_1 + 1] [i_3] [i_2] [i_3]) < ((var_1 >> (137 - 113))))))) & var_3)))));
                        arr_12 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_1] = (((arr_0 [i_0 + 1]) - (arr_6 [i_0] [i_1 - 2] [i_1 - 2] [i_3])));
                    }
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_1] [i_2] [i_0] = -var_2;
                        arr_16 [i_1] [2] = (min((((((((arr_1 [i_0 + 1]) + var_5))) < (((arr_6 [i_0] [i_0] [i_2 + 1] [i_4 + 3]) + -6491057719322116611))))), (((arr_4 [i_1]) * (!9199302620136293714)))));
                        var_16 = var_9;
                        var_17 += (((var_5 >> ((((max((arr_3 [i_1]), (arr_3 [i_1 + 1])))) - 189)))));
                    }
                    var_18 = (max((((((((arr_0 [i_1 - 2]) + 9223372036854775807)) >> (var_8 - 14346))) - (arr_5 [1] [i_2 - 1]))), 9223372036854775807));
                }
                var_19 = (arr_4 [i_1]);
                arr_17 [i_1] [i_1] = (7047352824173741709 ? ((-(min(var_9, (arr_6 [i_0 + 2] [1] [i_0 - 2] [i_1 - 2]))))) : (((min((arr_10 [i_0] [i_1] [i_0] [i_1]), (((!(arr_5 [i_0 + 1] [i_1 + 1])))))))));
            }
        }
    }
    var_20 = (min(var_20, (!var_8)));
    #pragma endscop
}
