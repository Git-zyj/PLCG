/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = 0;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 = 1;
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] |= 225;
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_17 [5] = -1;
            var_18 = (min(var_18, 59));

            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                arr_22 [i_0] [i_0] [i_5] [i_5] = 59;
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_19 = 196;
                            var_20 = -1213405161;
                            arr_29 [17] [i_4] [i_5] [i_4] [i_4] [i_4] = 64;
                        }
                    }
                }
                var_21 = 60;
                var_22 = 0;
                var_23 = -1213405180;
            }
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                var_24 = 1;
                arr_34 [i_4] [i_4] [i_0] = 54;
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_25 = 5861015946451538706;
                            var_26 = -1213405161;
                            var_27 = 3818851966004687327;
                        }
                    }
                }
                arr_41 [i_8] [i_4] [i_0] = 0;
                arr_42 [i_0] = 1;
            }
            arr_43 [i_4] [i_4] = 8060;
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
        {
            var_28 = (max(var_28, 59));
            var_29 = 4004323600;
            arr_46 [i_11] [i_11] = 16256;
        }
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            arr_50 [i_12] = 2321669048;
            var_30 = (min(var_30, 4470550334417060220));
        }
        for (int i_13 = 0; i_13 < 21;i_13 += 1)
        {
            arr_54 [i_0] [i_0] = 16258;
            arr_55 [i_0] [9] = 28311;
        }
        var_31 += 1;
    }

    /* vectorizable */
    for (int i_14 = 2; i_14 < 13;i_14 += 1)
    {
        arr_59 [i_14] = 16258;
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 14;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    {
                        var_32 ^= 122;
                        var_33 = 1;
                        arr_69 [i_15] [i_16] = 197;
                        arr_70 [i_14] [i_15] [i_16 - 1] [i_17] = 5861015946451538706;
                    }
                }
            }
        }
    }
    #pragma endscop
}
