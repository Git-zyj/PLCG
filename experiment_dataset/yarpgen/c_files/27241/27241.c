/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 13280;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0 - 2] [i_0] = ((((arr_0 [i_0]) ? var_3 : (arr_1 [i_0] [i_0]))));
        var_17 += 14322413950949720795;
        var_18 -= (arr_1 [i_0] [i_0 - 3]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 -= (((arr_5 [i_1] [i_1]) + ((min(1, (arr_4 [i_1]))))));
        var_20 ^= ((~(((arr_3 [i_1]) & (arr_3 [i_1])))));
        var_21 &= (~-63);
        var_22 = 14322413950949720786;
    }
    #pragma endscop
}
