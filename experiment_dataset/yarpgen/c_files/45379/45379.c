/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = ((-1 && (arr_1 [i_0] [i_0])));
        var_15 = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_16 = 1;
        var_17 ^= (((((-2147483647 - 1) | (arr_1 [i_1] [i_1]))) & 3));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_18 = ((((((-13 + 9223372036854775807) << (((-12 + 52) - 40))))) ? (arr_6 [i_2]) : (((((arr_5 [i_2]) >= var_8))))));

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_11 [i_2] [i_2] [i_2] = (((((!(arr_5 [i_2])))) >> ((1 ? 12 : -30))));
            arr_12 [i_3] [i_2] [i_2] = -12;
        }
    }
    var_19 = var_13;
    var_20 = 1;
    #pragma endscop
}
