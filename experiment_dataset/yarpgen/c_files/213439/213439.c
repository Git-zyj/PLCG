/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((((min(104, (var_2 / 16)))) ? var_7 : var_8));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = ((((((arr_2 [i_0]) ? 4611685743549480960 : var_6))) ? (((arr_2 [i_0]) ^ (arr_2 [i_0]))) : ((((!(arr_2 [4])))))));
        var_14 = (((arr_2 [i_0]) ? (arr_1 [i_0] [i_0]) : (((4643555813979712008 + 32764) / (min(-865415905674940414, var_2))))));
        var_15 -= (arr_0 [1] [1]);
    }
    var_16 = (((((((((-145463109 + 2147483647) << (145463109 - 145463109)))) ? (!var_10) : (-33 >= 15217)))) | (min(2113445645, 717539463742443585))));
    var_17 = (max(var_17, (((((((var_1 ? 8721 : var_5)) ? -15218 : var_10)))))));
    var_18 = (max(var_18, ((((var_6 || ((min(2304717109306851328, var_3)))))))));
    #pragma endscop
}
