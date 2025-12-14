/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (max((((var_8 >= (var_15 < var_7)))), (((150 / var_10) << ((((min(var_4, var_5))) + 160))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = (max(var_20, ((max(((((arr_1 [i_0]) != (arr_0 [i_0])))), 105)))));
        var_21 ^= (max((((arr_1 [i_0]) + 3394905284)), (arr_2 [i_0] [i_0])));
    }
    #pragma endscop
}
