/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((-(max(((max(var_13, 25017))), (64512 & -352466255193890353)))));
        arr_3 [9] |= (((max((((arr_1 [i_0] [i_0]) + var_3)), (var_13 <= var_5))) * (25017 >= 40517)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_18 = (max(var_18, ((((((40521 ? (arr_4 [i_0] [i_0]) : (-32767 - 1)))) ? (!var_7) : ((-19596 ? 18381 : var_3)))))));
            var_19 = 100;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_16 [i_0] = var_7;
                        var_20 = ((18365 > ((25017 ? 25018 : 40517))));
                        var_21 = -112;

                        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            var_22 = (min(var_22, ((((65535 <= 1) - (((arr_12 [6] [i_4] [i_5]) ? var_10 : var_6)))))));
                            arr_19 [i_0] [i_5] [8] [4] [i_5] = var_17;
                            var_23 = (~9223372036854775807);
                            var_24 = (((arr_9 [i_3 - 1] [i_3 - 1] [i_4 + 1]) <= 20820));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            var_25 *= 109;
                            var_26 *= (((arr_6 [i_3 - 1]) != (arr_7 [10] [i_3 - 1] [i_3 - 1])));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            var_27 = (max(var_27, var_3));
                            var_28 = ((~(arr_30 [i_0] [i_2] [i_0] [i_8] [i_9])));
                            var_29 = ((-(arr_9 [i_8] [i_2] [5])));
                            var_30 = (((-25164 >= var_10) ? var_15 : (1 >= 65535)));
                            arr_32 [1] [i_7] [i_7] [i_8] [5] [i_9] = (arr_21 [i_0] [i_8] [i_7] [i_8] [i_9]);
                        }
                    }
                }
            }
        }
    }
    var_31 = (max(var_31, (((18365 ? ((min(65526, 0))) : var_16)))));
    #pragma endscop
}
