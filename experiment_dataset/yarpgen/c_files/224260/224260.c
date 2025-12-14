/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -1;
    var_14 -= var_4;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (((var_12 && var_1) ? 0 : (arr_2 [i_0 + 2])));
        var_15 = (!3);
        var_16 = var_7;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_17 = 4294967293;
        var_18 += var_4;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] = (var_1 ? 0 : 3);
                        var_19 = (228 == 1818151027);
                        var_20 = 4;

                        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_1] [i_5] [i_3] [i_4] = (((arr_5 [i_1] [i_1]) + (arr_12 [i_1 - 1] [i_2] [i_3] [i_1] [i_4 + 2])));
                            var_21 += 252;
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_2] [i_2] [i_6] = 10;
                            arr_21 [i_6] [12] [i_3] &= (arr_18 [0] [i_1 - 1] [0] [i_4 + 4] [i_4] [i_4 + 2]);
                            var_22 *= (arr_18 [i_1] [i_1] [i_1 - 2] [i_1] [i_1] [6]);
                        }
                    }
                }
            }
        }

        for (int i_7 = 4; i_7 < 15;i_7 += 1)
        {
            var_23 = ((4294967279 ? (arr_7 [i_1 - 3] [i_7 - 1]) : ((~(-9223372036854775807 - 1)))));
            arr_24 [i_7] [i_7] = (((arr_22 [i_1 - 1] [i_7] [i_7]) ? (arr_4 [i_1 - 3]) : var_11));
        }
    }
    for (int i_8 = 3; i_8 < 16;i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] = (!-0);
        var_24 = (((((~(var_7 & 16)))) ? (((~var_0) % (min(511, (arr_8 [i_8] [i_8]))))) : ((min((arr_15 [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_8 + 1] [i_8 - 2]), 13862)))));
    }
    var_25 = var_3;
    var_26 = (min(var_26, ((~(((!((max(4294967292, -747010662))))))))));
    #pragma endscop
}
