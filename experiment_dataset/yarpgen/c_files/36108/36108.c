/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((((((1 ? (126 & -9) : ((15 ? 11 : var_2))))) ? -6 : 1118822180470351014)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = ((!(arr_0 [i_0])));
        var_15 = (!8215684079200163401);
    }
    #pragma endscop
}
