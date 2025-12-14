/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((((var_1 ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((arr_1 [i_0]) % (arr_1 [i_0]))) : var_4);
        arr_3 [i_0] = ((-(((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        arr_4 [i_0] = (((((~(((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [19])))))) ? (max(((var_3 + (arr_0 [i_0]))), (((arr_0 [i_0]) / (arr_0 [i_0]))))) : (((((max(var_5, 34275)))) + (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))))));
        arr_5 [0] = (((-125 * 3188734195579742267) + var_2));
    }
    #pragma endscop
}
