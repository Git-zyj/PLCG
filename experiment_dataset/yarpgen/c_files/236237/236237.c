/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_1;
    var_14 = ((((var_0 == var_9) != 934821382)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 -= (16406960314418243704 <= -var_2);
        arr_3 [i_0] = (var_4 ^ 16406960314418243704);
    }
    #pragma endscop
}
