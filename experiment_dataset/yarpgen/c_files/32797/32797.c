/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 += ((31611 ? 18446744073709551602 : 1070296600));
        var_21 = ((((arr_0 [i_0]) >= (arr_1 [12] [i_0]))));
        var_22 = (min(var_22, (15 << 4)));
        arr_2 [i_0] [7] = ((((-(arr_1 [i_0] [i_0])))) && (arr_1 [i_0] [i_0]));
    }
    var_23 = ((!((max((225 >= 1), var_11)))));
    var_24 = (min(251, 20));
    #pragma endscop
}
