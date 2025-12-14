/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((max(var_1, var_8)), var_4));
    var_21 = 0;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = ((((min(((min((arr_0 [i_0] [4]), (arr_0 [i_0] [i_0])))), (min((arr_0 [i_0] [i_0]), var_3))))) >> ((((max(17043764770688591661, 4857114885493898306))) - 17043764770688591645))));
        var_22 = (arr_1 [7]);
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        var_23 -= (((((max(((151 <= (arr_1 [i_1 + 1]))), (arr_0 [i_1 + 1] [i_1 - 1]))))) & (arr_4 [i_1] [3])));
        var_24 *= var_13;
    }
    var_25 = 105;
    #pragma endscop
}
