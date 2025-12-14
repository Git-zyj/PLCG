/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_13 ? ((var_4 + ((min(var_4, var_11))))) : ((max(-64, 1)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 -= (28 + 13593633729953050769);
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = ((((max((((arr_2 [i_0] [i_0]) | var_0)), ((((arr_2 [i_0] [i_0]) ^ (arr_0 [i_0] [i_0]))))))) + (min(45033, (13593633729953050747 + 15)))));
        arr_5 [i_0] = (((((120 ? 2044 : 13593633729953050746))) ? (max(124, -2902387404608944191)) : (((13593633729953050747 ? 5 : 1)))));
    }
    #pragma endscop
}
