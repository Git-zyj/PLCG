/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_17 = (-(arr_0 [i_1]));
            var_18 = var_14;
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_19 = ((~(!var_2)));
            var_20 = (max(var_20, var_2));
            var_21 = ((2367560635 ? 151 : 1));
        }
        var_22 = ((!(((var_12 >> (var_3 - 133058580))))));
        arr_6 [i_0] [i_0] = (arr_0 [i_0]);
    }
    var_23 = var_3;
    var_24 = (~125829120);
    #pragma endscop
}
