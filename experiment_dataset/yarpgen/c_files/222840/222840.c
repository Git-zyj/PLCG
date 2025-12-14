/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] = ((var_12 ? ((var_13 ? -542646106 : -542646103)) : 524287));
                        var_19 = var_18;
                        var_20 = var_18;
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = var_18;
        var_21 = (max(var_21, ((((((-9223372036854775807 - 1) ? var_3 : -2098994091)))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_22 = ((1 ? 542646102 : var_8));
        arr_16 [i_4] = var_16;
        var_23 += var_6;
        var_24 += -1;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_25 = 9223372036854775807;
        var_26 = ((var_13 ? -66476493 : 542646118));
        var_27 += (((((var_8 ? var_7 : var_0))) ? -5133 : -542646115));
        arr_20 [i_5] = var_0;
        var_28 = (max(var_28, (((var_16 ? var_9 : 4)))));
    }
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            {
                var_29 = ((8573157376 ? var_3 : (-9223372036854775807 - 1)));
                var_30 ^= var_5;
                var_31 = var_14;
            }
        }
    }
    var_32 = -1;
    #pragma endscop
}
