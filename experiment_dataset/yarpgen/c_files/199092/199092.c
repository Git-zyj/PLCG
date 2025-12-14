/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_20 += ((((((27 ? -4441 : 148)) ? (((max(40, 108)))) : 2830106295765442797))));
        var_21 = ((((~(6051 - var_3))) ^ (!var_17)));
        arr_3 [i_0] = ((~var_2) == ((~(-9223372036854775807 - 1))));
    }
    #pragma endscop
}
