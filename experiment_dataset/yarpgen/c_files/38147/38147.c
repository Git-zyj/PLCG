/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_14;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = (arr_0 [i_0]);
        arr_4 [i_0] = ((!(((2904803064957678303 ? (!var_13) : (arr_3 [i_0] [i_0]))))));
        var_19 *= (var_2 ^ var_3);
        arr_5 [i_0] = (((((-(((arr_1 [17] [17]) + var_14))))) - ((-(arr_3 [i_0] [i_0])))));
        arr_6 [i_0] [i_0] = var_15;
    }
    #pragma endscop
}
