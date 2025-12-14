/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0 + 1] = 576320014815068160;
        var_17 = ((~(arr_3 [i_0 + 2] [i_0 - 1])));
        var_18 = (max((arr_2 [i_0 + 1] [i_0 + 2]), (arr_1 [i_0 - 1])));
        arr_5 [i_0 + 2] [i_0 - 1] = (arr_0 [i_0 - 1]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_10 [i_1] = (arr_0 [i_1 + 1]);
        var_19 = arr_8 [i_1 + 1] [i_1 - 1];
    }
    var_20 = ((var_14 < (65535 * 60)));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_21 = (min(var_21, ((~(arr_0 [i_2])))));
        arr_14 [i_2] = ((32767 >> (17870424058894483473 - 17870424058894483453)));
    }
    #pragma endscop
}
