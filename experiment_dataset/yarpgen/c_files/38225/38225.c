/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((1 ? -32761 : 1661057729));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (1 * 995775905);
        var_12 = (18446744073709551615 / -32761);
        arr_3 [i_0] = 1;
    }
    var_13 = -32764;
    #pragma endscop
}
