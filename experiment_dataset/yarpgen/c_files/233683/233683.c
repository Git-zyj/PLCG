/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_4 ? (((!(((8215590031515866492 ? 3353631150 : var_5)))))) : ((min(28513, (!941336145))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 1] = (~8532956024508917747);
        var_20 = 0;
        var_21 = var_12;
        var_22 = ((4059596595 != var_4) ? 1494305271 : 1988429897);
    }
    #pragma endscop
}
