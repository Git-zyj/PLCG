/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_15 ? var_1 : var_7))));
    var_17 = (!1);
    var_18 = var_10;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = (((arr_1 [i_0]) << (((((((arr_0 [i_0]) * (arr_0 [i_0]))))) - 138))));
        var_20 = 1;
        arr_2 [i_0] [i_0] = (arr_1 [4]);
        arr_3 [i_0] = 18446744073709551615;
        var_21 = (min(var_21, (((((((((var_8 + 2147483647) << (((var_10 + 9428) - 5)))) << ((((min(124, (arr_1 [i_0])))) - 123))))) ? var_13 : ((((((562949953421311 ? var_3 : (arr_1 [i_0])))) ? ((var_7 ^ (arr_1 [i_0]))) : (arr_0 [i_0])))))))));
    }
    #pragma endscop
}
