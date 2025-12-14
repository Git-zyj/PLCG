/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max(17421090870057655925, (((var_6 ? var_10 : -13))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((~(arr_0 [i_0])));
        var_15 = ((-(var_4 * var_1)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_16 = (min(var_16, var_3));
        var_17 = ((-(((!(arr_5 [i_1]))))));
    }
    var_18 = (max(var_18, (((-(max(var_0, ((var_13 ? var_11 : 4187422321)))))))));
    var_19 = var_8;
    #pragma endscop
}
