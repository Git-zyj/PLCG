/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 255;
    var_17 = ((max(13370102299689019433, 1)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 -= (arr_1 [i_0]);
        arr_2 [i_0] = (((-(arr_1 [i_0]))) ^ ((var_9 ? (arr_0 [i_0] [i_0]) : 9871855337300949852)));
        var_19 -= ((var_5 < (53015 + 1)));
    }
    var_20 &= var_8;
    #pragma endscop
}
