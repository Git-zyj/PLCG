/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((((max((710601555 * var_9), ((var_11 ? (arr_0 [i_0] [i_0 - 3]) : var_9))))) ? ((max(-83, 0))) : (((min(31, 0))))));
        arr_3 [i_0 - 2] [i_0 - 2] = ((~(max(((var_10 ? var_1 : var_10)), var_9))));
        arr_4 [i_0] = ((~(min(-35, var_4))));
    }
    var_12 = (-9223372036854775807 - 1);
    #pragma endscop
}
