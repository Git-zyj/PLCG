/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [3] = ((124 << (((arr_0 [i_0]) - 27919))));
        var_16 = (max(var_16, (arr_1 [i_0] [i_0])));
        var_17 = (max(var_17, ((((arr_0 [i_0]) % (arr_1 [i_0] [i_0]))))));
        var_18 = ((941554406 - (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_19 = (max(var_19, (arr_3 [i_1])));
        var_20 = ((((arr_4 [i_1]) & (4176326316695594522 | var_5))));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            var_21 = 1;
            var_22 = 2188522093884628247;
            var_23 = (min(var_23, -334580097));
        }
    }
    for (int i_3 = 3; i_3 < 6;i_3 += 1)
    {
        arr_11 [2] |= (((((!(arr_5 [i_3 + 3])))) >> ((((var_1 ? (arr_1 [i_3 + 4] [i_3 - 3]) : var_4)) - 414994076))));
        var_24 ^= (arr_8 [i_3 + 4] [1]);
        var_25 = (((max(((var_0 ? -48 : (arr_4 [i_3]))), (((!(arr_5 [i_3 - 2])))))) ^ (((57261 != (arr_9 [i_3] [i_3 + 4]))))));
        var_26 = -8765666776202628627;
    }
    var_27 = var_4;
    var_28 = -4466328240899311962;
    #pragma endscop
}
