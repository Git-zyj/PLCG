/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_1 == (!490171622536528620)));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0] = (!var_10);
        arr_3 [i_0] = ((!(((20 ? -490171622536528617 : var_8)))));
    }
    var_13 = (max(((var_9 ? (((var_11 ? -23 : -108))) : 4000926925)), 1188556185));
    #pragma endscop
}
