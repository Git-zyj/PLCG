/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (-15 & var_17);

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (min(((1210247994 ? (((max(0, var_0)))) : var_2)), var_0));
        var_19 = ((~((var_11 ? var_3 : var_12))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_20 = (((max(27, var_13))) ? (max(62, 14)) : (((15 == (min(var_4, 6191859149446632158))))));
        var_21 = ((((((1056964608 ? var_1 : (arr_4 [i_1]))) <= (((1 >> (113 - 106)))))) ? ((((2989854574 ? var_10 : -5)) >> (((min(4440660346462883011, var_15)) - 104)))) : var_6));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            arr_7 [i_1] [i_2] = (((1 <= 91) && (((1 ? -2 : 6031)))));
            arr_8 [i_1] = 229;
            var_22 += 32744;
            var_23 = (arr_1 [i_2 - 2]);
            var_24 = 0;
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            var_25 &= 8796093022207;
            arr_12 [i_3] = (max(var_13, ((min((var_6 / 1), (max(var_5, var_9)))))));
            var_26 = var_14;
            arr_13 [i_3] = var_6;
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            arr_18 [i_4] [i_4] = ((((!-15) && (((15067 ? 256 : 1))))));
            arr_19 [i_4] [i_4] = ((arr_16 [i_4] [i_1] [i_4]) ? ((3341347837 & ((2712607698 ? 4419245783819001863 : (arr_14 [i_1] [i_1] [i_4]))))) : (((1 >> (((var_17 | var_2) - 1998585654))))));
        }
        var_27 = ((min((var_4 + 61), 768)));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
    {
        var_28 = (min(var_28, (arr_20 [14])));

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            arr_27 [i_5] = ((var_5 | ((-106 ? 73 : -7458))));
            var_29 ^= arr_10 [8] [8];
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
        {
            arr_32 [i_5] [i_7] = (!var_11);
            arr_33 [i_5] [i_5] [i_5] = (max((753441872 || var_8), 61815));
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
        {
            arr_36 [i_5] [4] = ((65535 << (((arr_3 [i_5]) + 22822))));
            var_30 = var_0;
            var_31 = ((-((var_8 ? (max((arr_15 [i_5]), var_11)) : var_2))));
            arr_37 [i_5] = var_3;
        }
    }

    /* vectorizable */
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        arr_41 [i_9] [i_9] = (((29793 + -5875055315552361316) - 29793));
        arr_42 [i_9] = 1;
        var_32 = (1 - var_10);
        /* LoopNest 3 */
        for (int i_10 = 3; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 16;i_12 += 1)
                {
                    {
                        arr_50 [i_12] &= (((~-123) ? (-17130 < var_17) : var_9));
                        var_33 *= (6715 && 0);
                        var_34 = (((!var_8) ? 42 : 3737));
                        var_35 = (((~3413732462) + ((var_1 ? var_17 : var_8))));
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 15;i_13 += 1)
    {
        var_36 = (min(var_36, (((!(616530574629707841 / var_10))))));
        var_37 = var_1;
    }
    var_38 = (min(var_38, var_4));
    #pragma endscop
}
