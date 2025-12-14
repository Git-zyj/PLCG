/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_15 ? ((max(var_10, var_15))) : var_3);
    var_21 = ((((-(min(var_18, var_2)))) >= var_3));
    var_22 = ((-(max((max(var_14, var_1)), (((var_0 ? var_15 : var_3)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_23 = (11834120586401160000 / 32);
        arr_2 [i_0] = (((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [14] [i_0])))) ? ((~(arr_1 [i_0]))) : (arr_1 [i_0]));
    }
    #pragma endscop
}
