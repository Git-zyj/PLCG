/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((4453654343827857853 + (var_8 / 1))), ((-32767 ? (7 > 0) : 0))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = (max(var_14, -31893));
        var_15 = ((((1 ? -16 : 36028797018963967)) * ((((8293592451764265679 < (arr_0 [i_0])))))));
        var_16 = 0;
    }
    var_17 = ((var_3 ? (-19 <= 0) : (((max(var_4, 1)) + var_4))));
    #pragma endscop
}
