/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_13 = ((-((~(arr_0 [i_0 + 2])))));
        arr_3 [i_0 - 1] = ((!(~335004951)));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_14 = -736491305;
        var_15 = (~192);
    }
    var_16 = (min(var_16, (~var_9)));
    #pragma endscop
}
