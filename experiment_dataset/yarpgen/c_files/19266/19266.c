/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_16 = (3688827184999426660 ? 990476968 : 4630115003619868549);
        var_17 = 433570309;

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_18 += (arr_5 [i_0] [i_1] [4]);
            var_19 ^= ((7705081094186670155 ? 4630115003619868549 : 114));
        }
        arr_6 [i_0] [i_0] = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((arr_12 [i_2] [i_2] [i_3 + 2] [i_5]) ? var_9 : var_6))));
                                arr_16 [i_0] [i_2] [i_0] [i_0] [i_5] [i_0] = var_4;
                                arr_17 [i_0] [13] [i_2] [i_3] [i_4] [i_5] = (((arr_8 [i_0]) ? -4630115003619868540 : 184));
                            }
                        }
                    }
                    var_21 += ((var_2 - -4630115003619868549) ? (arr_15 [i_3] [0] [i_0] [i_2] [i_3] [i_3 - 2]) : var_1);
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_22 = var_12;

        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
        {
            var_23 = (~((~(arr_5 [i_6] [i_6] [i_7]))));
            arr_23 [i_6] [i_7] = var_7;
            var_24 = var_8;
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                arr_29 [i_6] [i_6] [i_6] [i_6] = var_6;
                var_25 = (arr_0 [i_6]);
                arr_30 [i_6] [i_8] [i_8] = var_2;
            }
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                arr_33 [15] [i_6] [13] [i_8] = 1;
                var_26 = ((var_6 | (arr_12 [i_6] [i_6] [i_10] [i_6])));
            }
            arr_34 [i_6] [i_6] = -2696148260023532854;

            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                var_27 = 3070532946;
                var_28 &= (((arr_8 [i_8]) << (4024146084 - 4024146053)));
            }
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
        {
            var_29 = (arr_8 [i_6]);
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        {
                            arr_50 [i_6] = 44636;
                            arr_51 [i_6] = -344246677;
                            var_30 = (max(var_30, (((((((arr_46 [i_12]) + 4630115003619868548))) ? var_4 : (14321 - 0))))));
                            var_31 = 3304490327;
                            var_32 = ((-((630533238 ? var_4 : var_10))));
                        }
                    }
                }
            }
            var_33 = 67108864;
            var_34 = (arr_1 [i_6]);
        }
    }
    var_35 -= var_15;
    var_36 = (var_10 - 13426);
    var_37 = (((((((var_12 ? var_3 : -883870934))) ? (min(52358574697158635, -630533242)) : var_11))) ? 630533238 : ((var_3 * ((3304490336 ? 1976995906 : 7964931756109125448)))));
    var_38 = max(((1714686459 ? var_14 : ((-630533245 ? 32749 : 3304490357)))), var_8);
    #pragma endscop
}
