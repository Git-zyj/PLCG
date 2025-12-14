/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((0 ? 0 : -46));
        arr_4 [i_0] = ((-552589766 ? (((-552589766 ? -552589766 : 511))) : (-248381837 / 1090581318650137660)));
        var_20 = (((-86 ? 552589752 : 511)));
    }
    var_21 = (((-(81 / -7784888536879877861))));
    #pragma endscop
}
