/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 = (((((~(arr_6 [i_0] [i_1])))) ? ((8192 ? 12779801113355969617 : (arr_9 [i_1] [i_1]))) : ((((arr_6 [i_0] [i_1]) >> (((arr_6 [i_0] [i_1]) - 4493)))))));
                                var_17 = min(((var_9 ? 25783 : (arr_11 [i_1] [i_1] [i_1] [i_1 + 2] [i_1 - 1]))), (-1578815726 % 17));
                                var_18 = (((((((arr_3 [i_1]) + 9223372036854775807)) << (min(var_0, (arr_13 [i_0] [i_0] [i_1] [i_3] [i_4]))))) > (~15943)));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_19 += (((((arr_12 [i_1] [i_1 + 2] [i_1 + 1] [i_0]) >> (((arr_12 [i_1] [i_1 + 3] [i_1 + 3] [i_2]) - 203)))) < var_11));
                        var_20 = min(255, (((arr_6 [i_0] [i_1]) ^ (25 & 14680064))));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 1; i_6 < 7;i_6 += 1)
    {
        var_21 = (((arr_0 [i_6 + 1] [i_6]) ? (arr_0 [i_6 + 2] [i_6 + 2]) : (arr_0 [i_6 + 3] [i_6])));
        var_22 = 243;
        var_23 = (arr_12 [i_6] [i_6] [i_6] [1]);
        var_24 = (((-17592186044416 <= -1326553977) ? 17862 : (var_2 ^ 211948521)));
    }
    #pragma endscop
}
