/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_7;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [13] = -12133;
        arr_3 [i_0] [13] = ((((var_3 + ((min(181, 17))))) - var_8));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_8 [i_0] [i_0] = 8388607;
            arr_9 [i_0] [i_1] = (var_0 > 0);
        }
    }
    #pragma endscop
}
