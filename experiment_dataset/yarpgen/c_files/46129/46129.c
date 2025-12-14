/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((-1025289614 ? 3185118515 : var_0))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = min((3185118515 >= 1109848780), ((var_6 <= (max(1109848780, var_13)))));
        var_20 += (arr_2 [i_0] [i_0]);
    }
    #pragma endscop
}
