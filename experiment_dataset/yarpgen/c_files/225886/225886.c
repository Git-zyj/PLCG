/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_12 = (((((~(~986887626698810060)))) ? -46978 : (~53633)));
        arr_4 [i_0] [i_0] = (max((~7449421216816112728), (((((1152736064519359937 ? 18558 : -1292440133)) < (~18558))))));
        var_13 = 141863388262170624;
        arr_5 [i_0] [i_0] = ((~(+-7402945444984816331)));
    }
    var_14 |= var_9;
    var_15 = (min((--22363), var_2));
    #pragma endscop
}
