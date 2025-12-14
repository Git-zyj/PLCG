/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] &= (min(0, (-32767 - 1)));
        var_18 = (((((~((1 ? 3898252990 : 1))))) ? 1 : (-8013 ^ 807047004)));
        var_19 = (max(var_19, (max((((!(1 > 8471)))), (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 &= (((arr_4 [i_1]) ? (((1 || (-9223372036854775807 - 1)))) : (arr_3 [i_1] [i_1])));
        arr_5 [i_1] = ((var_2 && var_11) ? 1 : ((~(arr_4 [1]))));
        var_21 = (((((-9714 ? (arr_0 [i_1]) : 0))) ^ ((var_17 ? -9722 : 18446744073709551615))));
        var_22 += (((18446744073709551615 && 1) ? 11736 : ((((arr_1 [i_1]) || 8388352)))));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_23 = ((!(arr_3 [i_1] [i_2])));
            var_24 = (((arr_4 [i_1]) == var_7));
            arr_8 [i_1] = -9715;
            var_25 = (min(var_25, (((9715 >> (-1972123984 + 1972123985))))));
            arr_9 [i_1] [i_2] [i_2] = 251885846;
        }
        for (int i_3 = 4; i_3 < 15;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_26 = ((0 ? 1 : 17261834153208556665));
                var_27 = var_12;
                var_28 ^= (((arr_10 [i_1] [i_4]) >= (1 << var_1)));
                var_29 = (((63 / 1751681254) ? -8471 : ((var_11 ? 1025745541 : 1))));
            }
            arr_14 [i_1] [i_1] = ((!(arr_1 [i_3 - 3])));
            var_30 += ((((var_10 ? (arr_3 [i_1] [i_3 - 2]) : 1184909920500994926)) != (((2883379422 ? -21191 : 26195)))));
            var_31 = var_2;
        }
        for (int i_5 = 4; i_5 < 15;i_5 += 1) /* same iter space */
        {
            var_32 *= ((1 ? (9223372036854775807 ^ 18446744073709551609) : var_9));
            var_33 &= var_5;
            var_34 = 1184909920500994951;
        }
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_35 ^= 45015;
        var_36 &= ((((min(var_11, (!-24714)))) * (min((var_4 || 911801944), (((arr_17 [4]) ? 1935569015 : var_9))))));
        var_37 = (((8030249263924253528 ? -1 : 9223372036854775807)) & ((((var_10 < (((14896 ? 20688 : 1))))))));
    }
    var_38 ^= (min(var_16, (min(((min(16383, 8478))), (min(8371783318848721160, 10074960754860830428))))));
    #pragma endscop
}
