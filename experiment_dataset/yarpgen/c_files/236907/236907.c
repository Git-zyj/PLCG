/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_11 |= 188;
        arr_4 [i_0] = (~68);
        var_12 = (max(var_12, (((15088900464823209415 ? var_0 : 1)))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    {
                        var_13 ^= var_10;
                        var_14 = ((var_2 ? -125 : -11));
                        var_15 = ((var_8 ? ((68 ? var_7 : var_1)) : var_4));
                    }
                }
            }
        }

        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            arr_15 [i_0] = -11;
            arr_16 [10] [4] [i_0] = 6;
            var_16 = -8;
            arr_17 [1] [1] [i_0] = 255;
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_17 *= ((3146756879057424673 ? 1 : 15299987194652126943));
        var_18 ^= (((((var_4 ? 3 : var_10))) ? 3146756879057424673 : 665287203));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        arr_22 [i_6] = ((var_10 ? var_4 : var_4));
        arr_23 [5] [i_6] = var_3;

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_19 &= ((var_1 ? var_5 : var_4));
            arr_27 [i_6] [i_6] [i_6] = 11;
            arr_28 [i_6] [i_6] = ((3357843608886342206 ? var_9 : var_5));
        }
        arr_29 [11] = ((15088900464823209410 ? var_4 : var_7));
    }
    var_20 = (max(var_20, (((-(((var_2 || (-8 || var_1)))))))));
    var_21 = (min(50, (!var_5)));
    #pragma endscop
}
