/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 *= (!1);
        var_11 = (((1 >= var_2) ? ((1 ? 284239249 : -118)) : var_4));

        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            var_12 = ((-(var_9 && var_6)));
            var_13 = (min(var_13, (((1 ? ((((arr_1 [20]) << (((arr_3 [i_0] [i_1 + 2] [i_0]) - 4532882080158693214))))) : 114)))));
        }
    }
    var_14 ^= 284239256;
    #pragma endscop
}
