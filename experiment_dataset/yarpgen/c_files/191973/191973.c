/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_0 + 2147483647) << (5515831886173614222 - 5515831886173614222));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0 + 1] = 1;
        var_19 -= ((((((arr_2 [i_0]) ? (arr_1 [i_0]) : var_6))) ? -0 : 110));
        arr_4 [i_0] = ((((((arr_0 [i_0 - 1]) ? 13318407604788227446 : 684720651))) ? ((5128336468921324173 ? var_16 : (arr_1 [i_0]))) : ((5128336468921324181 ? (arr_2 [i_0]) : (arr_0 [i_0])))));
    }
    var_20 = (((var_16 & 5128336468921324170) ? (max(-442230062, 13318407604788227434)) : (((var_4 ? -76 : ((110432293 ? 253 : 0)))))));
    #pragma endscop
}
