/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 65535;
    var_15 = 0;
    var_16 = var_6;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = var_1;
        arr_4 [16] = ((((((~(arr_2 [i_0] [1])))) ? (arr_1 [i_0] [i_0]) : ((65535 ? (arr_1 [i_0] [i_0]) : 124679826)))));
    }
    var_17 = var_4;
    #pragma endscop
}
