/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_11 = ((1 ? -78 : 26381));
                                var_12 *= -78;
                                var_13 = (min((arr_10 [i_2 + 1] [i_4] [i_4] [i_4 - 2]), (~var_0)));
                                var_14 = (min(-var_8, ((var_8 ? (arr_7 [i_0]) : var_2))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] = (max(((((max(77, 79))) ? (~var_3) : var_2)), ((~(min(var_6, var_3))))));
                            var_15 = ((var_7 * ((~(max(4294967279, var_9))))));
                        }
                    }
                }
                arr_22 [i_0] [i_0] = (min((((((arr_9 [i_1] [i_1] [1] [i_0]) && var_5)) ? ((max(var_0, var_8))) : -28435)), (arr_5 [i_0] [i_0])));

                for (int i_7 = 3; i_7 < 17;i_7 += 1)
                {
                    arr_27 [i_0] [i_1] [i_0] [i_7 - 1] = ((var_0 || (arr_24 [i_1 + 2] [i_7 - 1])));
                    arr_28 [i_1 + 2] [i_0] [i_7] = ((~((~(arr_15 [i_1] [i_7 - 3] [i_7] [i_7 - 1] [i_7 - 3])))));
                    var_16 ^= ((~(((var_6 || var_2) ? var_8 : var_5))));
                }
                for (int i_8 = 1; i_8 < 17;i_8 += 1)
                {
                    var_17 = (arr_8 [i_0] [i_0] [i_0]);
                    arr_33 [i_0] [4] &= var_3;
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_18 = 1051663741;
                                arr_40 [i_0] [i_0] [i_8] [i_9] [9] = (((((~(~var_5)))) ? ((min((arr_3 [i_1 - 1] [i_1 - 1] [i_1]), (arr_14 [i_1 + 1] [i_8] [i_8] [i_8 - 1] [i_8 + 1] [i_9 - 1])))) : ((~((var_2 ? var_5 : var_6))))));
                                var_19 ^= (max(var_3, ((~((min(1, (arr_32 [6] [i_1] [i_8 - 1]))))))));
                                arr_41 [12] [12] [i_8 - 1] [i_1] [i_0] [12] &= ((-22533 ? 2132462723 : (arr_19 [i_10] [0] [i_9 + 1] [0] [i_1 + 2])));
                                var_20 = ((max((arr_13 [i_9 - 1] [i_0] [i_0] [i_9 - 1] [i_10 + 2]), var_0)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((~(max((max(var_5, var_5)), (~var_1)))));
    var_22 = ((~((((max(var_2, -77))) ? (~79) : (max(-632819414097148531, -28420))))));
    #pragma endscop
}
