/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = var_6;

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_12 = (((arr_12 [i_4] [i_1] [i_2] [i_1] [i_0] [i_0] [i_0]) ^ 40869));
                            var_13 *= (max(-103, (((arr_12 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1]) ? 5988 : var_5))));
                            arr_13 [i_0] [i_3] [i_2] [i_0] [i_0] = max(((min((arr_0 [i_0] [i_4]), (arr_12 [i_4 - 1] [i_4] [i_4] [i_4] [i_4 - 1] [i_1] [i_1])))), 0);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_16 [i_0] [i_1] = ((arr_10 [8] [i_0]) < -78);
                            arr_17 [i_0] [i_1] [i_0] [i_3] [i_5] = ((-977681364 ? -103 : 87));
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            var_14 *= (arr_8 [i_0] [i_1] [i_3] [0] [i_6 - 1] [i_0]);
                            arr_20 [i_0] [i_3] [i_0] [i_1] [i_0] = (arr_10 [i_0] [i_0]);
                            var_15 = (max(var_15, var_5));
                        }
                        var_16 = (arr_2 [i_3] [i_2] [i_1]);
                        arr_21 [i_0] = (var_0 >> 2139714260);
                        arr_22 [i_2] [i_0] [i_2] [i_2] [i_2] [i_0] = -6004;
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_17 = (max(var_17, (((min((((arr_24 [i_0] [i_0] [i_0] [i_7]) - -6004)), (arr_18 [i_2] [i_2])))))));
                            var_18 ^= (!var_4);
                            arr_28 [i_0] [i_8] [i_7] [i_2] [i_1] [i_0] = 27;
                        }
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_19 = (min(var_19, -977681364));
                            arr_32 [i_0] = ((-((((arr_26 [i_0]) + var_8)))));
                        }
                        arr_33 [i_7] [i_0] [i_1] = var_10;
                    }
                    var_20 = (arr_30 [i_1]);
                    arr_34 [i_0] [i_1] [i_0] [i_0] = (max(((((1 ^ (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (~3065058430)));
                }
            }
        }
    }
    var_21 = max(var_6, (((~(var_9 && var_9)))));
    #pragma endscop
}
