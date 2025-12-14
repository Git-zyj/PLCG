/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 605836048;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = ((101 ? ((((32 ^ 13) ? (-77 ^ var_2) : ((var_10 ? 123 : -7))))) : ((var_0 ? ((-39 ? 605836048 : 402897716)) : (((~(arr_1 [i_0]))))))));
        var_14 = (((+(((arr_0 [i_0] [i_0]) >> (arr_1 [i_0]))))) * (((((193 ? (arr_1 [i_0]) : 193)) >> (((arr_0 [i_0] [7]) - 4204980836))))));
        var_15 *= ((((887075314 ? (((arr_1 [i_0]) % -120)) : (((var_9 < (arr_0 [i_0] [i_0])))))) >> (((68652367872 + var_1) - 71113873164))));
    }
    var_16 = -13;
    var_17 |= (max(var_8, (var_8 | var_8)));
    #pragma endscop
}
