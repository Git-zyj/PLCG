/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((var_0 ? ((((-766610625 * var_0) ? 1 : 1))) : (min((((21716 ? 1996974899 : var_4))), var_5))));
    var_14 = 21716;
    var_15 -= ((max(var_6, var_6)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = ((40774 | 43821) ? var_2 : (((arr_2 [i_0]) ? (((arr_3 [i_0] [i_0]) << (-57 + 79))) : (min((arr_0 [i_0]), 1)))));
        var_17 += (min(10240525932601879540, (((max((arr_0 [7]), var_5))))));
    }
    var_18 = (min(var_18, var_4));
    #pragma endscop
}
