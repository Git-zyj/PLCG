/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!4294967278);
    var_18 = (max(var_12, var_2));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = ((((((724658103 ? var_6 : 9177020555360300773)))) || (!0)));
        var_20 = ((max(5329171978090088936, -3252278218175515932)));
    }
    var_21 = var_4;
    #pragma endscop
}
