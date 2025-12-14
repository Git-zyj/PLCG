/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            var_14 ^= ((~(~var_1)));
            var_15 = (((arr_0 [i_1]) || 2712625713));
        }
        var_16 ^= (arr_1 [i_0]);
        var_17 = (min(var_17, (~1)));
        arr_7 [i_0] = var_2;
    }
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        arr_10 [i_2 - 2] = (((1 || -32759) * 1));

        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            var_18 = ((((2193185181339840637 >= (arr_13 [i_3])))));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_19 = (~1);
                        var_20 |= ((~(~43967536)));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_21 -= 0;
                        var_22 ^= ((-27 ? 18 : (27856 - 2147483639)));
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_23 = (max(var_23, (((((((arr_22 [4] [i_3 - 1] [10] [i_5]) ? (arr_11 [i_2] [0]) : var_10))) ? 65506 : 16416882052131714124)))));
                        var_24 = ((var_11 << (9443 + 29)));
                        var_25 = var_3;
                    }
                    arr_30 [i_2] [7] [i_4] [3] = ((+(((arr_28 [i_2 - 3] [11] [i_3 - 3] [i_4] [1]) ^ 1))));
                    var_26 += ((((var_11 >= (arr_27 [i_2 - 2] [i_2 - 2] [13] [i_4] [3]))) ? (arr_23 [i_3 + 1] [i_5]) : (arr_14 [i_2 - 1] [i_3 - 1])));
                    arr_31 [11] [i_3] [i_3] [i_3] [i_5] = (((arr_22 [i_2 - 3] [i_3 - 2] [i_3 - 2] [i_3 - 2]) == (arr_9 [14])));
                }
                for (int i_9 = 3; i_9 < 15;i_9 += 1)
                {
                    arr_34 [i_2] [i_2] [i_2] [6] = (((arr_8 [i_3 - 3] [i_4]) >> (var_13 + 26852)));
                    arr_35 [i_2] [i_9] [i_3 - 3] [i_9] [i_9] [i_4] = 88;
                    arr_36 [i_9] = ((((3645544854 >> (1368899554 - 1368899547))) % 3623506496));
                    arr_37 [16] [i_3] [9] [i_3 + 3] = (((arr_17 [i_2] [i_3] [i_4]) ^ (((arr_29 [i_9 - 2] [6] [i_9 - 3] [i_2] [i_9] [i_2]) ? var_2 : 2193185181339840646))));
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            var_27 = (((((2193185181339840637 ? var_4 : var_0))) ? var_9 : var_12));
                            var_28 = (arr_9 [i_3 + 1]);
                            var_29 = (((arr_8 [i_3 - 3] [i_3 - 2]) + var_12));
                        }
                    }
                }
            }
        }
        arr_42 [i_2 - 3] = (arr_32 [i_2] [i_2 - 1] [i_2 - 2] [i_2]);
        var_30 = (min(var_30, (((!(((~(arr_32 [i_2] [4] [1] [i_2])))))))));
    }
    var_31 = var_10;
    var_32 = var_1;
    #pragma endscop
}
