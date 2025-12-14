/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(((var_4 ? var_8 : 6758914849718041434)), var_5))) ? 13 : -13));
    var_13 = var_5;
    var_14 = var_8;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_1;
        arr_3 [i_0] [i_0] = (min((((max(24, var_5)))), (max(((13238817805902265202 ? -6758914849718041428 : 1)), ((-6758914849718041419 ? (-9223372036854775807 - 1) : 1))))));
        arr_4 [i_0] = ((((min((arr_0 [i_0]), (arr_0 [i_0])))) ? (arr_1 [5] [4]) : ((-(arr_1 [i_0] [i_0])))));
    }
    #pragma endscop
}
