/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_2 && (+-915711838)));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_14 = ((((((arr_0 [i_0 + 2]) ? var_11 : (arr_0 [i_0 - 1])))) || var_5));
        var_15 = ((-(arr_0 [i_0 + 2])));
    }
    var_16 = (var_7 + -var_12);
    #pragma endscop
}
