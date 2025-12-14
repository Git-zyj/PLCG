/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (min((((((4294967274 ? 32753 : 111))) ? var_0 : var_1)), var_15));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(5, -32753));
        arr_4 [i_0] [i_0] = (arr_2 [i_0] [3]);
        var_17 = ((((-32753 - (arr_1 [i_0]))) * (arr_2 [2] [2])));
    }
    var_18 = (max(var_13, var_9));
    #pragma endscop
}
