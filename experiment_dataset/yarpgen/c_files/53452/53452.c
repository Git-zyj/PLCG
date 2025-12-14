/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = min(-23124, (((min(var_8, -611393812)))));
        var_19 += ((~((-(arr_1 [i_0])))));
    }
    var_20 = (max((var_2 || var_6), (((var_0 ^ var_2) >> -var_0))));
    #pragma endscop
}
