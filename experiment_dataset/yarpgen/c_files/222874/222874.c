/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-1 ? -49 : ((min(255, 16778)))));
    var_14 = (min(var_14, 3));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [18] = (((max((9149071702349550744 == var_10), 4646545990733341009))) ? ((16 ? 0 : (arr_0 [i_0]))) : ((min(-14981, 536870911))));
        arr_3 [i_0] = var_2;
    }
    #pragma endscop
}
