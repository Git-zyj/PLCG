/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((((9510535481247358065 & (arr_0 [i_0 - 1] [i_0]))) != (2147483647 ^ -1)));
        var_15 |= ((max(1, (arr_0 [i_0] [1]))));
        arr_3 [i_0] = ((var_3 ? var_2 : ((1105270820007904975 | (((min((arr_1 [i_0]), 9))))))));
        var_16 += 281474976694272;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_17 = 1;
        arr_6 [i_1] [i_1] = 18;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        arr_9 [i_2 + 1] = (arr_7 [i_2]);
        var_18 = ((~(arr_0 [i_2] [8])));
    }
    var_19 += var_1;
    #pragma endscop
}
