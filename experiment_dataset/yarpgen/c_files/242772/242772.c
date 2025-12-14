/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_15, -var_5));
    var_19 *= ((-(min(13397, (min(1, 1928442522))))));
    var_20 = ((var_9 * ((var_1 * (min(var_10, var_5))))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_21 = (min(var_0, (var_9 * 0)));
        arr_3 [i_0] = -1331;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_22 = (((-(arr_4 [i_1] [i_1]))));
        arr_6 [i_1] = ((((arr_5 [i_1]) == var_1)));
    }
    #pragma endscop
}
