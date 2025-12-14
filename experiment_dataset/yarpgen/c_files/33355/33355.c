/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_4 [5] |= (((((min((arr_1 [21]), var_9)))) ? 15 : (min((((arr_1 [0]) ? var_5 : (arr_3 [i_0]))), (var_2 < 242)))));
        var_10 *= (((min(247, var_5))));
    }
    var_11 = min(15565, -8553);
    var_12 = ((var_3 && (((var_7 / (!0))))));
    #pragma endscop
}
