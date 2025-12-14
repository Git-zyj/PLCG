/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_14 = (((min((max(1, var_2)), (((arr_0 [i_0]) ? var_7 : var_9)))) ^ (((var_2 ? (min((arr_0 [i_0]), (arr_1 [i_0] [i_0]))) : (max((arr_1 [i_0] [i_0]), (arr_0 [i_0 - 4]))))))));
        var_15 += ((!(((((max(65535, 201))) / var_3)))));
    }
    for (int i_1 = 4; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_16 -= (((min((arr_1 [i_1] [i_1]), var_2)) ^ (((36805 ? 56222 : -798224303)))));
        var_17 = ((((min((192 < var_5), 65519))) | (((var_9 == ((max(var_10, var_12))))))));
        var_18 -= 19069;
        arr_5 [i_1] [i_1 - 3] = ((0 ? 117 : 0));
    }
    var_19 -= var_10;
    var_20 -= (min(((var_6 ? var_1 : (var_12 + var_9))), (((((min(0, 16))) + -var_8)))));
    #pragma endscop
}
