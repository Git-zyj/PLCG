/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_17 = var_4;
        arr_2 [i_0] = (((((var_14 ? -15 : var_7))) ? (max(34359738367, 0)) : (~31)));
        var_18 -= (max((((arr_1 [i_0 - 1] [i_0 - 1]) ? (arr_1 [i_0 + 1] [i_0 - 1]) : (arr_1 [i_0 - 2] [i_0 + 1]))), -23));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] = (((~0) % ((((~-2) ? ((max(93, var_9))) : (!var_2))))));

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_19 = (max(var_19, (((+(max((arr_9 [i_1] [i_2] [i_2]), (arr_0 [i_1] [i_1]))))))));
            arr_10 [i_1] [i_1] |= (-8796935061873046885 | 9223372036854775800);
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_20 = arr_8 [7] [i_3] [i_3];
            var_21 = (~43);
        }
        var_22 = ((arr_1 [i_1] [i_1]) ? (((-((-125 ? -5 : 0))))) : (min((~var_4), ((-2 ? var_9 : var_11)))));
        arr_14 [i_1] = (arr_12 [i_1]);
    }

    for (int i_4 = 3; i_4 < 8;i_4 += 1)
    {
        var_23 = -16;
        var_24 = var_3;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    var_25 = (((((((max(var_2, (-9223372036854775807 - 1)))) ? (!-4) : ((~(arr_17 [i_4] [i_4] [i_6])))))) ? ((((-(arr_9 [i_4] [1] [i_6]))) << (((var_15 + 649985781516339188) - 7)))) : var_1));

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_26 = (max(var_26, 2));
                        var_27 = max(908950929034753262, 7045890727233694972);
                        var_28 |= ((!((((arr_5 [i_4 + 1]) ? -106 : (arr_5 [i_4 + 1]))))));
                        var_29 *= (min(var_9, ((var_9 ? -2 : var_7))));
                    }
                    /* vectorizable */
                    for (int i_8 = 4; i_8 < 7;i_8 += 1)
                    {

                        for (int i_9 = 1; i_9 < 6;i_9 += 1)
                        {
                            var_30 = (((arr_26 [i_4] [i_4] [i_4] [i_9 + 2] [i_9 + 4] [i_9 + 2]) ? (arr_26 [i_4] [i_9] [i_9] [i_9 + 2] [i_9 + 1] [i_9 + 2]) : var_12));
                            var_31 = (127 < -6417421821379792341);
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_32 = (-((var_5 ? -1586316046026716065 : var_4)));
                            var_33 ^= (((-112 ? -23 : var_14)));
                            arr_29 [i_4] [6] [i_10] [i_8] [i_10] |= (((-1079293601502331666 / -4685695256925387388) ? (arr_15 [i_4 + 1]) : (~-1)));
                            var_34 = ((var_7 >> (var_9 / -15)));
                            var_35 = ((!(var_12 / 6752671513608086021)));
                        }
                        arr_30 [i_4] [i_5] [i_4] [i_8] = (-22 < 0);
                    }
                    for (int i_11 = 1; i_11 < 9;i_11 += 1)
                    {
                        var_36 *= (+-5641593740204353656);
                        var_37 = (!45);
                        var_38 = var_16;
                    }
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        var_39 -= (arr_8 [i_4 + 2] [i_4 - 2] [i_4 - 1]);
                        arr_36 [1] [i_4] = ((!(!-43)));
                    }
                    var_40 = arr_25 [6] [0] [i_5] [6] [8] [i_5] [i_6];
                }
            }
        }
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 7;i_14 += 1)
            {
                for (int i_15 = 3; i_15 < 6;i_15 += 1)
                {
                    {
                        arr_46 [i_4] [i_13] [i_13] [2] [i_15] [i_15 + 1] = (max((arr_12 [i_4 - 2]), (-42 - 127)));
                        var_41 = (max(var_41, 63));
                    }
                }
            }
        }
    }
    var_42 = var_1;
    var_43 = (min(var_43, 69));
    var_44 = (min(var_44, (((((-var_10 ? var_8 : var_5)) <= (--1))))));
    #pragma endscop
}
