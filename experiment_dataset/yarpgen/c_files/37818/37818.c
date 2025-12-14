/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!18446744073709551589);

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_20 = ((((!((max(-328398766753251061, (arr_0 [i_0 - 1] [i_0 + 4])))))) ? ((((((arr_1 [i_0]) ? var_12 : 5))) ? 26 : (arr_0 [i_0] [i_0]))) : ((((arr_1 [i_0]) ? 1 : (((arr_1 [i_0 + 1]) & (arr_0 [i_0 - 1] [i_0 + 3]))))))));
        arr_2 [i_0] [i_0] = ((+((max((arr_0 [i_0 - 1] [i_0]), var_13)))));
        arr_3 [i_0] [i_0] = var_11;
        arr_4 [i_0] = ((~(((((max((arr_0 [i_0] [0]), (arr_1 [i_0 + 2]))))) / (328398766753251049 - 14)))));
        arr_5 [i_0] = (min(-328398766753251061, 708050011));
    }
    var_21 = var_17;
    var_22 = var_4;
    var_23 = (((((-((max(var_13, var_5)))))) ? (((18446744073709551602 ? 54205 : var_18))) : (((-328398766753251061 || var_2) % var_6))));
    #pragma endscop
}
