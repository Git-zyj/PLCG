/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((min(((53396 << (((~var_10) - 1145034436)))), ((((12140 << (-119 + 122))))))))));
    var_17 *= var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 += (((var_5 & 65531) | 53402));
                    var_19 *= ((arr_1 [i_0] [i_0]) >> (((arr_5 [i_1 + 3] [i_1 + 3]) - 13596)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 += (((max((arr_1 [i_1 + 2] [i_2]), (arr_1 [i_3] [i_2]))) == (arr_1 [15] [i_3])));
                                var_21 = ((((((~(((-1902 + 2147483647) << (((arr_14 [i_0] [i_0] [i_2] [i_2] [i_2] [i_4 - 3]) - 10508)))))) + 2147483647)) << (((~var_13) - 123))));
                                arr_16 [i_0] [i_0] = ((((~(arr_10 [i_1 + 4] [i_1 + 4]))) > var_12));
                            }
                        }
                    }
                    arr_17 [3] = ((((min(((!(arr_8 [i_0] [i_0]))), (!36528)))) == -1));
                    arr_18 [i_0] [i_2] |= (!1848788218);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            {
                var_22 = (min((min((arr_22 [i_6] [i_6] [i_5]), (arr_19 [i_5] [0]))), (((var_14 ? (arr_24 [i_6 + 2] [i_6 + 1] [i_6 + 1]) : (arr_24 [i_6 + 3] [i_6 + 4] [i_6 + 2]))))));
                var_23 = (max(var_23, (((((((((min((arr_23 [i_6]), (arr_23 [i_5]))))) < (-28471 + 4294967295)))) | ((((16 * (arr_23 [i_6]))))))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            arr_30 [i_8] = (arr_25 [i_7 + 1] [i_7 + 1] [i_7 + 1]);
                            var_24 = (((arr_26 [i_6 + 4] [i_7 + 1]) + 12133));
                            arr_31 [0] [i_5] [i_5] [6] &= (36972 ^ (min(((-15851 ? 33554432 : 1)), (arr_23 [i_7]))));
                            arr_32 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_8] [i_6] = (((((min((arr_26 [i_5 - 2] [i_5 - 1]), var_11)))) <= (arr_21 [i_5 - 2] [i_5 - 1])));
                        }
                    }
                }
                arr_33 [i_6] [i_6] = ((((~(arr_22 [i_5] [i_6] [i_6])))) ? (arr_26 [1] [i_6]) : (arr_22 [i_5 + 2] [i_6 + 3] [i_5 + 2]));
            }
        }
    }
    #pragma endscop
}
