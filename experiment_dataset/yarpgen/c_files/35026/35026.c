/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = ((min((((-1 | (arr_1 [6])))), var_1)));
        var_12 -= (min(var_0, (((((arr_1 [10]) ? var_6 : var_6)) != var_6))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
            {
                var_13 = (((((~(arr_7 [9] [15])))) ^ var_5));
                arr_8 [4] [2] = (~199);
                var_14 = (max(var_14, (~var_9)));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_15 = (((arr_11 [i_3 + 1] [8] [1] [8] [15] [1]) ^ (arr_11 [i_3 + 1] [3] [13] [1] [6] [11])));
                            var_16 = var_9;
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
            {
                var_17 *= 54430500;
                var_18 = (arr_5 [10] [2] [2]);
                arr_17 [7] [i_5] [1] [11] = (arr_7 [13] [4]);
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    {
                        var_19 = (min(var_19, ((((78 ^ var_0) ^ ((var_7 & (arr_0 [15]))))))));
                        var_20 = (((arr_22 [0] [4] [5] [1] [0] [i_7]) * 1));
                        var_21 -= 4294967293;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        arr_32 [1] [i_8] [5] [3] [15] = ((-var_8 ? (((((max(181, -27470))) - var_10))) : ((var_9 ? var_5 : (((max(73, (arr_24 [9] [6] [12] [12])))))))));

                        /* vectorizable */
                        for (int i_10 = 3; i_10 < 15;i_10 += 1)
                        {
                            arr_36 [11] [5] [3] [i_8] = (((-26 ? var_3 : 199)) ^ (arr_18 [5] [1] [9] [3]));
                            var_22 = ((((arr_13 [4] [5] [8] [13]) ? (arr_14 [11]) : var_6)));
                            var_23 = (max(var_23, (27470 * 32767)));
                            arr_37 [i_8] = ((~(arr_29 [i_10 + 1])));
                            var_24 = 2187665809;
                        }
                        for (int i_11 = 3; i_11 < 15;i_11 += 1)
                        {
                            var_25 = (arr_20 [1] [3]);
                            var_26 = ((~(max(var_9, 2349534704))));
                            arr_41 [4] [3] [8] [i_8] = ((~(((arr_25 [9] [14] [11] [1]) ? (arr_40 [15] [4] [1] [3] [i_8] [i_11 - 2]) : (arr_27 [4] [14] [7] [14])))));
                        }
                        var_27 -= var_8;
                        var_28 *= (((arr_31 [10] [9] [i_8] [4] [6]) > (arr_40 [0] [8] [2] [0] [i_9] [10])));
                    }
                }
            }
            var_29 = (min(var_29, ((max(var_0, 23395)))));
            arr_42 [7] [15] = var_2;
        }
    }
    var_30 = min((max(var_9, 2985281102)), (65 > var_0));
    var_31 = (min(var_31, (((var_2 ? ((var_1 ? (44 ^ 13536842824122234456) : 2107301507)) : ((min(var_7, (var_6 & var_7)))))))));
    #pragma endscop
}
