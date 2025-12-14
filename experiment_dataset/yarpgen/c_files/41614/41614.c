/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = -1047;
        arr_3 [i_0] = 1047;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] = (((~(arr_5 [14] [14]))));
        var_13 &= (1047 + -1048);
    }
    var_14 ^= (var_1 ^ var_6);
    var_15 = (min(var_15, (!var_1)));
    var_16 = ((min(-4718032355761269875, -1047)));
    #pragma endscop
}
