/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 0;
    var_15 = (max(var_3, ((~(~var_1)))));
    var_16 = (!var_3);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (!2147483647);
        var_17 = (max(1, (((((var_0 ? 4294967271 : var_0))) ? (!var_3) : (!var_2)))));
        var_18 = var_4;
        var_19 = (min(var_19, var_7));
    }
    #pragma endscop
}
