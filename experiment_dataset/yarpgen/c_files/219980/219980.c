/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_20 = 42;
        arr_2 [10] [i_0] |= (!((min((max(214, var_0)), (arr_0 [i_0 - 1])))));
    }
    var_21 = (((54 || 214) || var_18));
    var_22 += max(-12052, 70);
    #pragma endscop
}
