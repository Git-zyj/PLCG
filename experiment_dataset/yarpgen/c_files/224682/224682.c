/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_1, var_2));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0 - 2] = ((max((arr_0 [i_0 + 1]), 0)));
        arr_3 [i_0 - 2] [1] = (var_18 ? ((min((arr_0 [i_0]), var_8))) : 0);
    }
    var_21 = (max((min(211, ((var_8 ? var_9 : var_4)))), var_6));
    #pragma endscop
}
