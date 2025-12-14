/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_17 = (((-127 - 1) ? 9044 : 107));
        arr_3 [i_0 + 1] [i_0 - 1] = 1810836981;
    }
    var_18 = var_6;
    var_19 = (((((((min(107, -11495))) ? ((max(116, -118))) : 7))) ? ((max(var_4, var_5))) : (max(var_8, 11482))));
    #pragma endscop
}
