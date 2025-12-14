/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((max(125, (min(1, 18446744073709551615)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = (max((min((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))), (((arr_0 [i_0]) ? (arr_1 [i_0] [19]) : (arr_0 [i_0]))))), (arr_0 [i_0])));
        var_12 &= (min((min((arr_0 [i_0]), (arr_0 [16]))), (max((arr_0 [i_0]), (min((arr_1 [15] [15]), (arr_0 [1])))))));
    }
    var_13 = (max(((min(((max(var_4, var_0))), (max(var_0, var_5))))), (max(((min(var_3, var_6))), ((var_9 ? var_0 : var_8))))));
    #pragma endscop
}
