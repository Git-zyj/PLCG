/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0] = (4064102766029563624 | var_15);
        arr_4 [i_0] = (32 | 1331216049);
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_7 [11] = -5328229059734711874;
        var_18 |= var_8;
    }
    var_19 = (((!var_11) ? ((min((min(0, var_17)), ((max(var_16, 24)))))) : (min(((0 ? 4294967271 : 9582443482325716949)), ((max(16645, 14)))))));
    var_20 = (4294967259 % 58638331);
    #pragma endscop
}
