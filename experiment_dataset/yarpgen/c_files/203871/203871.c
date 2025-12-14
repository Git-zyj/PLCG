/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-((var_11 ? 4884 : ((var_0 ? var_4 : 2581534887142655370))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = (max((((7 == (((arr_1 [i_0]) ? 3887930317 : 3962431214))))), -4856604071166026923));
        var_14 += (max(((-(arr_0 [i_0]))), ((min(17373, -28460)))));
    }
    #pragma endscop
}
