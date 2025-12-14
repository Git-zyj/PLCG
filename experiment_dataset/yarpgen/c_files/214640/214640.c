/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_1;
    var_21 = (max(var_21, 696632440));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_22 = (max(var_22, (((((var_5 ? (20 == var_8) : ((var_12 ? -117 : 32743)))) == (((!(((3 ? var_17 : (arr_0 [i_0] [i_0]))))))))))));
        var_23 += var_10;
        var_24 |= (arr_1 [i_0 - 1] [i_0 + 2]);
        var_25 = (min(var_25, (((~((((max(-7, (-32767 - 1)))) ? (min(2698444258, 32715)) : 32699)))))));
    }

    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_26 *= ((((max((arr_3 [i_1]), (arr_3 [i_1])))) >> ((((-32742 ? -1576553987 : var_16)) + 1576554018))));
        var_27 |= (var_4 ? ((((max(var_1, 3))) ? (arr_3 [i_1]) : (-32711 || var_4))) : (max((var_13 && -9), (min((arr_3 [i_1]), -1860102498)))));
    }
    #pragma endscop
}
