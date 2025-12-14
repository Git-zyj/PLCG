/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((!var_1) < var_8));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 *= (max(32626, ((-((max(0, 0)))))));
        var_22 ^= 1;
        arr_2 [i_0] = -var_1;
        var_23 = (!0);
    }
    var_24 += var_17;
    var_25 = -3907452775619439516;
    #pragma endscop
}
