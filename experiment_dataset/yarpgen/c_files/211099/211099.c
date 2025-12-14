/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_18 = (max(var_11, -85));
        arr_3 [i_0] = ((1058646315644182066 && (arr_2 [i_0])));
    }
    var_19 -= -85;
    var_20 = ((!((var_17 > ((var_8 << (85012753 - 85012749)))))));
    #pragma endscop
}
