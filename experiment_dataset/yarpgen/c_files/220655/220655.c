/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 *= (min(((max((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), ((!(arr_0 [i_0] [i_0])))))), (max(0, 9569))));
        arr_2 [i_0] |= max(31661, 1);
    }
    var_18 = var_16;
    var_19 = (min(var_19, ((((-32767 - 1) < -1)))));
    var_20 *= (max((min(var_5, ((max(var_8, var_9))))), var_1));
    #pragma endscop
}
