/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, 1019009927));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_17 = 1;
                    arr_8 [i_0] [i_1] [i_1] = 12878;
                    var_18 = (arr_3 [i_2 + 4] [i_1] [i_0]);
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_19 = var_10;
                    arr_12 [14] [2] [10] &= -1;
                }
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    var_20 = (((arr_5 [i_4 + 1] [i_4 + 1] [i_4 + 1]) ? (!0) : ((-3986279851877809910 ? 3986279851877809909 : (arr_11 [i_4 - 1] [16] [i_4 - 1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_21 [i_6] [i_5 - 2] [16] [i_0] [i_0] = ((65535 ? -3986279851877809910 : var_5));
                                var_21 = ((((max(var_3, ((0 ? var_6 : (arr_20 [15] [15] [8] [i_5] [i_6])))))) ? (max(1, var_4)) : ((var_14 ? ((((arr_10 [12] [i_1] [2]) ? 13 : var_7))) : (-9223372036854775807 - 1)))));
                                arr_22 [8] [i_1] [i_4 + 1] [10] [i_1] &= (arr_9 [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                    var_22 = (max(var_22, 1));
                    var_23 = (max(var_23, (((max(15467, (30001 << 0)))))));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_24 = ((11 ? ((((var_15 != (arr_15 [i_0] [i_7]))))) : var_4));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_31 [i_0] [i_0] [i_7] [5] [5] &= ((~((~(var_1 ^ -536870912)))));
                                var_25 = (max(var_25, 3020063863));
                                var_26 = ((((min(16352, 24194))) ? 29719 : var_8));
                                var_27 = ((-((((arr_17 [i_0]) != (var_6 | 3986279851877809909))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            {
                                var_28 = (min(var_28, 3986279851877809909));
                                var_29 = (((461852338885209995 > 255) ? var_9 : (-18077 + 12165)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {
        for (int i_14 = 2; i_14 < 12;i_14 += 1)
        {
            {
                var_30 = min((((arr_24 [i_14 - 2] [i_14 + 1] [i_14 + 1]) ? -32767 : (9185181317370761399 ^ 2271604922))), 93986686);
                var_31 = (max(var_31, ((~(~var_6)))));
            }
        }
    }
    #pragma endscop
}
