/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (~2147483584);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = ((arr_3 [i_0]) | -536870912);
        var_19 = 18446744073709551614;
    }
    var_20 = var_3;
    var_21 &= var_0;
    #pragma endscop
}
