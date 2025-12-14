/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 -= 29212;
        var_15 &= (~255);
        var_16 = (~6);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_17 = (arr_2 [16] [i_1]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] = var_4;
                            var_18 ^= var_11;
                            var_19 = 0;
                            var_20 = (!1157949634);
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    var_21 = ((-32767 - 1) ? (arr_21 [i_7] [i_6] [i_5]) : ((var_4 ^ (arr_17 [i_5] [10]))));
                    arr_22 [14] [4] [i_7] [i_6] = -var_3;
                    var_22 &= (4019628249 - 1157949634);
                }
            }
        }
        arr_23 [i_5] [i_5] = var_2;
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        arr_26 [i_8] = (((((min(275339046, 13165479370222483815))) ? (((arr_14 [i_8]) - var_6)) : var_4)));
        var_23 = (((~var_4) ? (~-12133) : (~3137017661)));
        var_24 = (min(1136854288, 3137017662));
    }
    for (int i_9 = 4; i_9 < 19;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            var_25 = 103;

            for (int i_11 = 1; i_11 < 21;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_26 = -9223372036854775796;
                            var_27 &= (~-13);
                        }
                    }
                }
                arr_41 [i_9 - 1] [i_9] [i_11] = (~var_8);
                arr_42 [i_9] = (max(4019628239, 60));
                arr_43 [i_9] [i_10] = 1157949634;
                var_28 = (max((((max(var_3, var_9)))), var_5));
            }
        }
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            var_29 ^= 180;
            var_30 = (min(((1 + (arr_29 [i_9] [i_9]))), ((max(var_4, var_8)))));
            var_31 = (((max(51444, 0))) ? ((min(var_7, (((arr_37 [i_9]) ^ var_12))))) : (-3682229384111941410 - -14));
        }
        var_32 = (~var_8);
    }
    #pragma endscop
}
