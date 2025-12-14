/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((max((min(var_9, 4294967295)), var_3)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = (max(var_16, (((((~(arr_0 [2] [i_0]))) > (((1 && (arr_0 [i_0] [i_0])))))))));
        var_17 = (min(var_17, -2));
    }
    var_18 ^= (!4283723139520621164);
    var_19 *= (((((var_2 ? var_5 : -114)) | var_1)));
    #pragma endscop
}
