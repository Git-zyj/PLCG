/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_10;
    var_15 = var_13;
    var_16 = (!1958873880);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 ^= (min((min((arr_7 [i_3]), 2336093401)), (arr_3 [1])));
                                var_18 |= var_3;
                            }
                        }
                    }
                    arr_13 [21] [i_1] [i_2] [i_1] = (arr_1 [2]);
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((min((((arr_8 [i_0] [1] [i_2] [i_5 + 3]) + (arr_5 [i_5 - 3] [i_5 + 1] [i_5 - 3]))), var_9)))));
                                arr_21 [i_0] [i_1] [i_2] = ((!(((1958873880 ? 1958873880 : 4000756000)))));
                                arr_22 [i_5 + 1] [i_5] [i_2] [i_6] [1] [i_2] = (max(((-97 ? ((var_7 ? (arr_4 [i_0] [i_0] [i_0] [19]) : var_9)) : -97)), (((106 << (((arr_5 [i_1] [i_2] [i_5]) - 2013766239)))))));
                                arr_23 [i_0] [i_1] [i_2] [i_5] [i_6] = (min(var_8, ((((~-394178877) << (((((arr_12 [i_6] [17] [i_2] [13] [i_1] [i_0]) + 137389484554981231)) - 3)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
