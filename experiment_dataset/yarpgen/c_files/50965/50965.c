/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_1 + 2147483647) << (-2906361726420148739 - 15540382347289402877))));
    var_17 = (max(var_10, (((max(36869, 1))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (((((arr_1 [i_0] [i_0]) <= (arr_0 [1] [1]))) ? ((((!(arr_1 [i_0] [i_0]))))) : 0));
        var_19 *= (max((((~(~var_3)))), ((-(var_6 - var_2)))));
        var_20 = ((~(((((max((arr_1 [i_0] [i_0]), 36873))) <= var_0)))));
    }
    #pragma endscop
}
