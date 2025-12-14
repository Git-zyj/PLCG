/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0 + 1] = -99;
        var_17 += ((2604281556388853577 ? (!-2604281556388853577) : var_3));
        var_18 += ((-(min(2604281556388853577, 120))));
    }
    var_19 = (max(-var_9, ((min(-110, (!var_1))))));
    #pragma endscop
}
