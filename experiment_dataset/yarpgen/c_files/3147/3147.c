/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_9 ? 14631062098363526095 : var_13));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_16 *= 1;
        arr_2 [i_0] [i_0] = 113;
    }
    #pragma endscop
}
