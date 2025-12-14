/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 4294967295;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 += ((((min((arr_0 [13] [i_0]), (arr_0 [i_0] [i_0])))) ? var_10 : ((((4294967295 || (((11 >> (var_18 - 955473788))))))))));
        arr_2 [i_0] [i_0] = ((((3209524605 ? (min(var_3, (arr_1 [i_0] [i_0]))) : (var_4 || 7747044430227739402)))) ? ((-((((arr_1 [i_0] [i_0]) > var_2))))) : (arr_1 [i_0] [8]));
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
        var_21 = (min((!var_18), (((arr_1 [i_0] [i_0]) | var_7))));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_22 = (((var_17 - (arr_0 [i_1 - 1] [i_1 + 1]))));
        arr_6 [i_1] [i_1] = ((4 - ((var_18 << ((((18 ? var_6 : var_15)) - 879780637))))));
    }
    #pragma endscop
}
