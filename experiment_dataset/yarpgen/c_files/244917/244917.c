/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = (((arr_0 [i_0]) > (arr_0 [i_0])));
        var_16 = (!var_5);
        var_17 = (arr_2 [i_0]);
        var_18 += (((((arr_1 [i_0] [i_0]) ? 3960740618 : (arr_0 [i_0]))) - (((-1 ? 2141069661515906027 : -1)))));
    }
    var_19 = 1119308114;
    var_20 &= (max((1 >> 1), ((-((31 ? 123 : 55))))));
    var_21 -= ((536870912 ? -22 : -2107));
    #pragma endscop
}
