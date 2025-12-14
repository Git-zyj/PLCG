/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_20 -= (~1);
                        var_21 = (+(((arr_9 [i_0] [7] [i_0] [i_0]) ? var_17 : (arr_4 [i_1]))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_22 = 207;
            var_23 = var_3;
        }
    }
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 13;i_9 += 1)
                    {
                        {
                            arr_27 [i_5] [i_6] [i_9] [i_8] [i_5] = (((3740078519 ? (((arr_24 [i_5] [i_6] [i_7] [5] [i_9]) - 0)) : (arr_26 [i_5] [i_5] [i_5 - 1] [i_7] [i_9 + 2]))));
                            var_24 = (min(var_24, (((-413 && (18736 || 0))))));
                            arr_28 [i_5] = ((var_17 ? (~0) : ((((arr_3 [i_9 + 3] [i_5 - 1] [3]) && (arr_18 [i_5] [i_6] [i_5]))))));
                            arr_29 [i_5] [0] [i_8] [i_7] [i_6] [i_5] = arr_8 [17] [i_9] [5] [i_9 - 1] [i_9 - 1];
                            var_25 = (min((arr_5 [i_5] [i_5 - 1] [i_9 + 3] [i_8]), var_4));
                        }
                    }
                }
            }
            var_26 ^= (((-2147483647 - 1) / 67));
            var_27 = 9223372036854775807;
        }
        /* vectorizable */
        for (int i_10 = 4; i_10 < 13;i_10 += 1)
        {
            var_28 = (((arr_14 [i_5 - 1]) - -29188));
            arr_32 [i_5] [i_5] = (((arr_17 [i_5 + 1] [i_10 - 1]) ? (arr_17 [i_5 - 1] [i_5 + 1]) : 15586678983278736360));
            var_29 = (max(var_29, (arr_4 [i_5 - 1])));
        }

        for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
        {
            var_30 = var_0;
            var_31 = var_15;
        }
        for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
        {
            var_32 = (max(var_32, ((max(((min(-29558, var_17))), (arr_21 [i_5 + 1]))))));
            var_33 = (!-1480430325);
        }
        for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
        {
            var_34 = var_9;
            var_35 += (((min(var_9, (var_4 | var_0))) < (18736 ^ var_11)));
            var_36 -= -157623556;
        }
    }
    #pragma endscop
}
