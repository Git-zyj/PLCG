/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (min(var_9, 240));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 ^= 585757763;
        var_16 = (max(var_16, ((((arr_1 [i_0]) ? ((((var_2 && ((min(100, var_7))))))) : (min((((31194 ? -110 : var_9))), ((var_12 ? var_0 : var_2)))))))));
        arr_4 [i_0] [i_0] = (((min((var_12 >> 1), (!0))) >= ((((max((arr_3 [i_0]), var_11))) ? 7083131800707871488 : var_13))));
    }
    #pragma endscop
}
