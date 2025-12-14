/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_9;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_14 = (max(var_14, ((max(-189163882, 189163882)))));
        arr_2 [i_0] = (min(((((((9223372036854775807 | (arr_0 [i_0])))) ? 149 : (arr_1 [i_0] [i_0])))), 11790032259531255));
    }
    var_15 = var_1;
    #pragma endscop
}
