/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_10 = var_6;
        var_11 = (14153727902412422574 << (var_4 - 15619));
        var_12 = var_1;
        var_13 = ((var_1 & (~var_8)));
    }
    var_14 = (max(var_14, var_5));
    var_15 = (min((6540 / var_0), var_8));
    var_16 = (min((((((16183512827708172398 ? -8379069653911822711 : 5915275917965747980))) ? var_9 : var_1)), var_5));
    #pragma endscop
}
