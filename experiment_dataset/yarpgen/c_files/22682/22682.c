/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [4] = -65462;
        var_18 = (min(var_18, 1225102122));
    }
    var_19 = ((~(!-6496)));
    #pragma endscop
}
