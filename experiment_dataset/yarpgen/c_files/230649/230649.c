/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_8 + 2147483647) << (var_15 - 1346783479)))) ? var_8 : 18));
    var_18 = (max(var_18, var_15));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_19 = ((~(arr_2 [i_0] [i_0 - 1])));
        arr_3 [i_0] [i_0] = (max((((arr_1 [i_0] [i_0 + 1]) ? (arr_0 [i_0 - 2]) : (arr_1 [i_0] [i_0 + 1]))), 2139267213));
    }
    #pragma endscop
}
