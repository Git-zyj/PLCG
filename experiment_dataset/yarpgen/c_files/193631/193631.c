/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (!var_8);

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) == 4294967273));
        var_16 = ((~(((!((min((arr_1 [i_0 + 1]), 2305843009213693952))))))));
        arr_3 [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] [i_0] = 16140901064495857674;
        var_17 = (max(var_17, -4094));
    }
    #pragma endscop
}
