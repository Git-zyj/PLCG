/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_14;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [19] [i_0] = 112;
        arr_3 [i_0] = (arr_1 [i_0 + 1]);
    }
    var_19 -= ((var_4 ? 31 : (var_11 ^ var_8)));
    var_20 &= var_10;
    #pragma endscop
}
