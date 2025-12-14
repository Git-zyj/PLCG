/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = 19616;
        arr_4 [i_0] [4] = (((!255) >> (4294967295 - 4294967282)));
        arr_5 [i_0] = var_14;
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_8 [i_1] = ((19616 ? 62644462 : 255));
        var_18 = 255;
        var_19 = ((1923200861839205716 >> (var_15 - 3062)));
    }
    #pragma endscop
}
