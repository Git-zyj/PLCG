/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (((((((min(65535, var_7))) && (arr_2 [i_0])))) / var_8));
        arr_4 [i_0] [i_0] |= ((((min((var_5 & 214224831), 214224839))) | var_11));
        var_13 = var_4;
        var_14 += ((4294967271 ? (var_4 & var_4) : 7818692373786991008));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1] [9] = ((-214224840 ? 120 : var_10));
        var_15 = ((((min((arr_6 [i_1 - 1] [9]), var_11))) ? ((-7203453274646568659 & ((((arr_6 [i_1] [i_1]) ? -2147483646 : var_2))))) : ((((!105) << 1)))));
    }
    var_16 += (var_4 >= var_10);
    #pragma endscop
}
