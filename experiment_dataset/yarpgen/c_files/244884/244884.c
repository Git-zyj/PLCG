/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = min((65535 / 65522), 5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 = (max((~var_16), (11 && var_7)));
                                var_19 -= (min(((((arr_10 [i_0] [7] [i_2] [i_3]) && (arr_0 [i_2] [i_2])))), ((var_4 << (((arr_8 [i_1 + 1] [i_1 + 3] [i_1 + 4] [i_1 + 1]) - 45))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [1] [1] = ((-(((((115 ? var_16 : var_16))) ? 115 : var_2))));
                            }
                        }
                    }
                    var_20 = (max(98, (!1)));
                    var_21 = max(((-2690050640137812026 + (-127 - 1))), -91);
                    arr_17 [i_0] [i_1] [i_1] [i_1] = ((((0 ? 100 : 2)) >= (arr_8 [i_2] [i_2] [12] [i_0])));
                    arr_18 [i_1 + 3] [i_1 + 3] = ((((min((arr_0 [i_0] [i_0]), (arr_14 [i_2] [i_1] [i_0] [i_0])))) ? (!65535) : (((((var_9 ? var_5 : 99))) ? var_10 : ((min(-120, var_9)))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                {
                    arr_26 [i_6] [1] [i_7] [i_7] = (-108 | var_5);
                    var_22 = (!116);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    var_23 = (max(var_23, (((23 ? (arr_25 [i_8] [i_9]) : ((2983634097946418629 ? 102 : 3869745465)))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_24 = ((var_5 != (arr_11 [i_5] [i_5] [i_8 - 3] [i_9] [i_10] [i_11])));
                                arr_37 [i_5] [i_8 + 1] [i_9] [i_9] = (65529 / 130);
                            }
                        }
                    }
                }
            }
        }
        var_25 = -100;
    }
    #pragma endscop
}
