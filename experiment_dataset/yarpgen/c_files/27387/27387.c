/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min((min(var_1, var_11)), (((((9451 ? var_0 : var_10)) == (var_3 >= var_3)))));
    var_13 = (max(var_13, ((min(var_10, (max(((744372010 ? -1 : 3546877473)), var_9)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_14 *= (((arr_1 [i_0 + 1]) ? 1 : (arr_1 [i_0 + 1])));
        var_15 = (min(var_15, (arr_1 [i_0])));
        var_16 = (arr_1 [i_0 + 1]);
        arr_2 [i_0] [i_0 + 1] = (9452 ? var_8 : (arr_1 [i_0 + 1]));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 7;i_2 += 1)
        {
            var_17 = (((3831744641 ? -9453 : 0)));
            var_18 = arr_9 [i_1] [i_2];
            var_19 = (((var_0 - (arr_7 [i_1] [i_2 + 1]))) > ((((arr_7 [i_1] [i_1]) < 2038629444))));
        }
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            arr_12 [0] [i_3] &= (!1677339445);
            var_20 *= 0;
            arr_13 [i_3] [i_3] = var_11;
            var_21 = (arr_7 [i_3] [i_3]);
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_22 += ((!(arr_14 [i_1] [i_4])));
            var_23 &= (arr_6 [i_1]);
            var_24 = arr_9 [1] [1];
            var_25 = var_8;
            var_26 = (((arr_1 [i_4]) % ((((arr_7 [i_1] [i_4]) | var_0)))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_19 [i_5] = var_11;
            var_27 = (max(var_27, (((var_0 ? (arr_3 [i_5]) : var_4)))));
            var_28 = 1;
            var_29 = (max(var_29, var_11));
            var_30 = 0;
        }
        var_31 = var_8;
        var_32 = (min(var_32, ((((arr_4 [i_1]) * (arr_4 [i_1]))))));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        arr_22 [i_6] &= min(((min((max(1, 32767)), 1))), (((arr_20 [i_6] [i_6]) % ((1918739058 ? (arr_21 [i_6]) : 0)))));
        arr_23 [i_6] = (((arr_21 [i_6]) < ((var_10 ? (arr_20 [i_6] [i_6]) : (arr_21 [i_6])))));
        var_33 = (min((arr_20 [i_6] [i_6]), (arr_20 [i_6] [i_6])));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        var_34 = ((-(arr_29 [i_6] [i_7] [i_7] [i_6])));
                        var_35 ^= (((4 ? 748089822 : 939720726)));
                        var_36 += ((((max((((arr_21 [i_9]) - var_4)), 2182541970))) ? (((-(arr_28 [i_6] [i_6] [i_6] [i_6])))) : (max(((max((arr_28 [i_6] [i_6] [i_6] [i_6]), 1))), 70235608))));
                        var_37 = ((((min((arr_21 [i_6]), (arr_24 [i_6] [i_9])))) ? (((min((max((arr_27 [i_6] [1]), (arr_29 [i_6] [i_7] [i_8] [i_8]))), 1)))) : (min((min((arr_21 [i_9]), var_2)), (arr_20 [21] [i_7])))));
                    }
                }
            }
        }
    }
    var_38 = 1;
    #pragma endscop
}
