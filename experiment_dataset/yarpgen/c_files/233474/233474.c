/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_11;
    var_16 = 12742;
    var_17 = (((((max(6042525976384422538, 0)))) ? (~var_10) : var_3));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = 2;
        arr_5 [i_0] = ((~((-1952 ? ((min(65535, 12761))) : var_11))));
        var_18 *= var_14;
        var_19 = (min(var_19, -111));
        var_20 *= (arr_3 [10]);
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] = var_3;
        var_21 = 20872;
        var_22 = (arr_6 [i_1]);
        var_23 = (((-(65001 * var_8))));
    }
    #pragma endscop
}
