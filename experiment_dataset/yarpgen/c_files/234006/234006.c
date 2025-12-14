/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((min(-18446744073709551615, 13887)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [1] = (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])));
        var_18 = ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (((arr_0 [i_0]) ? var_10 : var_16)) : ((((arr_0 [i_0]) & (arr_0 [i_0]))))));
        var_19 *= (((((((arr_0 [i_0]) + 2147483647)) << (((!var_0) - 1)))) == var_14));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_20 = var_13;
        var_21 = (max(var_21, (((1 >> ((((-(!0))) + 24)))))));
    }
    #pragma endscop
}
