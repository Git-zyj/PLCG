/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((max(var_3, 274877906943)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 ^= 13871;
        arr_2 [i_0] = ((4035422902 ? (arr_0 [i_0] [i_0]) : -847882238));
    }
    #pragma endscop
}
