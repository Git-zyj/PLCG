/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!-0);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = 1;
        arr_3 [i_0] = (max(13377670785130195190, 1));
        var_18 += ((~(!1)));
        arr_4 [i_0] = 1;
    }
    var_19 ^= (min(var_4, (((~(min(var_0, 1)))))));
    #pragma endscop
}
