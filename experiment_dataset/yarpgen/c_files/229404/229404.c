/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_6, ((-13808768236447994603 ? 47142 : (var_6 % var_7)))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_14 ^= (min((((13808768236447994603 & 143) <= ((9223372036854775807 ? var_0 : 13808768236447994603)))), (((arr_0 [i_0 - 1] [i_0]) || (arr_0 [i_0] [6])))));
        var_15 = (max(var_15, ((max(((((min((arr_3 [i_0]), var_1))) ? (!4637975837261557012) : 5)), var_11)))));
        var_16 = (((arr_0 [i_0 + 1] [i_0 - 1]) << (((((arr_0 [i_0 + 1] [i_0 + 1]) | (arr_0 [i_0 + 2] [i_0 + 1]))) - 2080054931))));
        var_17 += (var_0 < 173);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (arr_4 [i_1]);
        var_18 ^= ((((max((((arr_4 [i_1]) ? var_11 : (arr_4 [i_1]))), (~var_5)))) ? ((-((0 ^ (arr_4 [i_1]))))) : (((((250 ? 4637975837261557013 : var_4))) ? (((arr_4 [i_1]) + (arr_5 [i_1]))) : (arr_5 [i_1])))));
    }
    #pragma endscop
}
