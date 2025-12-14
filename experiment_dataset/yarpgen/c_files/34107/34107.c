/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_4 ? 4548733885081005449 : var_7));
    var_17 = (max(var_17, 17498625704756177187));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 -= ((-1829255447 % (((arr_1 [i_0]) ^ ((var_15 ? 8796093005824 : 30))))));
        var_19 = (((!((max(var_8, 8184))))));
        var_20 = 24;
    }
    #pragma endscop
}
