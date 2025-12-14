/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        var_17 = (min(var_17, (((((((arr_1 [i_0 + 1]) << (((-1 + 30) - 27))))) && (((2527 << (18446744073709551612 - 18446744073709551593)))))))));
        arr_2 [i_0] = ((((((~1) | (~-9223372036854775789)))) ^ (((((~(arr_1 [1])))) ? -23119 : ((-7441612696677397983 ? 18446744073709551615 : 14368673678011643603))))));
    }
    var_18 = var_0;
    var_19 = (min(var_19, (((((-var_11 >> (var_16 + 740854887))) - ((var_4 / ((var_7 ? 14623 : var_13)))))))));
    #pragma endscop
}
