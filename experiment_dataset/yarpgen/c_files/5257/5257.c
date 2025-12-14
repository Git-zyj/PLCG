/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_10 = -9060;
                var_11 -= (min((((max(662516152, var_6)) + ((((arr_5 [i_0] [i_0]) ? var_4 : var_4))))), (((-(arr_1 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_12 = (max(var_12, (arr_12 [i_0] [i_0] [i_2] [i_3])));
                            var_13 *= (((((arr_13 [i_0] [11] [i_3]) && (arr_11 [i_0] [i_0] [i_1] [i_2] [i_3]))) ? ((min(-108, var_6))) : var_7));
                            var_14 = ((((((arr_0 [14]) ? (!2893948375) : -22))) ? (~2078572672) : (min(((max((arr_1 [i_1]), var_7))), -var_1))));
                        }
                    }
                }
                arr_14 [i_0] [i_1] [i_1] = ((-(~-9080)));
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_15 *= (arr_15 [i_4]);
        var_16 = var_5;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                {
                    var_17 = ((-1111261392 ? -32761 : 0));
                    var_18 -= 0;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 21;i_9 += 1)
            {
                {
                    var_19 -= (((~(arr_28 [6] [i_9 + 3] [i_8 + 1] [6]))));
                    arr_30 [1] [i_8] [i_9] [i_9] = (((((max((arr_22 [i_7]), 1)) ? 1 : (-1 - var_3)))) ? -32761 : ((min((arr_27 [i_7 - 1]), (arr_28 [i_7] [2] [i_9] [i_8])))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_10 = 2; i_10 < 23;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    {
                        arr_44 [i_10] [i_11] [i_13] [17] [i_13] = ((!(arr_31 [5] [i_11])));
                        var_20 ^= 7884463129313358648;
                    }
                }
            }
        }
        var_21 ^= ((524287 ? -3293 : 544540070));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 24;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    {
                        arr_54 [19] [6] [i_14] = arr_35 [i_10] [i_16];
                        var_22 = (arr_43 [i_10] [i_14] [i_15] [i_10 - 1]);
                        arr_55 [i_14] [i_14] [i_14] [i_16] = (((0 + 1) + ((var_4 - (arr_35 [i_10] [i_14])))));
                    }
                }
            }
        }
    }
    var_23 = (~var_4);
    #pragma endscop
}
