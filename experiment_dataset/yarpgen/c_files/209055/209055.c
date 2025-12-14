/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_3 ? (!var_9) : -var_14))) ? var_12 : -9223372036854775791));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = -7649909005072106629;
        var_21 = ((-(((arr_1 [i_0]) ? var_14 : (arr_0 [i_0])))));
        arr_3 [18] [i_0] = ((-(((min(var_17, var_14)) + (arr_2 [i_0])))));
    }
    #pragma endscop
}
