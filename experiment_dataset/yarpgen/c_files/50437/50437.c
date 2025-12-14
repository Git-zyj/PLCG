/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((((((0 ? 4798453103709107207 : 125))) ? (((0 ? 28 : var_3))) : (min(var_4, var_8)))), var_0));
    var_11 = ((!(((var_2 ? (!var_2) : var_6)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((max(var_5, 227)))) ? (((min((arr_2 [i_0]), 32767)))) : (min(((0 ? 18888 : 46657)), ((min((arr_0 [i_0]), (arr_0 [i_0]))))))));
        var_12 = min(((var_5 ? (min(1005420561434946646, 77)) : (((var_1 ? var_6 : 12476))))), ((max((max((arr_2 [i_0]), (arr_0 [i_0]))), ((min(208, 18892)))))));
        arr_4 [i_0] = (min((min(249, ((6 ? 221 : 2305843009213693951)))), (max(((min(var_8, 27649))), (min(2305843009213693951, (arr_2 [i_0])))))));
    }
    #pragma endscop
}
