/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = 1125899890065408;
        var_19 = (!-32649);
        var_20 = min(var_14, (~250));
        var_21 = (((((~(arr_1 [7] [i_0])))) ? (~var_11) : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = 32635;
        var_22 = var_16;
    }
    var_23 = (min(var_23, var_3));
    var_24 = ((1152919305583591424 << (-1063403823 + 1063403849)));
    #pragma endscop
}
