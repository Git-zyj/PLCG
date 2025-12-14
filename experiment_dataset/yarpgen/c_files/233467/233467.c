/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((var_16 && (!var_13)));
    var_18 |= ((-(max(var_0, var_12))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 += (((((arr_0 [24] [24]) / (((((arr_1 [14]) < (arr_0 [18] [18]))))))) + ((((((arr_1 [20]) & (arr_3 [i_0] [i_0])))) ? (((~(arr_1 [18])))) : var_11))));
        var_20 *= (((((((!(arr_3 [i_0] [i_0]))) ? ((~(arr_2 [i_0] [20]))) : (arr_3 [i_0] [i_0])))) < (((((arr_3 [i_0] [i_0]) ? var_8 : var_6)) | ((((arr_3 [i_0] [i_0]) & (arr_1 [22]))))))));
    }
    var_21 = (min(var_21, var_11));
    #pragma endscop
}
