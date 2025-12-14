/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min(var_12, (!var_0));
    var_19 = ((~((var_0 ? ((var_15 ? var_1 : -7058706744724881685)) : var_1))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((-23533 ? (((11318 - 14) ^ 96)) : (((120 || 2145386496) + 1073741824))));
        arr_2 [i_0] = (max((arr_1 [i_0]), ((((max(-11319, var_13))) ? (max(var_12, 11319)) : (var_1 != var_14)))));
        arr_3 [i_0] = ((((-(arr_0 [i_0] [i_0]))) * ((((!(arr_1 [i_0])))))));
    }
    var_21 = (((((-11319 ? 12038901036700933467 : var_1))) ? var_9 : (max((max(var_13, var_12)), var_16))));
    #pragma endscop
}
