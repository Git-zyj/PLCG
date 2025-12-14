/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 372;
    var_13 = 127;
    var_14 ^= var_1;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 32;
        var_15 = -32;
        var_16 = (min(var_16, 32));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_17 = 10308506910480344447;
        arr_7 [i_1] = ((var_10 ? (((((10308506910480344463 ? -80 : 65164))) ? 167213956 : 8138237163229207189)) : (((79 ? 21 : ((1 ? 0 : (-9223372036854775807 - 1))))))));
        var_18 = (max(var_18, -382));
    }
    var_19 = (max(32, var_5));
    #pragma endscop
}
