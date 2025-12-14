/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_17 += min(((((var_15 && var_11) && var_5))), (((arr_1 [5] [i_0 - 2]) * 3033660154)));
        arr_2 [1] = max((((!(arr_1 [10] [i_0 + 2])))), ((var_0 + (((arr_1 [i_0 - 1] [13]) - 2911748744)))));
    }
    var_18 *= var_1;
    #pragma endscop
}
