/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = (arr_3 [i_0]);
        arr_5 [i_0] = (arr_0 [i_0] [i_0]);
    }
    var_18 = 1205311560;
    var_19 = (min(var_19, ((max(42432, 239)))));

    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_20 = max((((arr_7 [i_1]) ? (arr_8 [i_1]) : (arr_7 [i_1]))), ((((arr_8 [i_1]) ? var_17 : (arr_7 [i_1])))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_14 [i_2] = ((var_16 ? ((-(arr_11 [i_1] [i_2]))) : var_16));
            arr_15 [i_2] = arr_11 [i_1] [i_2];
            arr_16 [i_2] = var_6;

            /* vectorizable */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_21 = (~12107);
                var_22 = (arr_11 [i_1] [i_2]);
                arr_20 [i_1] [8] [i_2] [12] = var_0;
            }
        }
        arr_21 [i_1] [i_1] = ((-23108 ? ((247 ? var_4 : 6845796322361318108)) : 34));

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            var_23 = (min(var_23, var_1));
                            arr_31 [i_5] [i_5] [i_5] [i_4] [i_7] = ((-(((min(var_6, var_11))))));
                            arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] = min(var_5, ((((arr_17 [i_5 + 2] [i_5 + 1] [i_5 - 1]) || (arr_17 [i_5 + 2] [i_5 + 1] [i_5 - 1])))));
                        }
                    }
                }
            }
            arr_33 [i_1] [i_1] [i_4] = var_7;
        }
        var_24 = 12;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_25 *= (((arr_22 [i_8] [i_8]) ? (arr_17 [i_8] [i_8] [i_8]) : (arr_22 [i_8] [i_8])));
        arr_36 [i_8] = (9819919642630592876 / 1910935266);
        var_26 ^= 9819919642630592876;
        arr_37 [i_8] = var_16;
    }
    #pragma endscop
}
