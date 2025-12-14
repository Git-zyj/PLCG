/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((max(var_1, ((-3508200247703996587 ? 56 : 2147481600)))) * ((((var_10 <= var_14) << (var_13 - 17766351161976034685))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = (((((((552526965225925144 ? 237285129 : 92))) <= (((arr_1 [7]) ? var_11 : var_16)))) ? (((max((arr_0 [i_0]), (arr_0 [i_0]))))) : 22126022012423664));
        arr_2 [i_0] = max((max((arr_0 [i_0]), var_10)), (arr_1 [i_0]));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_20 += 552526965225925144;
        var_21 &= var_2;
    }
    #pragma endscop
}
