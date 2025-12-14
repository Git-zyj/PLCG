/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((max(-6488254565557430805, -6488254565557430805) % var_7)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = (max(var_15, (((6488254565557430805 | (arr_2 [i_0]))))));
        var_16 |= ((6488254565557430817 ? (max(var_3, (arr_0 [i_0] [i_0]))) : (~26599)));
        arr_3 [i_0] = (((arr_2 [0]) ^ ((1357480923 ? 38587 : 26958))));
    }
    #pragma endscop
}
