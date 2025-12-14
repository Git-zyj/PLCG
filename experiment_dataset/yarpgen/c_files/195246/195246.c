/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 = (min(var_11, ((((arr_0 [i_0]) << (arr_0 [i_0]))))));
        var_12 &= (arr_1 [i_0]);
        var_13 += ((((var_3 * (arr_1 [i_0]))) != (arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_14 = ((((((arr_3 [i_1]) - (((!(arr_2 [i_1 + 1]))))))) ? (min((arr_3 [i_1]), ((var_2 ? var_6 : 0)))) : (arr_3 [i_1])));
        var_15 += ((((((var_3 | (arr_2 [i_1]))) > (!64)))) + (!0));
        var_16 = ((-(min((min((arr_1 [3]), var_4)), (((-(arr_3 [i_1]))))))));
    }
    var_17 = (max(var_17, ((min(1234759733, (((min(var_2, var_1)) | var_3)))))));
    var_18 &= (min((((103 || 211) | (!var_0))), (((var_3 > (-100 - 100))))));
    #pragma endscop
}
