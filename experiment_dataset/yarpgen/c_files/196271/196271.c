/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_10 ^= (((~((~(arr_0 [i_0 - 1] [i_0]))))));
        var_11 += (max(30091, 1));
    }
    var_12 |= ((-7983933871694433454 ? (min((max(var_9, var_5)), (min(var_5, var_4)))) : var_4));
    #pragma endscop
}
