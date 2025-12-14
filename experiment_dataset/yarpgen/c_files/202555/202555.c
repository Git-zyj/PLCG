/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = 1;
        arr_3 [i_0] = ((((max(var_10, var_1))) ? ((1787951571 ? var_8 : var_2)) : var_7));
        arr_4 [i_0] [i_0] = var_6;
        var_19 += var_6;
        arr_5 [i_0] = (max((!1615574900), ((((max(var_8, var_6))) || var_16))));
    }
    var_20 = ((1481818280 != (!var_8)));
    #pragma endscop
}
