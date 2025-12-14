/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!2610363047046496211);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((((var_8 ? (!2610363047046496211) : (max(-77, (arr_0 [i_0] [i_0])))))) ? 262142 : ((((((!(arr_0 [i_0] [i_0]))) && var_13))))));
        var_18 = ((~(arr_1 [i_0])));
        var_19 = (min(var_19, -1));
        var_20 ^= 840127654;
        var_21 = arr_1 [i_0];
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        arr_6 [i_1] = (!var_13);
        var_22 += arr_5 [i_1];
    }
    var_23 = ((1 ? var_16 : var_9));
    var_24 *= (!3171971659);
    #pragma endscop
}
