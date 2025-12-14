/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((~(var_18 <= var_0))) | var_12);

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_20 = (min(var_20, (var_9 + var_10)));
        arr_3 [i_0 - 1] |= (((var_11 % (7331611824676826355 / 3060236934))));
    }
    var_21 = (~7331611824676826344);
    #pragma endscop
}
