/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((816764031 ? var_6 : ((~(~var_4)))));
    var_20 = (min(var_20, 816764021));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = ((127 ? 1 : 5753612569104646661));
        arr_2 [i_0] = ((-1 + ((min(65516, 1)))));
        arr_3 [i_0] = ((var_16 == (((-(min(var_7, 816764031)))))));
    }
    var_22 = -789072813;
    #pragma endscop
}
