/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_3, (min(-var_4, var_3))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = ((~(arr_0 [i_0])));
        var_15 *= (((arr_0 [i_0]) ? (((!(arr_0 [i_0])))) : 64404));
        arr_2 [i_0] = (!(((~(arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = min(var_1, (((!(((~(arr_1 [i_1] [i_1]))))))));
        var_16 = ((!(((1 ^ (arr_5 [i_1] [14]))))));
        arr_8 [i_1] = ((~(arr_6 [i_1] [i_1])));
        var_17 = (max(((-((-(arr_4 [i_1] [i_1]))))), -var_6));
        var_18 *= (min((((((min(12417934195646890083, 6028809878062661533))) ? (arr_4 [i_1] [i_1]) : 31))), (max(((max((arr_1 [i_1] [i_1]), var_0))), 24))));
    }
    #pragma endscop
}
