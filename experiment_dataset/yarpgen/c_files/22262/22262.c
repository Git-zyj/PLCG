/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((0 == var_7) ? (var_9 | var_1) : var_4)) % var_7);
    var_11 = (6460198939270806968 % ((~(max(var_8, 6915243833280790186)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = (((((var_0 ? var_2 : 9223372036854775796))) && (arr_1 [i_0])));
        arr_2 [i_0] = (!0);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((!(((~(((arr_4 [i_1]) - (arr_4 [i_1]))))))));
        arr_6 [i_1] = min(-6915243833280790169, (min(0, (arr_4 [i_1]))));
        var_13 = arr_4 [i_1];
    }
    var_14 = (max((((-4003250481511748764 + 9223372036854775807) >> (var_5 - 2142182509616384672))), var_9));
    #pragma endscop
}
