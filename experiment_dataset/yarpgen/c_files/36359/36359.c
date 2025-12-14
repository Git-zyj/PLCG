/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_10 = -37079;
        arr_3 [i_0] = (((~14) | (((var_5 + 9223372036854775807) >> (-67108864 + 67108895)))));
        var_11 = (max(var_11, (((~((3160083419 >> (((arr_1 [i_0]) - 9274651279550799986)))))))));
    }
    var_12 = var_9;

    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_13 = var_9;
        var_14 = (max(var_14, ((((((((var_6 + -106623122) + 2147483647)) << (((((0 + -7088482700404185896) + 7088482700404185925)) - 29)))) * var_7)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_15 = (((arr_2 [i_2] [i_2]) <= (arr_2 [1] [i_2])));
        arr_9 [i_2] [13] = 1937683429559353449;
        var_16 = var_8;
        var_17 = (((arr_0 [i_2] [i_2]) ? var_9 : (arr_4 [i_2])));
    }
    for (int i_3 = 3; i_3 < 24;i_3 += 1)
    {
        arr_12 [i_3] = (((((7976365822318304159 << (((-7976365822318304160 + 7976365822318304211) - 51))))) ? -101 : 244));
        var_18 = var_6;
        var_19 = 4085;
    }
    for (int i_4 = 4; i_4 < 7;i_4 += 1)
    {
        var_20 = var_2;
        var_21 = (min(var_21, ((((((!15771477804613497832) >> (-var_1 + 14633)))) ? (((((var_7 ? (arr_10 [i_4] [i_4]) : -4080))) ? ((59461 ? var_3 : -3099915704448007225)) : (arr_7 [i_4 + 3] [i_4 + 3]))) : (arr_1 [i_4 - 1])))));
        var_22 = (1972516582 - var_5);
    }
    var_23 = var_5;
    #pragma endscop
}
