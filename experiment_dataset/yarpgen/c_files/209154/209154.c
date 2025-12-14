/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_8));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] |= (((((var_10 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (((arr_1 [i_0] [i_0]) << (var_0 - 985420156))) : (-32767 - 1)));
        var_15 = ((~(!1610612736)));
        var_16 = (min(var_16, var_11));
    }
    var_17 = -var_7;
    var_18 += (max(var_2, (((((18446744073709551615 ? -1 : (-32767 - 1)))) ? var_5 : var_8))));
    var_19 = (((1 ? (~18446744073709551615) : (((max(var_2, 1)))))) > 1);
    #pragma endscop
}
