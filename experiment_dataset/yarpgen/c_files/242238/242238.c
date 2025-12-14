/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max((((!(((var_8 ? var_1 : 28)))))), 12492142024730287330);
    var_13 = 52;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_14 = (min(var_14, ((~((~(arr_0 [i_0 + 1])))))));
        var_15 = (arr_0 [i_0]);
        var_16 -= -110;
    }
    var_17 *= ((max(4, 3563474806)));
    var_18 |= var_2;
    #pragma endscop
}
