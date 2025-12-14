/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = (var_0 * var_6);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 *= ((((arr_0 [i_0] [i_0]) && (arr_0 [i_0] [i_0]))) ? (((arr_0 [i_0] [i_0]) * 4294967290)) : (max(1494176677, -2403)));
        var_15 &= (((min(17688242982005523771, 15923)) < (((-15924 ? (arr_0 [i_0] [i_0]) : -23126)))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] = ((-3152649552 ? ((32767 ? 8388607 : (arr_4 [i_1]))) : (((max(-15923, 15944))))));
        arr_6 [i_1] = ((((min(241446145228203675, (arr_2 [i_1] [i_1])))) ? ((max(var_10, 23125))) : ((((arr_3 [i_1]) < -3626)))));
    }
    #pragma endscop
}
