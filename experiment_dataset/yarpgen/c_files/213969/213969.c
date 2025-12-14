/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((var_7 <= var_9), (min(var_11, var_12))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_14 *= (((15654681041969736474 != var_1) + ((max((arr_2 [i_0 + 1] [i_0]), 31)))));
        var_15 ^= (min((min(var_9, (arr_0 [i_0 + 2]))), (((26608 != (min(var_4, var_6)))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_16 = (min((-1334731885616307413 || -1), (0 > var_12)));
        var_17 &= (((((min(43, var_12)))) | (4294967295 & 1)));
        var_18 = ((((arr_3 [i_1] [1]) || 1)) || ((min(1, -25113))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_7 [i_2] = (max((min((arr_0 [i_2]), var_12)), ((min(var_12, 1)))));
            var_19 = (((max(var_0, (arr_0 [i_2])))) && (42047 & -27263));
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            var_20 *= (((var_1 + 2147483647) >> (609282015 - 609282002)));
            arr_12 [i_3] [i_1] [i_3] = (var_2 | var_7);
            var_21 = ((46 + (arr_8 [i_3] [i_3 - 3] [i_3])));
        }
        var_22 &= (max(((129 + ((90 >> (2147483647 - 2147483625))))), ((max((min((arr_6 [i_1] [i_1]), var_0)), (65535 || -1910))))));
    }
    var_23 = (max(var_23, var_4));

    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_24 = (4095 | var_10);
        var_25 = ((150 + (arr_0 [i_4])));
    }
    #pragma endscop
}
