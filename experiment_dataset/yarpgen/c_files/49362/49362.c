/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= min(65535, 4611686018427387904);
    var_18 = (max(var_18, (((((max(var_5, var_16))) ? ((((min(1, -79))) ? (var_10 % var_12) : var_8)) : ((((var_9 ? 17559029372163306844 : 1)) + (!var_6))))))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_19 = var_1;
        arr_4 [i_0] = (min(((14 ? 4611404543450677248 : 107260155)), (var_14 || var_11)));
        var_20 = (min(var_20, (((!((((((var_14 ? (arr_3 [13] [13]) : 59807))) ? (arr_3 [i_0] [i_0]) : (max((arr_0 [i_0] [i_0]), -9223372036854775797))))))))));
        var_21 = (min(var_21, var_16));
    }
    #pragma endscop
}
