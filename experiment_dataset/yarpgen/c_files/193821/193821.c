/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 -= ((max(-5228369086066528961, 128)));
                                var_17 = (-(((arr_4 [i_1 - 1] [i_0 + 2] [i_0 - 1]) ^ (arr_7 [i_1 - 1] [i_2] [i_2] [i_0 + 1]))));
                                var_18 *= 3021329453;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_19 = (max(var_19, (arr_11 [11] [11] [i_1] [i_1] [i_1] [i_5])));
                        var_20 = (arr_15 [i_0 + 2] [i_1 + 1]);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        arr_20 [i_6] [i_2] [i_2] [i_2] |= (~var_4);

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_21 = (((arr_17 [i_0] [i_0 - 1] [i_0] [i_0]) ? (arr_17 [i_0] [i_0 - 1] [7] [i_0]) : (arr_17 [i_0] [i_0 - 1] [i_0] [i_0 - 2])));
                            var_22 = (max(var_22, (((1273637857 ? 1273637868 : 1273637857)))));
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_23 = 1273637843;
                            var_24 |= 127;
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 8;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_25 = ((-((min((arr_15 [i_9 + 3] [i_0 - 2]), 15)))));
                                var_26 = (min((~139), (~1073741824)));
                                var_27 = ((31914 ? ((~(arr_13 [i_0] [5] [i_2] [i_2]))) : 1256224598448605470));
                                var_28 = (((arr_4 [i_1 - 1] [i_1 + 1] [i_0 - 2]) * (((arr_6 [i_9 + 1]) ? (arr_6 [i_9 + 1]) : (arr_6 [i_9 - 1])))));
                                var_29 = ((!(arr_21 [i_0] [i_1 - 1] [i_0] [i_9] [i_10])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 |= var_7;
    #pragma endscop
}
