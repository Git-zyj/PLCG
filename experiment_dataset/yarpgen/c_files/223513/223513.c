/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = ((-256720365 ? 1 : 2147483647));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_1] [i_0] = -21116;
                    var_14 = ((58485 < (!1)));
                    arr_9 [1] [i_0] [i_0] = (-32767 - 1);
                }
            }
        }

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_13 [i_0] [12] [12] = 1;
            arr_14 [i_0] [i_3] = (((134217728 ? 1 : 1)));
            arr_15 [i_0] [i_0] = (1 == -64);
            var_15 = 1;
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_16 = (max(var_16, (min(((max(23, (1 >= 54650)))), (((1 ? -4536467217754027586 : -640318683278017169)))))));
        var_17 += (((((-57035023461882664 ? 1 : var_6))) ? (((-9223372036854775807 - 1) / -640318683278017200)) : (7675 / 640318683278017199)));
        var_18 |= (min(2826937883, ((max(1, 238)))));
    }
    var_19 = (max(var_19, (((((55 ? -3373531312013079631 : (var_5 + -2))) / (var_10 + var_7))))));
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_20 = 34;
                var_21 = (-2 ^ 1);
            }
        }
    }
    #pragma endscop
}
