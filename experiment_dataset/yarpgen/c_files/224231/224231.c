/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = ((-1 ? (arr_1 [i_0 - 2] [i_0]) : (arr_1 [i_0 - 2] [i_0 + 2])));
        arr_3 [i_0] = ((208 * ((210 ? 207 : 18446744073709551614))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_7 [i_1] = 5070555733901730611;
        var_10 = (0 & (arr_6 [i_1] [i_1 + 2]));
    }
    var_11 += var_5;
    var_12 = var_2;
    #pragma endscop
}
