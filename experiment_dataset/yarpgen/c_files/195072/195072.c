/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_2;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_20 = var_10;
        var_21 = 2211793436653121322;
        var_22 = (~var_1);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_13 [i_1] [i_1] [i_1] [i_2] = (((arr_6 [i_2]) ? (((-7537454442414635979 + 9223372036854775807) >> (-38 + 65))) : (arr_5 [i_2])));
                            var_23 += 3616913853223068443;
                            arr_14 [i_2] [i_4] [i_3] [0] [i_2] = (!-8226272124079847785);
                        }
                    }
                }
            }
            arr_15 [i_2] = 41236;
            var_24 = (max(var_24, ((((arr_2 [i_1]) << (((~-8226272124079847785) - 8226272124079847770)))))));
        }
        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            var_25 ^= ((arr_11 [i_1] [i_6] [i_1]) ? var_6 : (arr_9 [i_6] [i_6] [i_1]));
            var_26 -= (((arr_12 [14] [i_6] [i_1] [i_6 - 3] [i_1]) ? -8226272124079847757 : var_17));

            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                var_27 = -var_8;
                arr_21 [i_1] [i_6] [i_7] = var_11;
            }
            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_28 = (((arr_2 [i_1]) ? 0 : (arr_11 [i_8] [i_6] [i_1])));
                            arr_30 [i_1] [i_6] [i_8] [i_9] [i_10] &= (arr_7 [i_9] [i_6 + 1] [i_1]);
                            arr_31 [i_1] [i_6 + 1] [i_8 - 2] [i_9] [i_6 + 1] = (arr_0 [i_8]);
                            var_29 = (min(var_29, 1));
                            arr_32 [i_1] [i_6] = -8226272124079847748;
                        }
                    }
                }
                var_30 = var_8;
            }
            arr_33 [i_6] = ((arr_26 [i_6 - 1] [i_6] [i_1] [i_6]) ? ((((var_4 > (arr_9 [i_1] [i_1] [i_6]))))) : -8226272124079847785);
        }
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            /* LoopNest 3 */
            for (int i_12 = 3; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 15;i_14 += 1)
                    {
                        {
                            arr_45 [i_1] [i_1] [i_1] [i_1] [i_13] = 262143;
                            arr_46 [0] [i_13] [i_13 + 2] [i_12] [i_11] [i_13] [i_1] = (148 ^ var_0);
                        }
                    }
                }
            }
            var_31 -= (~var_11);
            arr_47 [i_11] [i_11] [i_1] = ((8226272124079847764 ? (~var_13) : (arr_5 [i_1])));
        }
        arr_48 [i_1] = 1;
        arr_49 [i_1] = 5419;
    }
    /* LoopNest 3 */
    for (int i_15 = 1; i_15 < 15;i_15 += 1)
    {
        for (int i_16 = 1; i_16 < 15;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 17;i_17 += 1)
            {
                {
                    var_32 = max((min(4908054914381881662, var_3)), (min(4908054914381881662, (arr_55 [i_15 + 1] [i_16 + 2] [i_17]))));
                    var_33 = (((arr_51 [i_16 + 2] [i_15 + 2]) + -29934));
                    var_34 -= (((((-5436 ? 12 : 15299) * (!1)))));
                    arr_57 [i_15] [i_16] [i_16] [i_17] = (arr_53 [i_17] [i_15 - 1]);
                    var_35 = ((118 ? (max((-9223372036854775807 - 1), (arr_1 [i_16]))) : var_6));
                }
            }
        }
    }
    var_36 &= var_5;
    #pragma endscop
}
