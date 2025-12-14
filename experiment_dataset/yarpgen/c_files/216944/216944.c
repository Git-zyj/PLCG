/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(22461, 87));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (((211 >> 30) ? (((min(1, 19191)))) : (max((((var_1 ? 3164104053511915244 : 1))), ((5260860186867172509 ? 5638558863583261471 : (arr_2 [i_0])))))));
        arr_4 [i_0] [i_0] = var_0;
        arr_5 [i_0] = ((var_3 ? ((((~1) & ((max(var_15, (arr_1 [i_0]))))))) : ((~((20039 ? (arr_0 [i_0]) : 12808185210126290144))))));
    }
    var_18 = ((-(max((var_0 ^ var_12), (min(47437, var_11))))));
    #pragma endscop
}
