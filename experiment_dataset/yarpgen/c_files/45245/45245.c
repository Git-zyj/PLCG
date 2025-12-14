/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_15 &= ((((!var_10) + -19)));
        var_16 = var_5;
        var_17 = (((((-(arr_0 [i_0 - 1])))) ? (((~(arr_1 [i_0 - 1] [i_0 - 1])))) : (~var_8)));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_18 = ((((min((arr_4 [i_1 + 1]), (arr_4 [i_1 - 1])))) ? 1073741760 : (((-(arr_4 [i_1 - 1]))))));
        var_19 += (min((((var_13 != (arr_4 [i_1])))), -var_11));
    }
    var_20 = (var_2 % var_14);
    var_21 = var_2;
    #pragma endscop
}
