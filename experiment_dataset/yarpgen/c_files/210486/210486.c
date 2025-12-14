/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (min(((min((((-19 ? 623666818 : var_9))), (var_17 ^ var_7)))), (min(((var_6 ? var_11 : var_6)), var_9))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_19 = (min(var_19, (((~(min((arr_0 [1]), -5700)))))));
        var_20 = (min(var_20, ((((min((max(1, 5595565164967612000)), -1))) ? (arr_1 [i_0]) : (((((min(-1019515787, 1019515785))) || var_2)))))));
        arr_3 [i_0] = (!((max((var_2 ^ var_13), -1019515802))));
        var_21 = ((-(max(11140186587681789433, ((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))))))));
    }
    var_22 = (((((((max(var_1, 43194))) ? (min(var_7, -1019515780)) : var_5))) ? ((var_0 << (-var_14 + 169))) : var_8));
    #pragma endscop
}
