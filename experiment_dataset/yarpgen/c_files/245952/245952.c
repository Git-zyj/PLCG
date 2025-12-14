/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_11 ? ((((((1491412173375573504 ? 49977 : 604499461))) ? (~var_7) : var_11))) : (min(3007512112, -1491412173375573505))));
    var_14 = 255;
    var_15 = var_3;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_16 = (!604499460);

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] = ((-var_5 != (arr_4 [i_0 + 3])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_3] = (((arr_1 [i_0 + 1] [i_0 + 1]) ? -1491412173375573525 : (arr_1 [i_0 + 2] [i_0 + 2])));
                        var_17 |= -109;
                        arr_13 [i_0] [i_0] [i_2] [i_3] = (arr_0 [i_0]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_18 = (6890 <= 0);
                        var_19 = (min(var_19, var_0));
                        arr_19 [i_5] [i_0] [i_1] = ((-(arr_11 [i_1 + 2] [i_0] [i_0] [i_0 + 2])));
                        var_20 = ((var_5 ? (arr_18 [i_4]) : (~9223372036854775807)));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            arr_22 [i_0] [i_0] [i_0] = var_6;
            var_21 = var_5;
            var_22 = (arr_17 [i_0] [i_0] [i_0] [i_0]);

            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                arr_27 [i_0] [i_7] = ((var_10 ? (arr_20 [i_0]) : -102));
                var_23 = ((!(arr_11 [i_0 - 1] [i_0] [i_0] [i_0])));

                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    var_24 = ((var_0 ? (arr_10 [i_0 + 2] [i_0 + 2] [i_0] [i_0]) : (arr_26 [i_0 - 1] [i_0] [i_0])));
                    arr_31 [i_7] [i_7] [i_0] [i_8] [i_0] = ((var_5 ? (arr_4 [i_0 + 2]) : (arr_9 [i_0] [i_0 - 1] [i_0 + 2] [i_0 + 3])));
                    var_25 = (arr_3 [i_0]);
                }
            }
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        {
                            var_26 = (var_8 * var_3);
                            var_27 ^= (((arr_32 [i_0] [i_0] [i_0] [i_0 + 3]) ? (arr_32 [i_0] [i_0] [i_0] [i_0 + 3]) : var_0));
                        }
                    }
                }
                var_28 ^= ((((((!(arr_8 [i_0] [i_0] [i_0] [i_0]))))) > var_5));
                var_29 = (min(var_29, (arr_14 [i_0 + 2] [i_0 - 1])));
                arr_41 [i_0] [i_0] [i_0] = ((3690467855 ? 0 : 86));
            }
        }
    }
    var_30 = 98;
    #pragma endscop
}
