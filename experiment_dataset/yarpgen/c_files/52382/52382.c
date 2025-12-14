/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((max(4321, 1073733632)), var_13));
    var_21 = 3894692617;
    var_22 = var_10;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0] = (((((var_4 ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (arr_1 [i_0]) : ((293604557 ? (arr_1 [11]) : (arr_0 [4])))));
        arr_3 [i_0] = (((arr_0 [i_0]) ? (!151) : (arr_1 [8])));
    }
    #pragma endscop
}
