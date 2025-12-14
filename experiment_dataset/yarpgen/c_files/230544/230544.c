/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [14] = 13743342822417639545;
        var_18 |= ((1009955893617972129 ? var_6 : (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_19 ^= 7076679820452269058;
        var_20 = 0;
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_21 ^= 18504;
        arr_8 [i_2] [0] = (arr_4 [i_2 + 2] [i_2]);
    }
    var_22 *= (min(var_11, 27));
    #pragma endscop
}
