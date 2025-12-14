/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_8, (((!(!0))))));
    var_14 -= ((max(((1 ? 1220147443745044462 : var_8)), (((1 ? var_11 : var_8))))));
    var_15 = (var_3 + var_8);

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_16 &= ((!((!(arr_2 [i_0 + 1])))));
        var_17 = arr_0 [i_0];
        var_18 = 1;
        var_19 = (min(var_19, ((max(var_3, (min((((var_9 == (arr_0 [i_0 - 2])))), (arr_2 [i_0]))))))));
    }
    var_20 = (var_0 ? ((var_0 | ((~(-32767 - 1))))) : var_12);
    #pragma endscop
}
