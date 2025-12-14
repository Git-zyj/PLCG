/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_11 = (max(var_11, (((3280192597283250295 ? (24146 || -82) : 9223372036854775807)))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            arr_8 [1] = (((arr_0 [i_0 + 3] [i_1 + 1]) ? 2147483647 : (arr_6 [i_0] [i_1])));
            var_12 = (min(var_12, (arr_3 [i_0])));
            var_13 -= (!(!3351777485));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_14 [i_2] = 3280192597283250295;
                        var_14 = -4928487774417620580;
                    }
                }
            }
            var_15 = var_8;
        }
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            var_16 = 4481668812528704134;
            var_17 = 2808;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_22 [2] [i_5] [i_5] = (arr_1 [i_0 + 2]);
            arr_23 [i_0] [i_0] [i_0] = (-9109352935793548754 / var_0);
            arr_24 [i_0] [0] [i_0 + 2] = 8033954410539967094;
        }
        var_18 *= var_2;
        var_19 = (min((arr_9 [i_0 + 4]), var_8));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_20 -= (arr_4 [i_6] [i_6]);
        arr_27 [i_6] = -24141;
    }
    for (int i_7 = 1; i_7 < 17;i_7 += 1)
    {
        var_21 *= (min((arr_28 [i_7 - 1] [6]), (min((arr_29 [i_7 + 1] [i_7]), (arr_29 [i_7 - 1] [12])))));
        arr_30 [i_7] = ((+(((arr_28 [i_7] [11]) >> 31))));
        var_22 = (max(var_22, (arr_28 [i_7] [i_7])));
        var_23 += arr_28 [i_7] [i_7];
        arr_31 [i_7] [i_7] = ((((-(arr_29 [i_7 - 1] [i_7 - 1]))) % ((6526626570610036670 ? (arr_29 [1] [i_7 - 1]) : var_9))));
    }
    var_24 = 8033954410539967096;
    #pragma endscop
}
