/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [0] = (((~(arr_1 [i_0] [i_0]))));
        var_20 = var_14;
    }
    var_21 = (min((var_18 <= var_4), (max(-12173465669628260176, var_4))));
    #pragma endscop
}
