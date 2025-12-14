/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_4);
    var_21 = 0;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = var_18;
        var_22 ^= ((var_5 + (min((((-(arr_1 [i_0])))), var_14))));
        var_23 = ((((arr_2 [i_0] [i_0]) ? ((-(-127 - 1))) : var_4)));
        arr_4 [i_0] = ((9223372036854775807 * ((((!(var_19 ^ 2147483647)))))));
        arr_5 [i_0] = -85;
    }
    #pragma endscop
}
