/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 64029;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (!1484);

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_22 = ((0 >> (1484 - 1484)));
                            arr_12 [i_1] [i_1] [i_2] = (arr_3 [i_1]);
                            var_23 = ((+(((arr_10 [i_0] [i_2] [i_1]) ^ (arr_3 [i_1])))));
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                var_24 ^= 8108;
                var_25 = (min(var_25, (arr_0 [i_1 + 1])));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        {
                            arr_21 [i_1] [i_1] [i_5] [i_6] [i_7] = (((arr_20 [i_7 + 2] [i_7] [i_7] [i_7] [i_7]) < (arr_7 [i_6])));
                            var_26 = ((!((((arr_17 [i_0] [i_1] [i_5] [i_6]) ? (arr_0 [i_0]) : (arr_19 [i_6]))))));
                        }
                    }
                }
                var_27 = ((-1481 ? ((var_8 ? 1507 : var_4)) : (arr_19 [i_0])));
            }
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_28 -= (((((64051 ? var_11 : 1))) ? ((1506 ? 40667 : (arr_14 [i_0] [i_8] [i_0]))) : (~64052)));
            var_29 = (-(arr_19 [i_0]));
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        var_30 = (max(var_30, (1500178638 + 1)));
        var_31 = ((((((arr_20 [i_9] [i_9] [i_9] [i_9] [i_9]) < var_3))) > (((arr_5 [i_9] [i_9] [i_9]) ? var_4 : (arr_6 [i_9] [i_9] [i_9] [i_9])))));
    }
    #pragma endscop
}
