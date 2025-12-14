/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((63 & (~3)))) ? -68 : (1103274486 / 15413)));
        var_15 = (max(var_15, ((min(((-(arr_1 [i_0] [10]))), (5139 * 15409))))));
        var_16 = ((((min(15414, (((arr_2 [i_0]) * 625466285))))) ? 1 : (((((arr_1 [i_0] [i_0]) || (arr_1 [19] [i_0]))) ? (2147483647 - 15409) : (arr_2 [i_0])))));
        var_17 = ((((arr_2 [i_0]) || (arr_2 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_18 += 50104;
        var_19 *= (((arr_2 [i_1]) && ((max((-32645 != 63), -19483)))));
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        arr_10 [2] [i_2] |= ((((max(49152, 131648671))) < ((-625466285 ? (arr_9 [i_2]) : ((((!(arr_4 [i_2])))))))));
        var_20 = (((24 != 625466280) ? 81 : (max(((1389380925 ? (arr_4 [i_2]) : 3742826423959485134)), 127))));
    }
    var_21 |= ((!(var_11 ^ 81)));
    var_22 = (((((~32644) || 1)) ? (((-625466285 ? -1787122154 : -76))) : (((-1956172759164800430 + 9223372036854775807) << (32635 - 32635)))));
    var_23 ^= 18446744073709551593;
    var_24 = var_12;
    #pragma endscop
}
