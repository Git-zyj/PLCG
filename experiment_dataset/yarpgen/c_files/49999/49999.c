/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_6;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_16 ^= ((((!(((2552954023 ? var_0 : 2042050689))))) ? ((((((arr_1 [i_0]) ? var_11 : 2005710188))) ? (((arr_0 [i_0 + 2]) ^ 1584819)) : (var_0 && var_1))) : (((arr_0 [i_0]) ? (arr_1 [i_0]) : ((-(arr_0 [i_0])))))));
        var_17 = (((arr_2 [i_0] [i_0]) ? ((((arr_0 [i_0 + 4]) <= (arr_2 [i_0 + 2] [i_0])))) : (arr_0 [i_0 + 4])));
        var_18 &= (arr_1 [i_0]);
        arr_3 [i_0] = (((14303857626714400398 & 18446744073709551615) << ((((var_13 ? 1818566507 : 4190842932)) - 1818566493))));
        var_19 = (((max((max((arr_1 [i_0 + 4]), (arr_2 [i_0] [i_0]))), var_4)) >= (((var_2 ? var_7 : (max((arr_2 [i_0] [i_0]), 1234988752)))))));
    }
    var_20 += 178;
    #pragma endscop
}
