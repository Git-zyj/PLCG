/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_17;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] |= -var_13;
        var_20 = var_17;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_21 = (~35765);
        var_22 -= ((!(~var_10)));
        arr_6 [11] = var_13;
        var_23 ^= ((var_10 | (~135844148303572070)));
    }
    var_24 = ((-((~(3 | -955105867)))));
    #pragma endscop
}
