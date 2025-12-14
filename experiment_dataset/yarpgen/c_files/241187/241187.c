/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((!(((2147483647 ? 77 : (!985027661))))));
    var_18 = -179;
    var_19 = (min(2359392019, 1935575282));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = arr_0 [i_0] [i_0];
        arr_3 [i_0] = (!169512878);
    }
    #pragma endscop
}
