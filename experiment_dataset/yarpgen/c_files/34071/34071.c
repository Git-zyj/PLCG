/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (!4294967293);
    var_15 ^= var_5;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 |= (arr_0 [i_0]);
        var_17 *= ((-(arr_0 [i_0])));
        arr_3 [i_0] [i_0] = 1;
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        var_18 *= (--4294967293);
        arr_7 [i_1] &= ((-(((17931 ? 5854687609537059116 : var_3)))));
        var_19 = ((~((var_3 ? 233 : (~6)))));
    }
    #pragma endscop
}
