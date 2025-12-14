/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = (min(var_15, (((var_8 <= (arr_1 [i_0]))))));
        var_16 = (max((((arr_2 [i_0] [i_0]) ? var_3 : 54659)), ((((var_9 > var_3) && 2147483647)))));
    }
    var_17 = (((((var_5 ? (max(var_1, 127)) : ((-2147483647 ? 13343 : var_10))))) ? ((((2516064369872540804 ? var_14 : var_11)))) : var_6));
    #pragma endscop
}
