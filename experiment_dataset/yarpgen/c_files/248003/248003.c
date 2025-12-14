/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_12 = ((+(((127 < (min((arr_1 [i_0] [i_0]), var_1)))))));
        var_13 = (!var_9);
        var_14 *= ((!(3 && 3549684906)));
    }
    var_15 = (max(var_15, (var_8 <= 13)));
    var_16 = var_0;
    var_17 = (min(6805168194788050999, 2616969757));
    var_18 += var_0;
    #pragma endscop
}
