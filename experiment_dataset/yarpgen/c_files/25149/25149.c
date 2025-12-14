/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_16 = 159;
        var_17 = 177;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_18 = 69;
                            var_19 &= 224;
                            var_20 *= 152;
                        }
                    }
                }
                arr_17 [i_1] [i_1] [i_3] = 78;
                arr_18 [i_1] [i_2] [11] [i_2] = 255;
                var_21 = 152;
            }
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                var_22 &= 255;
                var_23 = 255;
                var_24 = (min(var_24, 244));
            }
            arr_22 [i_2] [i_2] |= 189;
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            var_25 = 19;

            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                var_26 = 206;
                var_27 = (max(var_27, 2));
                arr_30 [i_1] [i_7] [i_8] [i_7] &= 130;
                var_28 = 255;
            }
            var_29 ^= 0;
        }
        arr_31 [i_1] = 19;
        var_30 = 78;
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 13;i_9 += 1)
    {
        var_31 *= 118;
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 14;i_11 += 1)
            {
                {
                    var_32 += 242;
                    var_33 = 182;
                    var_34 = (min(var_34, 92));
                }
            }
        }
    }

    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        var_35 = 30;
        var_36 = 122;
    }
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        var_37 = 2;
        var_38 *= 255;
    }
    var_39 = var_12;
    #pragma endscop
}
